#include<stdio.h>
int main()
{
	int a[3][3],i,j,m,n,sum=0;
	printf("Enter the vlaue of m and n:n\n");
	scanf("%d%d",&m,&n);
	printf("Enter the %d elements in array: \n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
			//printf("%d",sum);
		}
		//printf("\n");
	}
	printf("sum of a matrix is: %d\n",sum);
	//for(i=0;i<m;i++)
	//{
		//for(j=0;j<n;j++)
		//{
			//printf("%d",sum);
		//}
		//printf("\n");
	//}
	return 0;
}
