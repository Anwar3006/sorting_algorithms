#include "sort.h"

void swap(int *x, int *y);
void quicksort_recursion(int *array, int low, int high, size_t size);
void quick_sort(int *array, size_t size);
int partition(int *array, int low, int high, size_t size);

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void quick_sort(int *array, size_t size)
{    
    quicksort_recursion(array, 0, size - 1, size);
}


void quicksort_recursion(int *array, int low, int high, size_t size)
{
    if (low < high)
    {
        int pivot_index = partition(array, low, high, size);

        quicksort_recursion(array, low, pivot_index - 1, size);
        quicksort_recursion(array, pivot_index + 1, high, size);
    }
}

int partition(int *array, int low, int high, size_t size)
{
    int pivot_value = array[high];
    int i = low;
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot_value)
        {
            swap(array[i], array[j]);
            i++;
            print_array(array, size);
        }
    }

    swap(array[i], array[high]);
    print_array(array, size);
    return i;
}