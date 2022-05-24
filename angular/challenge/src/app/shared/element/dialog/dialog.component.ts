import { Component, OnInit, Inject } from '@angular/core';
import {MatDialogRef, MAT_DIALOG_DATA} from '@angular/material/dialog';
import { SchedulesElement } from 'src/app/dashboard/dashboard.component';

@Component({
  selector: 'app-dialog',
  templateUrl: './dialog.component.html',
  styleUrls: ['./dialog.component.css']
})
export class DialogComponent implements OnInit {
  element!: SchedulesElement;
  isChange!: boolean;

  constructor(
    @Inject(MAT_DIALOG_DATA)
    public data: SchedulesElement,
    public dialogRef: MatDialogRef<DialogComponent>,
  ) {}

  ngOnInit(): void {
    if(this.data.id !== null) {
      this.isChange = true;
    }else  {
      this.isChange = false;
    }
  }

  onCancel(): void {
    this.dialogRef.close();
  }

}
