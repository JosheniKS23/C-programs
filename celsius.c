#include<stdio.h>
int main()
{
float C,F;
printf("Enter the fahrenheit value:\n");
scanf("%f",&F);
C=((F-32)*5/9);
printf("The converted value of fahrenheit to celsius is:%f\n",C);
}
