//linear search programming in c language
#include<stdio.h>
int main()
{
	int a[20],n,key,i,pos,flag=0;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	printf("Enter the %d Elements: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the key element: \n");
	scanf("%d",&key);
	//searching starts now 
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag==1)
	{
	   printf("search element %d is found at position %d \n",key,pos);	
	}
	else
	{
		printf("search element is not found\n");
	}
	return 0;
}
