#include<stdio.h>
int main()

{
int n,sum;
printf("enter how many numbers you want to add "); 
scanf("%d",&n);
printf("enter the numbers: ");

sum=add(n);

printf("sum is= %d",sum);

return 0;
}
int add( int n)
{
int sum=0,a;

for(int i=0; i<n; i++)
{

scanf("%d",&a);
sum=sum+a;

}

return sum;

}
