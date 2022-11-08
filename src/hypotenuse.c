#include <stdio.h>
#include <math.h>

int main(){

double a; 
double b; 
double c;

printf("\nEnter side a:"); 
scanf("%lf",&a);

printf("\nEnter side b:"); 
scanf("%lf",&b);

c = sqrt(a*a + b*b);

printf("Side c = %lf",c); 

  return 0; 
}
