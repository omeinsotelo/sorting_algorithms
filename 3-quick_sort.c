#include "sort.h"
/**
 * quick_sort - sorts an array using the Quick sort
 * @array: int
 * @size: size_t
 */
void quick_sort(int *array, size_t size)
{
	unsigned int i, j, temp, pivot, low, high, swap;

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
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
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
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			swap = 1;
			print_array(array, size);
		}
		else
			high--;
		if (swap == 1)
			low++;
	} while (low < high);
}
