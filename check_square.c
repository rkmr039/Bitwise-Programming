// check the given number is a square of 2 or not using Bitwise operator
#include <stdio.h>
#include <stdlib.h>

 

int main()
{
   static int number;

   printf("\nEnter the Number: ");
   scanf("%d",&number);

   if((number & (number-1)) == 0) printf("\n %d is a square of 2\n",number);
   else printf("\nNot a square\n");


   return 0;
}
