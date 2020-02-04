#include "sort.h"
/**
 * selection_sort - sorts an array using the Selection sort
 * @array: int
 * @size: size_t
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, min, small;

	if (size <= 1)
		return;

	i = 0;
	do {
		min = i;
		small = i;
		for (j = i; j <= size - 1; j++)
		{
			if (array[min] > array[j])
			{
				small = j;
				min = j;
			}
		}
		if (array[i] > array[small])
		{
			temp = array[i];
			array[i] = array[small];
			array[small] = temp;
			print_array(array, size);
		}
		i++;
		} while (i < size);
}
