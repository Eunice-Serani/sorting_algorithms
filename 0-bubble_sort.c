#include "sort.h"

/**
 * bubble_sort - This sorts array elements from min to max value
 * @array: Shows the array
 * @size: Shows the array size
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{

	size_t j, index, tmp = 0;

	if (size < 2)
		return;
	for (j = 0; j < size; j++)
		for (index = 0; index < size; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
			tmp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = tmp;
			print_array(array, size);
			}
		}
}
