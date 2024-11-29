#include<stdio.h>
int main()
{
float rate,time,weeks,pay;
printf("Enter the working hours in a day,rate per hour and number of weeks worked.\n");
scanf("%f%f%f",&time,&rate,&weeks);
pay=(time*rate*weeks);
printf("The monthly pay from the given details is:%f\n",pay);
}
