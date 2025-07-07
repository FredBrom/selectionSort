#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <stdlib.h>

void selectionSort(void *vector, size_t num_elements, size_t size,
           int (*compare)(const void *, const void *));

void selectsort_swap(void *a, void *b, size_t size);

int selectsort_compare_int(const void *a, const void *b);

int selectsort_compare_float(const void *a, const void *b);

int selectsort_compare_double(const void *a, const void *b);

int selectsort_compare_string(const void *a, const void *b);

#endif // !SELECTIONSORT_H
