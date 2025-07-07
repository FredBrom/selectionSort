# selection sort

### An generic (type independent) implementation of selection sort algorithm in C

It`s pretty much like the bubble sort implemented before, and actually it uses the same plumbing. Only the sorting algorithm has changed.

## Sorting Function

```c
void selectionSort(void *vector, size_t num_elements, size_t size,
           int (*compare)(const void *, const void *))
```

## Compare Functions

To make the sorting algorithm type independent, it was necessary to implement a type dependent comparative function for array elements.
It must:

- return 0 if a = b
- return 1 if a > b
- return -1 if a < b

```c
int selectsort_compare_int(const void *a, const void *b);

int selectsort_compare_float(const void *a, const void *b);

int selectsort_compare_double(const void *a, const void *b);

int selectsort_compare_string(const void *a, const void *b);
```

The function `selectsort_compare_string` is implemented using the `strcmp` function defined in string.h of clib.
