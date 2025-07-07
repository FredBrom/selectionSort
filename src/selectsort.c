#include <stdlib.h>
#include <string.h>

#include "selectsort.h"

void selectionSort(void *vector, size_t num_elements, size_t size,
                   int (*compare)(const void *, const void *)) {
  if (num_elements < 2) {
    return;
  }

  size_t i = num_elements - 1;
  size_t j;
  size_t great_i;

  while (i > 0) {
    great_i = i;
    j = 0;

    while (j < i) {

      const void *elem_j = vector + j * size;
      const void *elem_j1 = vector + great_i * size;

      if (compare(elem_j, elem_j1) > 0) {
        great_i = j;
      }

      j++;
    }

    selectsort_swap((char *)vector + i * size, (char *)vector + great_i * size,
                    size);
    i--;
  }
}

void selectsort_swap(void *a, void *b, size_t size) {
  /**
   *  Implementation of a generic swap method
   */
  char temp[size];
  memcpy(temp, a, size);
  memcpy(a, b, size);
  memcpy(b, temp, size);
}

int selectsort_compare_int(const void *a, const void *b) {
  /**
   * Compare function to integers
   * return -1 if a < b
   * return  0 if a = b
   * return  1 if a > b
   */
  return (*(const int *)a > *(const int *)b) -
         (*(const int *)a < *(const int *)b);
}

int selectsort_compare_double(const void *a, const void *b) {
  return (*(const double *)a > *(const double *)b) -
         (*(const double *)a < *(const double *)b);
}

int selectsort_compare_float(const void *a, const void *b) {
  return (*(const float *)a > *(const float *)b) -
         (*(const float *)a < *(const float *)b);
}

int selectsort_compare_string(const void *a, const void *b) {
  const char *str1 = *(const char **)a;
  const char *str2 = *(const char **)b;
  return strcmp(str1, str2);
}
