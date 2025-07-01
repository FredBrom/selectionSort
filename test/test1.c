/**
 * first test
 */
#include "selectsort.h"
#include "printVector.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{

  int vector[] = {2, 6, 3, 5, 1, 4};
  size_t n = sizeof(vector) / sizeof(vector[0]);

  printVectori(stdout, vector, n);
  selectionSort(vector, n, sizeof(int), compareInt);
  printVectori(stdout, vector, n);

  return 0;
}
