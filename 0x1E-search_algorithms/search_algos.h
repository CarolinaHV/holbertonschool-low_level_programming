#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int finder(int *array, int init, int finish, int value);

int finder(int *array, size_t size, size_t low, size_t high, int value);
void print_array(int *array, size_t low, size_t high);
int find_lowest(int *array, int mid, int value, int low);


#endif
