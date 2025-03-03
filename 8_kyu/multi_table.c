/*
Multiplication table for number

Your goal is to return multiplication table for number that is always an integer from 1 to 10.

For example, a multiplication table (string) for number == 5 looks like below:

1 * 5 = 5
2 * 5 = 10
3 * 5 = 15
4 * 5 = 20
5 * 5 = 25
6 * 5 = 30
7 * 5 = 35
8 * 5 = 40
9 * 5 = 45
10 * 5 = 50
P. S. You can use \n in string to jump to the next line.

Note: newlines should be added between rows,
but there should be no trailing newline at the end.
If you're unsure about the format, look at the sample tests.

*/

#include <stdlib.h>
#include <string.h>

char *multi_table(int num)
{
    char count = 56;
    int j = 8;
    char star = '*';
    char equal = '=';
    char space = ' ';
    int index = 0;
    char num_char = '0' + num;
    int max_len = 140;
    
    char *table = (char *)malloc(max_len * sizeof(char));
    if (table == NULL)
        return NULL;
    
    table[0] = '\0';
    
    while (j < 10)
    {    
        
        table[index++] = count;
        table[index++] = space;
        table[index++] = star;
        table[index++] = space;
        table[index++] = num_char;
        table[index++] = space;
        table[index++] = equal;
        table[index++] = space;
        int result = (count - '0') * (num_char - '0');

        if (result < 10)
            table[index++] = result + '0';
        else
        {
            
            table[index++] = (result / 10) + '0';
            table[index++] = (result % 10) + '0';
        }
        count++;
        table[index++] = '\n';
        j++;
    }
    table[index++] = 49;
    table[index++] = 48;
    table[index++] = space;
    table[index++] = star;
    table[index++] = space;
    table[index++] = num_char;
    table[index++] = space;
    table[index++] = equal;
    table[index++] = space;
    int result = (count - '0') * (num_char - '0');

    if (result < 10)
        table[index++] = result + '0';
    else
    {
        
        table[index++] = (result / 10) + '0';
        table[index++] = (result % 10) + '0';
    }
    table[index++] = '\0';


    return table;
}



/*

Requirements:
String Output:
	The function must return the multiplication table as a single string.
Newlines (\n) Between Rows:
	Each multiplication step should be separated by a newline character (\n),
	except for the last line, which should not have a trailing newline.
Memory Management:
	The returned string should be dynamically allocated, so the caller can free it when done.
Constraints:
	The input number will always be between 1 and 10 (inclusive).
Testing:
	The solution will be tested using a test function to compare the expected and actual outputs.
Implementation Steps:
	Calculate the required string size
		Each line has a predictable format, with numbers ranging from 1 to 10.
		The length depends on the digits in the multiplication result.
		Allocate memory accordingly.
	Build the string
		Use a loop to construct each line.
		Store the results in a dynamically allocated string.
	Return the string
		Ensure that the last line does not have an extra newline.
	The allocated string should be freed by the caller.
This ensures that the function correctly generates and returns the multiplication table as a properly formatted string.*/