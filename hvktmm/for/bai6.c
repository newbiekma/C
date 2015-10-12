#include <stdio.h>
#include <math.h>

int main()
{
	int a[100][100],i,j,n,max,k=0;
	printf("\nNhap kich thuoc ma tran vuong n : ");  scanf("%d",&n);
	for (i=0; i<n; i++)
		for(j=0; j<n; j++)
		{
			printf("\nA[%d,%d] = ",i,j);  scanf("%d",&a[i][j]);
		}
	max = a[0][0];
	for (i=0; i<n; i++)
		for(j=0; j<n; j++)
		{
			if (a[i][j]>max)  max = a[i][j];
		}
	printf("\nMA TRAN\n");
	for (i=0; i<n; i++)
	{
		printf("\n");
		for(j=0; j<n; j++)
		{
			printf("%5d",a[i][j]);
		}	
	}
	printf("\nMax = %d",max);
	for (i=0; i<n; i++)
		for(j=0; j<n; j++)
		{
			if ((i+j>n-1)&&(a[i][j]==max))  k++;
		}
	printf("\nSo cac Max cua nua duoi duong cheo phu : %d ",k);
	getch();
	return (0);
}
