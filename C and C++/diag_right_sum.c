#include<stdio.h>
int main()
{
	int a[3][3],i,j,m,n,diag_sum=0;
	printf("Enter the vlaue of m and n:\n");
	scanf("%d%d",&m,&n);
	printf("Enter the %d elements in array: \n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=2;j<n;j--)
		{
			if(i==j)
			{
				diag_sum=diag_sum+a[i][j];
				break;
			}
		}
	}
	printf("diagnoal of matrix is:%d\n",diag_sum);
	
}
	
