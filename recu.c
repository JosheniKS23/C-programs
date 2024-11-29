#include<stdio.h>
int find_factorial(int n);
int main()
{
int num, fact;
printf("Enter any integer:\n");
scanf("%d",&num);
fact = find_factorial(num);
printf("factorial of %d is : %d", num, fact);
}
int find_factorial(int n)
{
 if(n==0)
 return(1);
 return(n*find_factorial(n-1));
 }
 
 
