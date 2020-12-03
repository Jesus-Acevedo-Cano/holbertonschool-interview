#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**PROTOTYPES*/
void print_array(const int *array, size_t size);

/** 0. Heap sort */
void heap_sort(int *array, size_t size);
void pile(int *array, size_t size_max, size_t size, size_t position);

#endif /* _SORT_H_ */
