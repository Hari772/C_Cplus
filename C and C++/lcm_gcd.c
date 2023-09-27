#include<stdio.h>
int a,b,c,d;
int gcd_lcm()
{
	printf("Enter the values of two numbers a,b: \n");
	scanf("%d%d",&a,&b);
	c=a;
	d=b;
	while (a!=b)
	{
		if (a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	return a;
}

int main()
{
	c=a;
	d=b;
	int y;
	int g=gcd_lcm();
	printf("gcd of two numbers %d and %d is %d  \n",c,d,g);
	y=c*d/a;
	printf("\n");
	printf("lcm of two numbers %d and %d is %d  \n",c,d,y);
	return 0;
}
