#include<stdio.h>
int main()
{
	int a[]={40,10,30,10,30,20},i,count=0,j,n;
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if (a[i]==a[j])
			{
				count=count+1;
			}
		}
		if (count==1)
		{
			printf("%d's' non reapeating element is: %d\n",i,a[i]);
		}
	}
	return 0;
}
