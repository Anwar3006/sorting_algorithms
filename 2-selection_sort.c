#include "sort.h"

/**
 * selection_sort - Rearranges elements in an array by comparing current
 *                  element to the remaining and performs swap if out-of-place
 * 
 * @array: Array to sort 
 * @size: Size of array to sort 
 */

void selection_sort(int *array, size_t size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_position = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[min_position] > array[j])
            {
                min_position = j;
            }
        }

        if (min_position != i)
        {
            int temp = array[min_position];
            array[min_position] = array[i];
            array[i] = temp;
            print_array(array, size);
        }
    }
}
