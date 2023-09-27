#include<stdio.h>
int main()
{
	int a[3][3],i,j,m,n;
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
	printf("Transpose of a matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
