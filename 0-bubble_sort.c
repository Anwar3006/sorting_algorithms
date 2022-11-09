#include "sort.h"

/**
 * bubble_sort - Algorithm rearranges array by swapping two out-of-place
 * elements
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	bool swapped = false;

	int i = 0;

	do {

		swapped = false;

		for (size_t j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{

				int temp = array[j + 1];

				array[j + 1] = array[j];

				array[j] = temp;

				print_array(array, size);
				swapped = true;
			}
		}
	i++;
	} while (swapped);
}
