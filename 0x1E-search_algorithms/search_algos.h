#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

/*standard libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif
