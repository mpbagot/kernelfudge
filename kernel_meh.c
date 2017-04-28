/*
*  kernel.c
*/

#include "std.h"

void clearScreen();
void printf(const char *str);

void kmain(void)
{
	clearScreen();
	char *str = "Archon Kernel Starting";
	int lastFrameStr = 0;

	while (1 == 1){
		wait(1000);
		if (strlen(str) > 200) {
			*str = strcut(strlen(str)-200, str);
		}
		strcat(str, "hi");
		if (strlen(str) < lastFrameStr) {
			clearScreen();
		}
		printf(str);
		lastFrameStr = strlen(str);
	}

	return;
}
void printf(const char *str){
	char *vidptr = (char*)0xb8000; 	//video mem begins here.
	unsigned int j = 0;
	unsigned int i = 0;

	/* this loop writes the string to video memory */
	while(str[j] != '\0') {
		/* the character's ascii */
		vidptr[i] = str[j];
		/* attribute-byte: give character black bg and light blue fg */
		vidptr[i+1] = 0x09;
		++j;
		i = i + 2;
	}
}
void clearScreen(){
	char *vidptr = (char*)0xb8000; 	//video mem begins here.
	unsigned int j = 0;
	/* this loops clears the screen
	* there are 25 lines each of 80 columns; each element takes 2 bytes */
	while(j < 80 * 25 * 2) {
		/* blank character */
		vidptr[j] = ' ';
		/* attribute-byte - light gray on black screen */
		vidptr[j+1] = 0x07;
		j = j + 2;
	}
}
/*0 - Black, 1 - Blue, 2 - Green, 3 - Cyan, 4 - Red, 5 - Magenta, 6 - Brown, 7 - Light Grey, 8 - Dark Grey, 9 - Light Blue,
10/a - Light Green, 11/b - Light Cyan, 12/c - Light Red, 13/d - Light Magenta, 14/e - Light Brown, 15/f – White.*/
/*Define colour with 0x{back_colour}{fore_colour}*/
