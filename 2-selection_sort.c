#include "sort.h"

/**
 * selection_sort - selection sort function
 * @array: pointer
 * @size: size input
 * Return: No Return
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, jMin, swap;

	
	for (i = 0; i < size - 1; i++)
	{
		
		jMin = i;
		
		for (j = i + 1; j < size; j++)
		{
		
			if (array[j] < array[jMin])
			{
				
				jMin = j;
			}
		}
		if (jMin != i)
		{
			swap = array[jMin];
			array[jMin] = array[i];
			array[i] = swap;
			print_array(array, size);
		}
	}
}
