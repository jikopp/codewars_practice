/*
You'll be given a string, and have to return the sum of all characters as an int. The function should be able to handle all printable ASCII characters.

Examples:

uniTotal("a") == 97
uniTotal("aaa") == 291
*/

int uni_total(const char *s) {
  int sum = 0;
  
  while (*s)
  {
    sum += *s;
    s++;
  }
  return sum;
}

/*
- Iterate through the string:
    Loop through each character of the string using a pointer or an index.
- Get the ASCII value:
    In C, the ASCII value of a character can be obtained directly by using the character itself
    (since characters are stored as integers in memory!!!!).
- Sum up the ASCII values:
    Accumulate the total sum as you iterate through the string.
- Return the total sum:
    After the loop, return the sum.
*/