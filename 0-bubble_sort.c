#include "sort.h"
/**
 * bubble_sort - pushing the higher value to one end
 * @array: the array to be sorted in bubble sort function
 * @size: the size of an array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, flag;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;

				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
