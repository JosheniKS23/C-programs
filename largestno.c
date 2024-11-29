#include<stdio.h>
void main()
{
float a,b,c;
printf("Enter any three numbers:\n");
scanf("%f%f%f",&a,&b,&c);
if(a>b && a>c)
printf("%f is the largest number.\n",a);
else if(b>a && b>c)
printf("%f is the largest number.\n",b);
else
printf("%f is the largest number.\n",c);
} 
