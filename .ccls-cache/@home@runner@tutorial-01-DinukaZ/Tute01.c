/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float sub1, sub2, avg;
  
  printf("Enter marks for first Subject :");
  scanf("%f", &sub1);

  printf("Enter marks for second Subject :");
  scanf("%f", &sub2);

  avg=(sub1+sub2)/2.0;
  printf("Your average : %.2f", avg);
  
  return 0;
}

