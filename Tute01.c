/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  float avg;
  printf("enter the first mark: ");
  scanf("%d",&mark1);
  printf("enter the second mark: ");
  scanf("%d",&mark2);
  avg=(mark1+mark2)/2.0;
  printf("%.2f",avg);
  return 0;
}

