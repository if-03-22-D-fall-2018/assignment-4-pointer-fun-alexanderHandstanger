/*----------------------------------------------------------
 *				HTBLA-Leonding / 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:			Pointer_Fun
 * Author:			Alexander Handstanger
 * ----------------------------------------------------------
 * Description:
 * This assignment lets you practise a bit more with the
 * difference between references and values.
 * ----------------------------------------------------------
 */


#include <stdio.h>
#include <float.h>
#include <string.h>

void print_integers(int int_value, int* int_pointer){
  printf("Got an integer value %d and an adress to an integer with value %d\n", int_value, *int_pointer);
}
void change_integers(int int_value, int* int_pointer){
  int_value = 20;
  int_pointer = &int_value;
  // It don't works because without the pointer nothing will change in the main.
}


int main(int argc, char const *argv[]) {
  int int_value;
  int* int_pointer;

  int_value = 99;
  int_pointer = &int_value;
  //int_pointer = (int *)10;
  //printf("%ls\n", int_pointer);
  /*
  We can change the int_value every time and we can put the pointer on the int_value
  We can also set a valid saveposition, if we know, but ifwe don't know we can be sure that the pointer, which is set to a variable, is always a valid saveposition.
  10 is no valid saveposition, because the saveposition is in the BIOS area.
  See Comment above
  */

  printf("%d\n", int_value);
  printf("%d\n", *int_pointer);

  print_integers(int_value, int_pointer);
  change_integers(int_value, int_pointer);
  print_integers(int_value,int_pointer);
  return 0;
}
