#include <stdio.h>

int points(const char* const games[10])
{
  
  int x;
  int i = 0;
  int result = 0;
  
  while (i < 10)
    {
      if (games[i][0] > games[i][2])
        x = 3;
      else if (games[i][0] < games[i][2])
        x = 0;
      else
        x = 1;
      result = result + x;
      i++;
    }
   return result;
}

// int main(void)
// {
//     const char* const games[10] = {"1:1","2:2","3:3","4:4","2:2","3:3","4:4","3:3","4:4","4:4"};
//     int expected = 10;
//     int submitted = points(games);
//     printf("Expected: %d  Submitted: %d\n", expected, submitted);
//     return (0);
// }

