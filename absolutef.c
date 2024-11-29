#include<stdio.h>
int x;
int ABS(int x);
int main()
{
 int a;
 printf("Enter an integer");
 scanf("%d", &a);
 ABS(a);
 }
 int ABS(int x)
 {
  if(x<0)
  printf("%d is the absolute value\n",(-1)*x);
  else
  printf("%d is the absolute value\n", x);
  }
