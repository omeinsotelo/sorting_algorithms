#include "sort.h"
/**
 * quick_sort - sorts an array using the Quick sort
 * @array: int
 * @size: size_t
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_recurcion(array, size, 0, size - 1);
}
/**
 * quick_sort_recurcion - sorts an array using recurcion
 * @array: int
 * @size: size_t
 * @inicial: inicial of array
 * @final: end of array
 */
void quick_sort_recurcion(int *array, size_t size, int inicial, int final)
{
	int ext, temp, piv, inte = inicial - 1;

	if (inicial >= final)
	{
		return;
	}

	piv = array[final];

	for (ext = inicial; ext <= final; ext++)
	{
		if (array[ext] <= piv)
		{
			inte++;
			temp = array[inte];
			array[inte] = array[ext];
			array[ext] = temp;
			if (ext != inte)
			{
				print_array(array, size);
			}
		}
	}

	quick_sort_recurcion(array, size, inicial, inte - 1);
	quick_sort_recurcion(array, size, inte + 1, final);
}
