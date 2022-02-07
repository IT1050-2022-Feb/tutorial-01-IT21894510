/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float mark1, mark2, avg; //variables

  printf("Enter the mark for subject 1 :");//Input mark 1 from user
  scanf("%f", &mark1);//display mark 1

  printf("Enter the mark for subject 2 :");//Input mark 2 from user
  scanf("%f", &mark2);//display mark 2

  avg = (mark1 + mark2) / 2;//Calculation

  printf("The average is %.2f", avg);// display average mark
  
  return 0;
}

