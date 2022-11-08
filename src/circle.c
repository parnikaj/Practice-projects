#include <stdio.h>
#include <math.h>

int main(){

const double PI = 3.14159; 
double radius; 
double circumference;
double area;  

printf("\nRadius of the circle:"); 
scanf("%lf",&radius); 

circumference = PI * 2 * radius; 

printf("\n:The circumference is:%lf",circumference);

area = PI * radius * radius; 
printf("\nThe area is:%lf",area); 

  return 0; 
}
