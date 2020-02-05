#include "sort.h"
/**
 * selection_sort - sorts an array using the Selection sort
 * @array: int
 * @size: size_t
 */
void selection_sort(int *array, size_t size)
{
	size_t ext, inte, i, temp;

	if (size <= 1 || array == NULL)
		return;
	for (ext = 0; ext < size; ext++)
	{
		i = ext;
		for (inte = ext + 1; inte < size; inte++)
		{
			if (array[i] > array[inte])
				i = inte;
		}
		temp = array[ext];
		array[ext] = array[i];
		array[i] = temp;
		if (ext != i)
			print_array(array, size);
	}
}
