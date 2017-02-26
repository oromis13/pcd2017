#include<stdio.h>
int main()
{

int a,b,sum;

printf("input two numbers to be added ");

scanf("%d%d",&a,&b);

sum=add(a,b);

printf("sum is %d",sum);

return (0);

}


int add( int a, int b)
{
 return(a+b);
 }
