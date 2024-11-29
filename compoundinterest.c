#include<stdio.h>
#include<math.h>
void main()
{
float CI,p,n,r,t,b,a,c;
printf("Enter the value of the priniple amount,rate,time,no of interest per year:\n");
scanf("%f%f%f%f",&p,&r,&t,&n);
a=(n*t);
b=(1+(r/n));
c=pow(b,a);
CI=p*c;
printf("The value of the compound interest:%f\n",&CI);
}
