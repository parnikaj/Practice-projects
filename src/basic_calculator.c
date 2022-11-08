#include <stdio.h>
#include<math.h>

//love you parnika 

int main(){

   char operator;
   double a;
   double b;
   double result;

   printf("\nEnter an operator : ");
   scanf("%c", &operator);

   printf("Enter number 1: ");
   scanf("%lf", &a);

   printf("Enter number 2: ");
   scanf("%lf", &b);

   switch(operator){
      case '+':
         result = a + b;
         printf("\nresult: %lf", result);
         break;
      case '-':
         result = a - b;
         printf("\nresult: %lf", result);
         break;
      case '*':
         result = a * b;
         printf("\nresult: %lf", result);
         break;
      case '/':
         result = a / b;
         printf("\nresult: %lf", result);
         break;
      default:
         printf("%c is not valid", operator);
   }

   return 0;
}
