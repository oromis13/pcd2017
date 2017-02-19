#include<stdio.h>
int main()
{

int a,b;

printf("input two numbers to be added ");

scanf("%d%d",&a,&b);

add(a,b);

return (0);

}


void add( int a, int b)
{
 int sum=a+b;
 
 printf(" sum is %d",sum);
 }
