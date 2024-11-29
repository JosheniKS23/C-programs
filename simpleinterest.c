#include<stdio.h>
void main()
{
float p,n,r,totalamt;
printf("Enter the value of the principle amount,time,rate:");
scanf("%f%f%f",&p,&n,&r);
totalamt=((p*n*r)/100);
printf("The value of the simple interest is:%f\n",totalamt);
}
