#include <stdio.h>

int main(void)
{
  int i, j, arr[5] = {0};
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("%d\n", arr[2]);
}