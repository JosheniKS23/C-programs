#include<stdio.h>
#include<math.h>
long long convert(int);
int main()
{
int n;
long long bin;
printf("Enter a decimal number:\n");
scanf("%d", &n);
bin = convert(n);
printf("%d in decimal  = %lld in binary\n", n , bin);
return 0;
}
long long convert(int n)
{
long long bin = 0;
int rem, i = 1;
rem = n % 2;
n /= 2;
bin +=(rem *i);
i *= 10;
}

