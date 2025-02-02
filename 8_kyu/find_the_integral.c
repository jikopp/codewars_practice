/*
Create a function that finds the integral of the expression passed.

In order to find the integral all you need to do is add one to the exponent (the second argument),
and divide the coefficient (the first argument) by that new number.

For example for 3x^2, the integral would be 1x^3: we added 1 to the exponent, and divided the coefficient by that new number).

Notes:

The output should be a string.
The coefficient and exponent is always a positive integer.
Examples
 3, 2  -->  "1x^3"
12, 5  -->  "2x^6"
20, 1  -->  "10x^2"
40, 3  -->  "10x^4"
90, 2  -->  "30x^3"
*/

#include <stdio.h>
#include <stdlib.h>


char	*integrate(int coefficient, int exponent)
{
	int		new_ex;
	int		new_co;
	char	*res;

	new_ex = exponent + 1;
	new_co = coefficient / new_ex;
	res = (char *)malloc(20 * sizeof(char));
	sprintf(res, "%dx^%d", new_co, new_ex);
	return (res);
}

/*
printf is a standard C function used for printing formatted output to the console.
sprintf, which stands for "String Print", is similar, but instead of printing to the console, it formats the output and stores it in a string (a character array).

Syntax of sprintf:
int sprintf(char *str, const char *format, ...);

str: A pointer to the character array (string) where the formatted output will be stored.
format: A format string (like the ones used in printf), which specifies how the subsequent arguments are to be formatted.
...: The values that are to be formatted and inserted into the format string.

Return Value:
sprintf returns the number of characters that have been written to the string (excluding the null terminator).

Important Notes:
Buffer size: When using sprintf, ensure that the buffer (the str parameter) is large enough to hold the formatted string.
Otherwise, you risk writing past the end of the array, causing a buffer overflow (which can lead to undefined behavior).
For safer usage, consider using snprintf, which lets you specify the maximum number of characters to write, preventing buffer overflow.

*/