#include "sort.h"

/**
 * swap_ints - This swaps two integers in an array
 * @a: The 1st integer to swap
 * @b: The 2nd integer to swap
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - This sorts array elements from min to max value
 * @array: Shows the array
 * @size: Shows the array size
 * Description: Prints the array after each swap
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
