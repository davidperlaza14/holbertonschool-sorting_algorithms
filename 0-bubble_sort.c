#include "sort.h"

/**
 * bubble_sort - Sort an array with bubble algorithm.
 * @array: the array to sort.
 * @size: size of the array.
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t primero = 0, segundo = 0, temporal = 0;

	if (!array || size < 2)
		return;

	while (primero < size)
	{
		segundo = 0;
		while (segundo < size - 1)
		{
			if (array[segundo] > array[segundo + 1])
			{
				temporal = array[segundo + 1];
				array[segundo + 1] = array[segundo];
				array[segundo] = temporal;
				print_array(array, size);
			}
			segundo++;
		}
		primero++;
	}
}