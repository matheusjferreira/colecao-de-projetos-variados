import { DataSource } from '@angular/cdk/collections';
import { Component, OnInit, ViewChild } from '@angular/core';
import { MatDialog } from '@angular/material/dialog';
import { MatTable } from '@angular/material/table';
import { DialogComponent } from '../shared/element/dialog/dialog.component';

export interface SchedulesElement {
  id: number;
  number: string;
  hour: string;
  message: string;
  receivers: string;
}

const ELEMENT_DATA: SchedulesElement[] = [
  {id: 1, number: '+55 11 9123456789', hour: '00:00', message: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.', receivers: '+ 55 11 9123456789 + 55 11 9123456789'},
  {id: 2, number: '+55 12 9123456789', hour: '00:00', message: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.', receivers: '+ 55 11 9123456789 + 55 11 9123456789'},
  {id: 3, number: '+55 13 9123456789', hour: '00:00', message: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.', receivers: '+ 55 11 9123456789 + 55 11 9123456789'},
  {id: 4, number: '+55 14 9123456789', hour: '00:00', message: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.', receivers: '+ 55 11 9123456789 + 55 11 9123456789'},
  {id: 5, number: '+55 15 9123456789', hour: '00:00', message: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.', receivers: '+ 55 11 9123456789 + 55 11 9123456789'},
  {id: 6, number: '+55 16 9123456789', hour: '00:00', message: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.', receivers: '+ 55 11 9123456789 + 55 11 9123456789'},
  {id: 7, number: '+55 17 9123456789', hour: '00:00', message: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.', receivers: '+ 55 11 9123456789 + 55 11 9123456789'},
  {id: 8, number: '+55 18 9123456789', hour: '00:00', message: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.', receivers: '+ 55 11 9123456789 + 55 11 9123456789'},
  {id: 9, number: '+55 19 9123456789', hour: '00:00', message: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.', receivers: '+ 55 11 9123456789 + 55 11 9123456789'},
  {id: 10, number: '+55 20 9123456789', hour: '00:00', message: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.', receivers: '+ 55 11 9123456789 + 55 11 9123456789'},
];

@Component({
  selector: 'app-dashboard',
  templateUrl: './dashboard.component.html',
  styleUrls: ['./dashboard.component.css']
})
export class DashboardComponent implements OnInit {

  @ViewChild(MatTable)
  table!: MatTable<any>;
  displayedColumns: string[] = ['id', 'number', 'hour', 'message', 'receivers', 'edit-delete', 'export'];
  dataSource = ELEMENT_DATA;

  constructor(public dialog: MatDialog) { }

  ngOnInit(): void {
  }

  openDialog(element: SchedulesElement | null): void {
    const dialogRef = this.dialog.open(DialogComponent, {
      width: '300px', 
      data: element === null ? {
        id: null,
        number: '',
        hour: '',
        message: '',
        receivers: '',
      } : {
        id: element.id,
        number: element.number,
        hour: element.hour,
        message: element.message,
        receivers: element.receivers
      }
    });

    dialogRef.afterClosed().subscribe(result => {
      if(result !== undefined) {
        if(this.dataSource.map(p => p.id).includes(result.id)) {
          this.dataSource[result.id -1] = result;
          this.table.renderRows();
        }else {
          this.dataSource.push(result);
          this.table.renderRows();
        }
      }
    });
  }

  editElement(element: SchedulesElement): void {
    this.openDialog(element);
  }

  deleteElement(id: number): void {
    this.dataSource = this.dataSource.filter(p => p.id !== id);
  }

}
