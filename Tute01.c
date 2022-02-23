/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1,num2;
  float avg;

  printf("enter first number:");
  scanf("%d",&num1);

  printf("enter second number:");
  scanf("%d",&num2);

  avg=(num1+num2)/2;
  printf("average is: %.2f",avg);
  return 0;
}

