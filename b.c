#include <stdio.h>
 
int main()
{
 int i,n=100;

 
 printf("\nEven Number List :\n ");
 
 i=2;
 while(i <= n)
 {
  printf(" %d",i);
  i = i + 2;
 }

 printf("\nOdd Number List :\n ");

 i=1;
 while(i <= n)
 {
  printf(" %d",i);
  i = i + 2;
 }
}