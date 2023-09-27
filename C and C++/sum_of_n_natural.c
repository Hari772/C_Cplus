//sum of  n natural numbers
#include<stdio.h>
int sum(int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return (n+sum(n-1));
	}
}
int main()
{
	int n,res;
	printf("Enter the value for n to find sum up to n: ");
	scanf("%d",&n);
	res=sum(n);
	printf("The sum of first %d natural numbers is %d",n,res);
}
