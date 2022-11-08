#include <stdio.h>
#include <math.h>

int main(){

double p;
double r;
double t; 
double si; 

printf("\nEnter the principal amount:"); 
scanf("%lf",&p); 

printf("\nEnter the rate:"); 
scanf("%lf",&r); 

printf("\nEnter the time in years:"); 
scanf("%lf",&t); 

si = p * r * t; 
printf("\nSimple interest:%.1lf",si);
  return 0; 
}
