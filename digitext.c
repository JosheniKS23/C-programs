#include<stdio.h>
int main()
{
 int ori,digit;
 printf("Enter a three digit integer: ");
 scanf("%d",&ori);
 while(ori>0)
 {
  digit=ori%10;
  printf("%d ",digit);
  ori=ori/10;
  }
  printf("\n");
 }
