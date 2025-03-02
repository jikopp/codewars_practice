/*
Return Two Highest Values in List

In this kata, your job is to return the two distinct highest values in a list. If there're less than 2 unique values, return as many of them, as possible.

The result should also be ordered from highest to lowest.

Examples:

[4, 10, 10, 9]  =>  [10, 9]
[1, 1, 1]  =>  [1]
[]  =>  []
*/

#include <stdio.h>
#include <limits.h>

size_t two_highest(size_t length, const long long array[length], long long result[2]) {
  size_t i = 2;
  long long max1;
  long long max2;
  if (length == 0) {
    return 0; // No elements in the array
  }
  if (length == 1) 
  {
    max1 = array[0];
    result[0] = max1;
    return 1;
  }

  /* Initialize and declare the highest and second highest number
   from the first two values of the array */
  if (array[0] > array[1])
  {
    max1 = array[0];
    max2 = array[1];
  }
  else
  {
    max1 = array[1];
    max2 = array[0];
  }
  
  while (i < length)
  {
    if (array[i] > max1)
    {
      max2 = max1;
      max1 = array[i];
    }
    else if (array[i] > max2 && array[i] < max1)
    {
      max2 = array[i];
    }
    i++; 
  }
  result[0] = max1;
  result[1] = max2;
  if (result[0] == result[1]) // If we have one unique values
  {
    return 1;
  }
  return 2; // Two unique values
}
