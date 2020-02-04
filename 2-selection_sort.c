#include "sort.h"
/**
 * selection_sort - sorts an array using the Selection sort
 * @array: int
 * @size: size_t
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, temp, j;
	int state;

	i = 0;
	state = 1;
	while (state == 1)
	{
		state = 0;
		for (j = i; j <= size;)
		{
			if (array[i] > array[j])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				state = 1;
				j++;
			}
			else
			{
				j++;
			}
		}
		print_array(array, size);
		i++;
	}
}
