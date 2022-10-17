#include <stdio.h>
#include <math.h>

int main(){

const double PI = 3.14159; 
double radius; 
double circumference; 

printf("\nRadius of the circle:"); 
scanf("%lf",&radius); 

circumference = PI * 2 * radius; 

printf("\n:The circumference is:%lf",circumference);

  return 0; 
}