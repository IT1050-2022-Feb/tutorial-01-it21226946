/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int dis;
  float amount;

  printf("enter the distance:");
    scanf("%d.2f",&dis);
  
  if ( dis<=30)
  {
    amount=dis*50;
    printf("amount is : %.2f",amount);
    }

  else 
  {
    amount=dis*50;
    printf("amount is :%.2f",amount);
    
  }
  return 0;

