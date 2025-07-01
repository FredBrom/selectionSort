/**
 * test sorting random integer vector
 */
#include "selectsort.h"
#include "printVector.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10

int main()
{

  int vector[NUM];

  srand(time(NULL));

  for (int i = 0; i < NUM; i++)
  {
    vector[i] = 99 - (rand() % 200);
  }

  size_t n = sizeof(vector) / sizeof(vector[0]);

  printVectori(stdout, vector, n);
  selectionSort(vector, n, sizeof(int), compareInt);
  printVectori(stdout, vector, n);

  return 0;
}
