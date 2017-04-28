/*
* Brainfudge kernel V0.0001
*/


// char *vidptr = (char*)0xb8000; 	//video mem begins here.
/*0 - Black, 1 - Blue, 2 - Green, 3 - Cyan, 4 - Red, 5 - Magenta, 6 - Brown, 7 - Light Grey, 8 - Dark Grey, 9 - Light Blue,
10/a - Light Green, 11/b - Light Cyan, 12/c - Light Red, 13/d - Light Magenta, 14/e - Light Brown, 15/f – White.*/
/*Define colour with 0x{back_colour}{fore_colour}*/
// to write to vid mem, write a char in the first byte then an attribute byte immediately after it.

void runProcess(void);
int brainFudge(void);

void kmain(void)
{
  /*
  * This function is the main control function for the kernel
  */
  while (1 == 1) {

  }
}

void runProcess(void) {
  /*
  * Allocates a unique id to the process,
  * allocates a section of memory to the program,
  * then runs it through the brainfudge interpreter.
  */

}
int brainFudge(void) {
  /*
  * Run a Brainfudge program,
  * Return 0 for success or an error code.
  * Error codes detailed in errors.txt
  */
}
