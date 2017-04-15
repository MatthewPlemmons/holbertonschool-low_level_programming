#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int _linear_search(int *array, size_t size, size_t start, int value);
int binary_search(int *array, size_t size, int value);
size_t _binary_search(int *array, size_t low, size_t high, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
size_t calc_probe_position(int *array, size_t lo, size_t hi, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
