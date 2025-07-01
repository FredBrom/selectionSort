/**
 * sorting an array of string
 */

#include "selectsort.h"
#include "printVector.h"
#include <string.h>

int main()
{

  char *names[] = {"Frederico", "Bia", "Gui", "Ana", "Sonia", "Bruna", NULL};

  printVectors(stdout, names);
  selectionSort(names, 6, sizeof(names[0]), compareString);

  printVectors(stdout, names);

  return 0;
}
