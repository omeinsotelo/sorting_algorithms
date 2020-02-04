#include "sort.h"
/**
 * quick_sort - sorts an array using the Quick sort
 * @array: int
 * @size: size_t
 */
void quick_sort(int *array, size_t size)
{
	unsigned int i, j, pivot, low, high, swap;

	if (size <= 1 || array == NULL)
		return;

	pivot = high = size - 1;
	i = j = low = 0;
	do {
		swap = 0;
		j = i = low;
		pivot = high;
		for (; j < pivot;)
		{
			if (array[j] > array[pivot])
				j++;
			else
			{
				swapAr(&array[i], &array[j]);
				j++;
				i++;
				if (array[j] != array[i])
				{
					swap = 1;
					print_array(array, size);
				}
			}
		}
		if (array[i] > array[pivot])
		{
			swapAr(&array[i], &array[j]);
			swap = 1;
			print_array(array, size);
		}
		else
			high--;
		if (swap == 1)
			low++;
	} while (low < high);
}

/**
 * swapAr - sorts an array using the Quick sort
 * @i: int
 * @j: int
 */

void swapAr(int *i, int *j)
{
	int temp;

	temp = *j;
	*j = *i;
	*i = temp;
}
