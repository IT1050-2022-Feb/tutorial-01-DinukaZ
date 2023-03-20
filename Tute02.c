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

float distance, rent;

int main() {
  printf("Input the distance :");
  scanf("%f", &distance);

  if(distance<=30){
    rent=50*distance;
  }
  else{
    rent=(distance-30)*40+(30*50);
  }

  printf("Your total rent : %.2f", rent);
  return 0;
}
