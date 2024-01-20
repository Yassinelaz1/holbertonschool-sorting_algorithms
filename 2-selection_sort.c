#include "sort.h"
/**
 * swap - Function that swaps two values
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

/**
 * selection_sort -  Selection sort algorithm
 * @array: Array to be sorted
 * @size: Size of array given
 * Return: 0
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;

		if (i != min)
		{
			swap(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
