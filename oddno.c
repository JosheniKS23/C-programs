#include<stdio.h>
int main()
{
 int i,n;
 printf("Enter the range of the odd number to be printed:");
 scanf("%d",&n);
 for(i=1;i<=n;i+=2)
 {
  printf("%d ",i);
 }
 printf("\n");
}
