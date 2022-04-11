#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char command[10];
	char text[50];
	int val;
	
	while(1) {
		printf("Type a command: (UPPERCASE ONLY) ");
		gets(command);
		
		if(!strcmp(command, "HELP")) {
			printf("      COMMANDS:\n\n");
			printf("      RUN         run the interpreter\n");
			printf("      RUN SOUND   run the program with \"bips\"\n");
			printf("      REP         repeats numbers, arg: 000 to 999\n");
			printf("      TXT         update text, arg: any text you want\n");
			printf("      CLEAR       clear screen without lost the data\n");
			printf("      CLEAR ALL   clear screen and erase data\n");
			printf("      EXIT        end interpreter\n\n");
			
			printf("\t\t\tBy yamat0\n\n");
		}
		
		else if(!strcmp(command, "REP")) {
			printf("               _ ");
			scanf("%d", &val);
			getchar();
		}
		
		else if(!strcmp(command, "TXT")) {
			printf("                    _");
			gets(text);
		}
		
		else if(!strcmp(command, "RUN")) {
			if ((val > 0 && val <= 999) && (text[0] != '\0')) {
				for(int i = 0; i < val; i++)
					printf("              %s\n", text);
			}
			else {
				for(int i = 0; i < val++; i++)
					printf("               _ _ _ _ _\n");
			}
		}
		
		else if(!strcmp(command, "RUN SOUND")) {
			for(int i = 0; i < val; i++) {
				printf("               %s\n",text);
				putchar('\a');
			}
		}
		
		else if(!strcmp(command, "CLEAR")) system("cls");
		
		else if(!strcmp(command, "CLEAR ALL")) {
			val = 0;
			text[0] = 0;
			system("cls");
		}
		
		else if (!strcmp(command, "EXIT")) break;
		
		else 
			printf("Syntax error!\n");
	}
	
}