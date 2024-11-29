#include<stdio.h>
void main()
{
 int n,i;
 unsigned long long fact;
 fact=i=1;
 printf("Enter an integer: \n");
 scanf("%d",&n);
 if(n < 0)
    printf("Error! Factorial of a negavitve number doesn't exist.\n");
 else 
 {
   while(i<=n)
   {
    fact*=1;
    i++;
   }
  printf("The factorial of the number %d is %llu\n",n,fact);
 }
 }
   
