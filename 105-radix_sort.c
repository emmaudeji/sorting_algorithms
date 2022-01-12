#include "sort.h"
#include <stdio.h>

/**
 * radix_sort - sorts the array using the LSD Radix sort algorithm
 * @array: - the array to sort
 * @size: size of the array
 * 
 * Return: void
 */ 
void radix_sort(int *array, size_t size);
{
    int i = 0;
    int j = 0;
    int k = 0;
    int t = 0;
    int arr1[i];

    int min = 0;
    int tmp = 0;

    for (i = 0; i < len; i++)
        arr1[i] = *array[i];

    for (k = 0; k < 3; k++) {
        for (i = 0; i < len; i++) {
            min = *array[i] % 10;
            t = i;
            for (j = i + 1; j < len; j++) {
                if (min > (*array[j] % 10)) {
                    min = *array[j] % 10;
                    t = j;
                }
            }

            tmp = arr1[t];
            arr1[t] = arr1[i];
            arr1[i] = tmp;

            tmp = *array[t];
            *array[t] = *array[i];
            *array[i] = tmp;
        }
        for (j = 0; j < len; j++)
            *array[j] = *array[j] / 10;
    }
}
