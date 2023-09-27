//frequency of a number
#include<stdio.h>
int main()
{
	int a[20],n,key,i,count=0;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	printf("Enter the %d Elements: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the key element: \n");
	scanf("%d",&key);
	//frequency starts now 
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			count=count+1;
		}
	}
	printf("Frequency of %d is repeated %d times !!!\n",key,count);
	return 0;
}
