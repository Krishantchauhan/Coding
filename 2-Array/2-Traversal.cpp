#include <stdio.h>

int main()
{
  int a[] = {10, 20, 30, 40, 50};
  int n = sizeof(a) / sizeof(a[0]);

  // Normal For Loop
  printf("Noraml For Loop \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d \t", a[i]);
  }

  // Range Based For Loop

  printf("\nRange Based For Loop \n");
  for (int i : a)
    printf("%d \t", i);
  printf("\n");
}
