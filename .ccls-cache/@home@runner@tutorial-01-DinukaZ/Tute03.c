/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int tot=0, num, i;
  printf("Enter a number :");
  scanf("%d", &num);

  for (i = 1; i <= num; i++) {
    tot +=i;
  }

  printf("sum is :%d", tot);
  return 0;
}
