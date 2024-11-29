#include<stdio.h>
int main()
{
int d,dis,f,fuel,t,time;
printf("enter the total distance in kms");
scanf("%d",&d);
printf("Enter the cost of the fuel per litre:\n");
scanf("%d",&f);
printf("Enter the approx time to travel 1 km in hours:\n");
scanf("%d",&t);
fuel=f*d;
time=t*d;
printf("The estimate fuel cost for the total journey is:%d\n",fuel);
printf("The approx journey time is:%d\n",time);
}
