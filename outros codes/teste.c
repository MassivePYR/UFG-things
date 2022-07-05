#include <stdio.h>

int main()
{
  int n, i, final = 1, timeA = 1, timeB = 2, x = 1;
  scanf("%d", &n);

  if (n <= 1)
  {
    printf("Campeonato invalido!\n");
  }
  else
  {
    while (x != n)
    {
      for (i = 0; i < n - x; i++)
      {
        printf("Final %d: Time%d X Time%d\n", final, timeA, timeB);
        timeB++;
        final++;
      }

      timeA++;
      timeB = timeB - (n - x - 1);
      x++;
    }
  }
}