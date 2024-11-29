#include<stdio.h>
int n,i;
int fact(int n);
int main()
{
 int n;
 printf("Enter an integer: \n");
 scanf("%d", &n);
 fact(n);
 }
 int fact(int n)
 {
 unsigned long long fac = 1;
 for (i = 1; i<=n; ++i)
 {
  fac *=i;
 }
 printf("Factorial of %d = %llu\n", n , fac);
 }
  
 
