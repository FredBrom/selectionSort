/**
 * test sorting random integer vector
 */
#include "printVector.h"
#include "selectsort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10

int main() {

  int vector[NUM];

  srand(time(NULL));

  for (int i = 0; i < NUM; i++) {
    vector[i] = 99 - (rand() % 200);
  }

  size_t n = sizeof(vector) / sizeof(vector[0]);

  print_vector_int(stdout, vector, n);
  selectionSort(vector, n, sizeof(int), selectsort_compare_int);
  print_vector_int(stdout, vector, n);

  return 0;
}
