/*
Complete the solution so that it reverses all of the words within the string passed in.

Words are separated by exactly one space and there are no leading or trailing spaces.

Example(Input --> Output):

"The greatest victory is that which requires no battle"
-->
"battle no requires which that is victory greatest The"

*/

#include <stddef.h>
#include <stdlib.h>

char *reverse_words (const char *words, size_t length, char *reversed)
{
/*
'words' is nul-terminated, but its length is given for convenience.
Write to 'reversed' and return it.
*/
	// in case of "" 
  	if (!length)
	{
		reversed[0] = '\0';
		return reversed;		
	}
	size_t i = length;
	size_t j = length;
	size_t index = 0;

	while (i > 0)
	{	
		// find the beginning of the current word
		while (i > 0 && words[i - 1] != ' ')
			i--;

		// transfer it to reversed
		size_t temp = i;
		while (temp < j) {
			reversed[index] = words[temp];
			index++;
			temp++;
		}
		// add space
		if (i > 0) {
			reversed[index] = ' ';
			index++;
		}
		// to make sure we do not carry over is reached the end of the str
		if (i != 0)
		{
			i--;
			j = i;
		}
	}

	reversed[length] = '\0';
	return reversed;
}