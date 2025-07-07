/**
 * sorting an array of string
 */

#include "printVector.h"
#include "selectsort.h"
#include <string.h>

int main() {

  char *names[] = {"Frederico", "Bia", "Gui", "Ana", "Sonia", "Bruna", NULL};

  print_vector_string(stdout, names);
  selectionSort(names, 6, sizeof(names[0]), selectsort_compare_string);

  print_vector_string(stdout, names);

  return 0;
}
