#include<stdio.h>
#include<math.h>

struct complex
{
	float real,img;
};

struct quad
{
	struct complex r1,r2;
};

int FindRoots(float a,float b,float c,struct quad *r)
{
	if (a==0)
	return(-1);
	
	float d=b*b-4*a*c;
	
	if (d==0){
		
		r->r1.real=r->r2.real=-b/(2*a);
		r->r1.img=r->r2.img=0;
		return 0;
	}
	
	else if(d>0){
		
		r->r1.real=(-b+sqrt(d))/(2*a);
		r->r1.img=r->r2.img=0;
		r->r2.real=(-b-sqrt(d))/(2*a);
		return 1;
		
	}
	
	else{
		r->r1.real=-b/(2*a);
		r->r1.img=sqrt(0-d)/(2*a);
		
		return 2;
	}
}

int displayRoots(struct quad r)
{
	
	if(r.r1.img==0)
	printf("The roots are %f and %f",r.r1.real,r.r2.real);
	
	else
	printf("The roots are %f+i%f and %f-i%f ",r.r1.real,r.r1.img,r.r1.real,r.r1.img);
	return 0;
	
}
	
	


int main()
{
	int a,b,c;
	struct quad x;
	
	printf("enter the coefficients of the quadratic eqauation -a,b,c ");
	scanf("%d%d%d",&a,&b,&c);
	FindRoots(a,b,c,&x);
	displayRoots(x);
	
	return 0;
}

	
	
	
		
