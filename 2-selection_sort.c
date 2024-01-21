#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * from min to max
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp = 0, sswap = 0, test = 0;

	if (array == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		temp = i;
		test = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[temp] > array[j])
			{
				temp = j;
				test += 1;
			}
		}
		sswap = array[i];
		array[i] = array[temp];
		array[temp] = sswap;
		if (test != 0)
		{
			print_array(array, size);
		}
	}
}
