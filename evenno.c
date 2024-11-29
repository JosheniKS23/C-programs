#include<stdio.h>
int main()
{
 int i,n;
 printf("Enter the range of the even number to be printed:");
 scanf("%d",&n);
 for(i=0;i<=n;i+=2)
 {
  printf("%d ",i);
 }
 printf("\n");
}
