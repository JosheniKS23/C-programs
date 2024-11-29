#include<stdio.h>
int a;
int area();
int perimeter();
int main()
{
  printf("Enter the length of the square:\n");
  scanf("%d",&a);
  area();
  perimeter();
 }
 int area()
 {
  int ar;
  ar=a*a;
  printf("Area of the square is %d\n",ar);
  }
  
  int perimeter()
  {
   int peri;
   peri=4*a;
   printf("The perimeter of the square is %d\n",peri);
  }
