/*
Given a number n, return the number of positive odd numbers below n, EASY!

Examples (Input -> Output)
7  -> 3 (because odd numbers below 7 are [1, 3, 5])
15 -> 7 (because odd numbers below 15 are [1, 3, 5, 7, 9, 11, 13])
Expect large Inputs!
*/

// option 1
long odd_count(long n) {
  long count = 0;
  long i = 0;
  
  while (i < n)
  {
    if (i % 2 == 1)
      count++;
    i++;
  }
  return count;
}

// option 2
long odd_count(long n) {
  return (n / 2);
}

// option 3
long odd_count(long n) {
  return n>>1;
}

/*

Performance:
	- The first approach is O(n) (loops through all numbers).
	- The optimized approach is O(1) (constant time).
This makes a huge difference for large inputs!

Direct Calculation (n / 2)
	Odd numbers below n follow the sequence:
		{1, 3, 5, ..., n-2} if n is even,
		{1, 3, 5, ..., n-1} if n is odd.
	The count of such numbers is simply n / 2, which is much faster than looping.

Example of Bitwise Right Shift
Let's take some values of n and see how n >> 1 behaves:

Example 1: n = 7
	7 in binary: 00000111
	Right shift by 1: 00000011 (which is 3 in decimal)
	This is correct because the odd numbers below 7 are [1, 3, 5] → count = 3.
Example 2: n = 15
	15 in binary: 00001111
	Right shift by 1: 00000111 (which is 7 in decimal)
	The odd numbers below 15 are [1, 3, 5, 7, 9, 11, 13] → count = 7.
Example 3: n = 8
	8 in binary: 00001000
	Right shift by 1: 00000100 (which is 4 in decimal)
	The odd numbers below 8 are [1, 3, 5, 7] → count = 4.

Why is n >> 1 Equivalent to n / 2?
	The right shift operator (>> 1) moves all bits one position to the right.
	In binary, shifting right by one is the same as dividing by 2 (integer division).
	Since odd_count(n) is equivalent to n / 2, the bitwise operation does the same thing but slightly faster.

Performance Comparison
	Method	Time	Complexity	Explanation
	n / 2	O(1)	Simple integer division
	n >> 1	O(1)	Bitwise shift (potentially faster on some architectures)

Final Thoughts
	- return n / 2; and return n >> 1; produce the same result.
	- The bitwise shift (>> 1) may be marginally faster because it's a low-level operation,
	but modern compilers often optimize n / 2 into n >> 1 automatically.
	- Using n >> 1 is a cool trick, but n / 2 is more readable for most programmers.

*/