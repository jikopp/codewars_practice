/*
SpeedCode #2 - Array Madness
Objective
Given two integer arrays a, b, both of length >= 1, create a program that returns true if the sum of the squares of each element in a is strictly greater than the sum of the cubes of each element in b.

E.g.

array_madness(3, {4, 5, 6}, 3, {1, 2, 3}) == true;
// because 4 ** 2 + 5 ** 2 + 6 ** 2 > 1 ** 3 + 2 ** 3 + 3 ** 3
Get your timer out. Are you ready? Ready, get set, GO!!!
*/

#include <stdbool.h>
#include <stddef.h>

bool array_madness(size_t n1, const int arr1[n1], size_t n2, const int arr2[n2]) {

	size_t i = 0;
	size_t j = 0;
	long long square = 0;
	long long cube = 0;
	
	while (i < n1)
	{
		square += (arr1[i] * arr1[i]);
		i++;
	}
	while (j < n2)
	{
		cube += (arr2[j] * arr2[j] * arr2[j] );
		j++;
	}

	return (cube < square);
}

/*
Explanation of the Task:
The goal is to compare two values derived from two arrays of integers:

Sum of the squares of the elements in the first array (a).
Sum of the cubes of the elements in the second array (b).
If the sum of the squares is strictly greater than the sum of the cubes, the function should return true. Otherwise, it should return false.

Key Concepts:
1. Squares of Numbers:
The square of a number means multiplying the number by itself.
2. Cubes of Numbers:
The cube of a number means multiplying the number by itself three times.
*/