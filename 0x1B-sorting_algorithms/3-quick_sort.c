#include "sort.h"

int lomuto_partition(int *array, size_t size, int lower, int upper)
{
    int tmp, j;
    int i = lower - 1;
    int pivot = array[upper];

    for(j = lower;j < upper; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            if (i != j)
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
                print_array(array, size);
            }
        }        
    }
    if (i != j)
    {
        tmp = array[i + 1];
        array[i + 1] = array[j];
        array[j] = tmp;
        print_array(array, size);
    }
    return (i + 1);
}   


void fast_sort(int *array, size_t size, int lower, int upper)
{
    int partition;
        

    if (!array || !size)
	return;

    if (lower < upper)
    {
        partition = lomuto_partition(array, size, lower, upper);
        fast_sort(array, size, 0, partition - 1);
        fast_sort(array, size, partition + 1, upper);
    }
}


void quick_sort(int *array, size_t size)
{
    fast_sort(array, size, 0, size - 1);
}