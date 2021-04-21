#include <stdio.h>
#include "search.h"

/**
 * linear_search - find a element index in an array using th linear algorithm
 *
 * @array: array to use
 * @size: array size
 * @value: value to find
 *
 * Return: on succes value index otherwhise -1
 */


int linear_search(int *array, size_t size, int value)
{
  size_t i;

  if (!array)
    return (-1);

  for (i = 0; i < size; i++)
  {
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    if (value == array[i])
      return (i);
  }

  return (-1);
}
