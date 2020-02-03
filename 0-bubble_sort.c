#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: poiter to array.
 * @size: size of the array.
 * Return: none.
*/

void bubble_sort(int *array, size_t size)
{
	size_t lim = size, cnt = 0;
	int tmp = 0;

	if (array == NULL)
	{
		return;
	}
	while (lim > 0)
	{
		while (cnt + 1 < lim)
		{
			if (array[cnt] > array[cnt + 1])
			{
				tmp = array[cnt];
				array[cnt] = array[cnt + 1];
				array[cnt + 1] = tmp;
				print_array(array, size);
			}
			cnt++;
		}
		lim--;
		cnt = 0;
	}
}
