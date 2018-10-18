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

}
int main(int argc, char const *argv[]) {
  int int_value;
  int int_pointer;

  int_value = 99;
  int_pointer = &int_value;
  /*
  !!
  */

  printf("%d\n", int_value);
  printf("%ls\n", &int_pointer);
  return 0;
}
