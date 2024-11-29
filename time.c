#include<stdio.h>
int main()
{
int s,m;
float h;
printf("Enter the seconds,");
scanf("%d",&s);
m=(s/60);
h=(s/3600);
printf("the entered seconds in minutes is:%d\n",m);
printf("the entered seconds in hours is:%f\n",h);
}
