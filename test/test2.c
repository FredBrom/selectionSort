/**
 *  test sorting double vector
 */

#include "selectsort.h"
#include "printVector.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10

int main()
{

  double vector[NUM];

  srand(time(NULL));

  for (int i = 0; i < NUM; i++)
  {
    vector[i] = 5.0 - (double)(rand() % 1000) / 100.0;
  }

  size_t n = sizeof(vector) / sizeof(vector[0]);

  printVectord(stdout, vector, n, 2);
  selectionSort(vector, n, sizeof(double), compareDouble);
  printVectord(stdout, vector, n, 2);

  return 0;
}
