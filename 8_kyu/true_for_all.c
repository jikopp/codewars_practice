/*
Task
Create a method all which takes two params:
	a sequence
	a function (function pointer in C)
and returns true if the function in the params returns true for every element in the sequence.
Otherwise, it should return false.
If the sequence is empty, it should return true, since technically nothing failed the test.

Example
all((1, 2, 3, 4, 5), greater_than_9) -> false
all((1, 2, 3, 4, 5), less_than_9)    -> True
*/

#include <stdbool.h>
#include <stddef.h>

typedef bool (*Predicate)(int);

bool all(int* arr, size_t size, Predicate fun) {
  size_t i = 0;
  
  while (i < size)
  {
    if (!fun(arr[i]))
      return false;
    i++;
  }
  return true;
}

/*
If any element does not satisfy fun(arr[i]), the function immediately returns false.
If all elements pass, it returns true at the end.
If size == 0, the loop does not run, and true is returned.
*/