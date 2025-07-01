#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <stdlib.h>

void selectionSort(void *vector, size_t num_elements, size_t size,
           int (*compare)(const void *, const void *));

void swap(void *a, void *b, size_t size);

int compareInt(const void *a, const void *b);

int compareFloat(const void *a, const void *b);

int compareDouble(const void *a, const void *b);

int compareString(const void *a, const void *b);

#endif // !SELECTIONSORT_H
