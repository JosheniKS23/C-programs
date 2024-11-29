#include<stdio.h>
int a;
int evenOdd(int a);
int main()
{
int a;
printf("Enter an integer\n");
scanf("%d",&a);
evenOdd(a);
}
int evenOdd(int a)
{
if(a%2 == 0)
printf("The number is even\n");
else
printf("The number is odd\n");
}

