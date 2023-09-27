#include<stdio.h>
int main()
{
	int a[3][3],i,j,m,n,max;
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
	max=a[0][0];
	printf("maximum element  of a matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
		}
//		printf("\n");
	}
	printf("%d",max);
	return 0;
}
