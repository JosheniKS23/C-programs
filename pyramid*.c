#include<stdio.h>
int main()
{
  int rows, i=0,j, stars =1;
  printf("Enter the number of rows: ");
  scanf("%d",&rows);
  while(i < rows)
  {
    j = 0;
    while (j < stars)
    {
     printf("*");
     j++;
    }
   printf("\n");
   stars += 2;
   i++;
  }
 return 0;
}
