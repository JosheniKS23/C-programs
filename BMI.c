#include<stdio.h>
void main()
{
float w,bmi,h;
printf("Enter your weight in (kg) and height in (m):");
scanf("%f%f",&w,&h);
bmi=(w/(h*h));
if(bmi<18.5)
printf("Your body mass index is less and hence your underweight.\n");
else if((bmi>18.5) && (bmi<24.9))
printf("Your body mass index is normal and hence you have a normal weight\n");
else
printf("Your body mass index is high and hence your overweight\n");
}
