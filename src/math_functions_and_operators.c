#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a = sqrt(25); //square root of a number 
    printf("\n%.1lf",a); 

    double b = pow(4,2); //raise to a power 
     printf("\n%.1lf",b); 

     int c = round(6.23); //round to the nearest whole number 
      printf("\n%.1d",c); 

      int d = ceil(6.23); // round a number up 
       printf("\n%.1d",d); 

       int e = floor(12.89); // rounding down 
       printf("\n%.1d",e); 

       double f = fabs(-50); // absolute value 
       printf("\n%.1lf",f); 

       double g = log(3); //logarithms
       printf("\n%lf",g); 

       double h = sin(45); //sin 
       printf("\n%lf",h); 

       double i = cos(45); //cos
       printf("\n%lf",i); 

       double j = tan(45); //tan 
       printf("\n%lf",j); 

           return 0; 
}
