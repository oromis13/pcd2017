#include<stdio.h>
int main()
{

int a,b,c,sum;

printf("input three numbers to be added ");

scanf("%d%d%d",&a,&b,&c);

sum=add(a,b,c);
printf(" sum is %d",sum);

return (0);

}


int add( int a, int b,int c)
{
 return(a+b+c);
 
 }
