#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<stdbool.h>
#include "functions.h"

typedef struct answers 
{

	int question;
	char letter;

} ANSWER;

FILE *pointer;

ANSWER answer;

void buffer(){

	int buffer;
	while((buffer = fgetc(stdin)) != EOF && buffer != '\n' ){}

}

void menu() {

	int op;

	do {

		system("clear");

		printf("\n");
		printf("Welcome to the QUIZ based on the company SPACEX!\n");
		printf("\n");
		printf("		                                                                                                                                                                                             .  \n");        
		printf("                                                                                                                                                                                 ..',                   \n");
		printf("                                                                                                                                                                         .';:;                          \n");
		printf("                                                                                                                                                                  ..,clx.                               \n");
		printf("                                                                                                                                                             .';ldko                                    \n");
		printf(" .....................       ......................          ...                .....................       .....................         .......        .,cdkko                                        \n");
		printf(" ....                        .....             ....          ....              .....                                                        .......  .,cxkkk.                                           \n");
		printf(" ....                        .....             ....           .....            .....                         .............                        ':dkkkk                                               \n");
		printf("  ....................       ......................            .....           .....                        .....                              .cxkkkk  '                                               \n");
		printf("                   ....      .....                    ................         .....                        .....                           .:xkkkk; .......                                            \n");
		printf("                   ....      .....                                .....        .....                        .....                         ,okkkkk      ........                                         \n");
		printf(" .....................       .....                                  .....       .....................       .....................       :xkkkkx           .....'.                                       \n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("Choose one of the options: \n");
		printf("\n");
		printf("[1] Start the quiz.\n");
		printf("[2] Check answers.\n");
		printf("[3] Copyright.\n");
		printf("[4] Leave.\n");

		scanf("%i", &op);

		switch(op) {
			case 1:
			quiz();
			break;

			case 2:
			answers();
			break;

			case 3:
			copy();
			break;

			case 4:
			exit(1);
			break;

			default:
			printf("Please enter a valid option!\n");
		}
	}while(op);

}


void quiz() {

	int i = 1;
	char input;
	bool confirmation = false;

	pointer = fopen ("answers.bin","w+b");

	if (pointer == NULL) {
		printf("Error opening file...\n");
		system("read -p \"Press enter to exit\" going out");
	}

	do {

		system("clear");

		printf ("Question %i: \n", i);
		printf ("What is the name of the founder of SpaceX?\n \n");
		printf ("[a] Steve Jobs.\n");
		printf ("[b] Bill Gates.\n");
		printf ("[c] Elon Musk.\n");
		printf ("[d] Mark Zuckerberg.\n\n"); 
		buffer();
		answer.letter = getchar();

		printf("You chose the answer: [ %c ]\n\n", answer.letter);

		printf("Change answer? [y] / [n]\n");

		buffer();
		input = getchar();

		if(toupper(input) == 'N') {

			fwrite(&answer, sizeof(ANSWER),1,pointer);
			i++;
			answer.question = i;
			confirmation = true;

		}else if(toupper(input) == 'Y') {

			printf("\nLoading...\n");
			system("read -p \"Press enter to continue\" going out");

		}else if(toupper(input) == 'M') {

			menu();

		}else{

			printf("\nEnter a valid amount!\n");
			system("read -p \"Press enter to continue\" going out");
			
		}

	}while(!confirmation);

	confirmation = false;

	do {

		system("clear");

		printf ("Question %i: \n", i);
		printf ("In what year was Spacex founded?\n \n");
		printf ("[a] 1998.\n");
		printf ("[b] 2006.\n");
		printf ("[c] 2020.\n");
		printf ("[d] 2002.\n\n"); 
		buffer();
		answer.letter = getchar();

		printf("You chose the answer: [ %c ]\n\n", answer.letter);

		printf("Change answer? [y] / [n]\n");

		buffer();
		input = getchar();

		if(toupper(input) == 'N') {

			fwrite(&answer, sizeof(ANSWER),1,pointer);
			i++;
			answer.question = i;
			confirmation = true;

		}else if(toupper(input) == 'Y') {

			printf("\nLoading...\n");
			system("read -p \"Press enter to continue\" going out");

		}else if(toupper(input) == 'M') {

			menu();

		}else{

			printf("\nEnter a valid amount!\n");
			system("read -p \"Press enter to continue\" going out");
			
		}

	}while(!confirmation);

	confirmation = false;

	do {

		system("clear");

		printf ("Question %i: \n", i);
		printf ("Space X is a company of: \n \n");
		printf ("[a] Weaving.\n");
		printf ("[b] Nuclear weapons.\n");
		printf ("[c] Aerospace and space transport services.\n");
		printf ("[d] None of the above.\n\n"); 
		buffer();
		answer.letter = getchar();

		printf("You chose the answer: [ %c ]\n\n", answer.letter);

		printf("Change answer? [y] / [n]\n");

		buffer();
		input = getchar();

		if(toupper(input) == 'N') {

			fwrite(&answer, sizeof(ANSWER),1,pointer);
			i++;
			answer.question = i;
			confirmation = true;

		}else if(toupper(input) == 'Y') {

			printf("\nLoading...\n");
			system("read -p \"Press enter to continue\" going out");

		}else if(toupper(input) == 'M') {

			menu();

		}else{

			printf("\nEnter a valid amount!\n");
			system("read -p \"Press enter to continue\" going out");
			
		}

	}while(!confirmation);

	confirmation = false;

	do {

		system("clear");

		printf ("Question %i: \n", i);
		printf ("On May 30, 2020, Spacex was the first private company to put humans into orbit with the Crew Dragon Demo-2 flight. What do you think about that?: \n \n");
		printf ("[a] whatever.\n");
		printf ("[b] Dangerous because Spacex is an irresponsible company to take humans on their rockets.\n");
		printf ("[c] Cool.\n");
		printf ("[d] Incredible.\n\n"); 
		buffer();
		answer.letter = getchar();

		printf("You chose the answer: [ %c ]\n\n", answer.letter);

		printf("Change answer? [y] / [n]\n");

		buffer();
		input = getchar();

		if(toupper(input) == 'N') {

			fwrite(&answer, sizeof(ANSWER),1,pointer);
			i++;
			answer.question = i;
			confirmation = true;

		}else if(toupper(input) == 'Y') {

			printf("\nLoading...\n");
			system("read -p \"Press enter to continue\" going out");

		}else if(toupper(input) == 'M') {

			menu();

		}else{

			printf("\nEnter a valid amount!\n");
			system("read -p \"Press enter to continue\" going out");
			
		}

	}while(!confirmation);

	confirmation = false;

	do {

		system("clear");

		printf ("Question %i: \n", i);
		printf ("Elon Musk, CEO and founder of Spacex, besides creating Spacex, what other company does he belong to?: \n \n");
		printf ("[a] SpaceX, Neuralink, Tesla Motors and PayPal.\n");
		printf ("[b] SpaceX, Neuralink, Tesla Motors and SolarCity.\n");
		printf ("[c] SpaceX, Tesla Motors and Amazon.\n");
		printf ("[d] SpaceX, Neuralink, General Motors and IBM.\n\n"); 
		buffer();
		answer.letter = getchar();

		printf("You chose the answer: [ %c ]\n\n", answer.letter);

		printf("Change answer? [y] / [n]\n");

		buffer();
		input = getchar();

		if(toupper(input) == 'N') {

			fwrite(&answer, sizeof(ANSWER),1,pointer);
			i++;
			answer.question = i;
			confirmation = true;

		}else if(toupper(input) == 'Y') {

			printf("\nLoading...\n");
			system("read -p \"Press enter to continue\" going out");

		}else if(toupper(input) == 'M') {

			menu();

		}else{

			printf("\nEnter a valid amount!\n");
			system("read -p \"Press enter to continue\" going out");
			
		}

	}while(!confirmation);

	confirmation = false;

	do {

		system("clear");

		printf ("Question %i: \n", i);
		printf ("Elon Musk, CEO and founder of Spacex, promises to take the man to Mars by 2030. What do you think about that?: \n \n");
		printf ("[a] Cool.\n");
		printf ("[b] I think it is an important achievement, as man must abit other planets in the future. \n");
		printf ("[c] Whatever.\n");
		printf ("[d] Dangerous because Spacex is an irresponsible company to take humans on their rockets.\n\n"); 
		buffer();
		answer.letter = getchar();

		printf("You chose the answer: [ %c ]\n\n", answer.letter);

		printf("Change answer? [y] / [n]\n");

		buffer();
		input = getchar();

		if(toupper(input) == 'N') {

			fwrite(&answer, sizeof(ANSWER),1,pointer);
			i++;
			answer.question = i;
			confirmation = true;

		}else if(toupper(input) == 'Y') {

			printf("\nLoading...\n");
			system("read -p \"Press enter to continue\" going out");

		}else if(toupper(input) == 'M') {

			menu();

		}else{

			printf("\nEnter a valid amount!\n");
			system("read -p \"Press enter to continue\" going out");
			
		}

	}while(!confirmation);

	confirmation = false;

	do {

		system("clear");

		printf ("Question %i: \n", i);
		printf ("How much do you believe the Spacex company is worth?\n \n");
		printf ("[a] $ 74 billion.\n");
		printf ("[b] Less than $ 10 billion.\n");
		printf ("[c] $ 450 million.\n");
		printf ("[d] Over $ 280 billion.\n\n"); 
		buffer();
		answer.letter = getchar();

		printf("You chose the answer: [ %c ]\n\n", answer.letter);

		printf("Change answer? [y] / [n]\n");

		buffer();
		input = getchar();

		if(toupper(input) == 'N') {

			fwrite(&answer, sizeof(ANSWER),1,pointer);
			i++;
			answer.question = i;
			confirmation = true;

		}else if(toupper(input) == 'Y') {

			printf("\nLoading...\n");
			system("read -p \"Press enter to continue\" going out");

		}else if(toupper(input) == 'M') {

			menu();

		}else{

			printf("\nEnter a valid amount!\n");
			system("read -p \"Press enter to continue\" going out");
			
		}

	}while(!confirmation);

	confirmation = false;

	do {

		system("clear");

		printf ("Question %i: \n", i);
		printf ("How many Spacex rocket models do you currently own (April, 2021)?\n \n");
		printf ("[a] 2.\n");
		printf ("[b] Less than 3.\n");
		printf ("[c] 4.\n");
		printf ("[d] Over 5.\n\n"); 
		buffer();
		answer.letter = getchar();

		printf("You chose the answer: [ %c ]\n\n", answer.letter);

		printf("Change answer? [y] / [n]\n");

		buffer();
		input = getchar();

		if(toupper(input) == 'N') {

			fwrite(&answer, sizeof(ANSWER),1,pointer);
			i++;
			answer.question = i;
			confirmation = true;

		}else if(toupper(input) == 'Y') {

			printf("\nLoading...\n");
			system("read -p \"Press enter to continue\" going out");

		}else if(toupper(input) == 'M') {

			menu();

		}else{

			printf("\nEnter a valid amount!\n");
			system("read -p \"Press enter to continue\" going out");
			
		}

	}while(!confirmation);

	confirmation = false;

	do {

		system("clear");

		printf ("Question %i: \n", i);
		printf ("Where is the headquarters of the Spacex company located?\n \n");
		printf ("[a] Los Angeles, in Hawthorne.\n");
		printf ("[b] New York, Brooklyn.\n");
		printf ("[c] Los Angeles, Hollywood.\n");
		printf ("[d] California, in Silicon Valley.\n\n"); 
		buffer();
		answer.letter = getchar();

		printf("You chose the answer: [ %c ]\n\n", answer.letter);

		printf("Change answer? [y] / [n]\n");

		buffer();
		input = getchar();

		if(toupper(input) == 'N') {

			fwrite(&answer, sizeof(ANSWER),1,pointer);
			i++;
			answer.question = i;
			confirmation = true;

		}else if(toupper(input) == 'Y') {

			printf("\nLoading...\n");
			system("read -p \"Press enter to continue\" going out");

		}else if(toupper(input) == 'M') {

			menu();

		}else{

			printf("\nEnter a valid amount!\n");
			system("read -p \"Press enter to continue\" going out");
			
		}

	}while(!confirmation);

	confirmation = false;

	do {

		system("clear");

		printf ("Question %i: \n", i);
		printf ("What is Starlink?\n \n");
		printf ("[a] A company created by Elon Musk to provide internet to its customers.\n");
		printf ("[b] Starlink is a Spacex project, of low cost, high performance satellite constellations to implement a new internet-based communication system.\n");
		printf ("[c] A company that provides free internet anywhere in the world.\n");
		printf ("[d] None of the previous.\n\n"); 
		buffer();
		answer.letter = getchar();

		printf("You chose the answer: [ %c ]\n\n", answer.letter);

		printf("Change answer? [y] / [n]\n");

		buffer();
		input = getchar();

		if(toupper(input) == 'N') {

			fwrite(&answer, sizeof(ANSWER),1,pointer);
			i++;
			answer.question = i;
			confirmation = true;

		}else if(toupper(input) == 'Y') {

			printf("\nLoading...\n");
			system("read -p \"Press enter to continue\" going out");

		}else if(toupper(input) == 'M') {

			menu();

		}else{

			printf("\nEnter a valid amount!\n");
			system("read -p \"Press enter to continue\" going out");
			
		}

	}while(!confirmation);

	confirmation = false;

	fclose(pointer);

}


void answers() {

	system("clear");

	pointer = fopen ("answers.bin","rb");

	if (pointer == NULL) {
		printf("Error opening file...\n");
		system("read -p \"Press enter to exit\" going out");
	}

	printf("                                                                      ..',,,'........                                   \n");                       
	printf("                                                             ..;:lllc:::;'..                                            \n");                       
	printf("                                                     .';cokOkxdl;,.                                                     \n");                       
	printf("                                                .':dOXWWKx:,.                                                           \n");                       
	printf("                                           .,cdkKWW0xo;..                                                               \n");                       
	printf("             'oOOOOOOkl.              .;lx0WMWKkl,.                                                                     \n");                       
	printf("              .cOWMMMMMNx:         .lOXMMMW0d;                                                                          \n");                       
	printf("                 ,d0WMMMMMO'  .'lkKNMMMXxo,                                [ ANSWERS ]                                  \n");                       
	printf("                    'dOXxc,,cxXMMMMM0o;.                                                                                \n");                       
	printf("                       ..:OMMMMMMKo;                                                                                    \n");                       
	printf("                     .:xNMMMMMKx;',l,                                                                                   \n");                       
	printf("                  .:kWMMMMMXx;.;xNMMW0d,                                                                                \n");                       
	printf("                .oNMMMMMMWd.   :OMMMMMMWOc.                                                                             \n");                       
	printf("              ,xXMMMMMMKc'       ;lkWMMMMMKd;                                                                           \n");                       
	printf("            ;dKXXXXXXx:             .lkXXXXXXOc,                                                                        \n");                       
	printf("            .........                  .........                                                                        \n");
	printf("\n\n");

	while(fread(&answer, sizeof(ANSWER),1,pointer)) {

		printf("Question: %i = [%c] \n\n", answer.question, answer.letter);

	}

	system("read -p \"Press enter to exit\" going out");

	fclose(pointer);


}

void copy() {

	system("clear");
	printf("\n\n\n\n");
	printf("                                                   ,:                                                   \n");
	printf("                                                 ,' |                                                   \n");
	printf("                                                /   :                                                   \n");
	printf("                                             --'   /                                                    \n");
	printf("                                             \\/ />/                       S P A C E X                  \n");
	printf("                                             / <//_\\                                                   \n");
	printf("                                          __/   /                                                       \n");
	printf("                                          )'-. /                            Q U I Z                     \n");
	printf("                                          ./  :\\                                                       \n");
	printf("                                           /.' '                                                        \n");
	printf("                                         '/'                                                            \n");
	printf("                                         +                                                              \n");
	printf("                                        '                                                               \n");
	printf("                                      `.                                                                \n");
	printf("                                  .-'-                                                                  \n");
	printf("                                 (    |                                                                 \n");
	printf("                              . .-'  '.                                                                 \n");
	printf("                            ( (.   )8:                                                                  \n");
	printf("                         .'    / (_  )                    Developed by: Matheus Jediel Ferreira.        \n");
	printf("                          _. :(.   )8P  `                 C language.                                   \n");
	printf("                      .  (  `-' (  `.   .                 Images: <https://www.spacex.com/>;            \n");
	printf("                       .  :  (   .a8a)                            <http://www.ascii-art.de/ascii/pqr/rockets.txt>;\n");
	printf("                      /_`( 'a `a. )''                     Special thanks: Miguel Chiarello Fernandes.   \n");
	printf("                  (  (/  .  ' )=='                        2021.                                         \n");
	printf("                 (   (    )  .8'   +                                                                    \n");
	printf("                   (`'8a.( _(   (                                                                       \n");
	printf("                ,.-. `8P    ) `  )  +                                                                   \n");
	printf("              -'   (      -ab:  )                                                                       \n");
	printf("            '    _  `    (8P'Ya                                                                         \n");
	printf("          _(    (    )b  -`.  ) +                                                                       \n");
	printf("         ( 8)  ( _.aP' _a   \\( \\   *                                                                  \n");
	printf("       +  )/    (8P   (88    )  )                                                                       \n");
	printf("          (a:f   '     `'       `                                                                       \n\n\n\n\n");
	system("read -p \"Press enter to continue\" going out");
}

int main() {

	menu();

	return 0;
}