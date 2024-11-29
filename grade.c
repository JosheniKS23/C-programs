#include<stdio.h>
void main()
{
int mark;
printf("Enter the average mark out of 100:");
scanf("%d",&mark);
if (mark>80)
printf("You got A grade\n");
else if((mark>60) && (mark<80))
printf("You got B grade\n");
else if((mark>40) && (mark<=60))
printf("You got C grade\n");
else
printf("You got F grade\n");
}

