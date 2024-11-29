#include<stdio.h>
int a,b,c;
int max();
int main()
{
 printf("Enter 3 numbers to compare:\n");
 scanf("%d%d%d",&a,&b,&c);
 max();
 }
 int max()
 {
  if(a>b && a>c)
  printf("%d is greater\n", a);
  else if(b>a && b>c)
  printf("%d is greater\n", b);
  else
  printf("%d is greater\n", c);
  }
