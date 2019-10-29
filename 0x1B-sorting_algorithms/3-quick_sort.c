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
                array[tmp] = array[i];
                array[i] = array[j];
                array[j] = array[tmp];
                print_array(array, size);
            }
        }        
    }
    if (i != j)
    {
        array[tmp] = array[i + 1];
        array[i + 1] = array[j];
        array[j] = array[tmp];
        print_array(array, size);
    }
    return (i + 1);
}   








void quick_sort(int *array, size_t size)
{
    int lower, upper, partition;

    lower = 0;
    upper = size - 1;

    if (!array || !size)
	return;

    partition = lomuto_partition(array, size, lower, upper);
    /* NAAATT acá vamos a tener que cambiar está función porque se supone que ya con la partition
    se tiene que hacer recursivamente, pero el problema es que cambian los limites lower y upper,
    y los de nosotros ya están definidos, tenemos que hacer otra función a la cuál le podamos tirar
    los limites que nos dé a partir de partition, mañana miramos eso*/




}