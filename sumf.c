#include<stdio.h>
int a,b;
int sum();
int main()
{
 printf("Enter two integers:\n");
 scanf("%d%d",&a, &b);
 sum();
 }
 int sum()
 {
  int c;
  c=a+b;
  printf("The sum is: %d\n",c);
  }
