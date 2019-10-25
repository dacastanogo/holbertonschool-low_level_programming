#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    unsigned int i;
    int tmp;

    
    for (i = 0; i < size - 1;)
    {
        if(array[i] > array [i + 1])
        {
            tmp = array[i];
            array[i] = array [i + 1];
            array[i + 1] = tmp;
            print_array(array, size);
            i = 0;
            continue;
        }
        i++;
    }

}