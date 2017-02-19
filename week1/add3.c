#include<stdio.h>
int main()
{

int a,b,c;

printf("input three numbers to be added ");

scanf("%d%d%d",&a,&b,&c);

add(a,b,c);

return (0);

}


void add( int a, int b,int c)
{
 int sum=a+b+c;
 
 printf(" sum is %d",sum);
 }
