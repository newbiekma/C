#include <stdio.h>
#include <math.h>

int main()
{
	int a[100],i,n,max,min,imax=0,imin=0;
	printf("\nNhap vao so phan tu n = ");  scanf("%d",&n);
	for (i=0; i<n; i++) 
	{
		printf("\nPhan tu thu %d : ",i);  scanf("%d",&a[i]);
	}
	max = a[0];  min = a[0];
	for (i=0; i<n; i++) 
	{
		if (a[i]>max)  
		{
			max = a[i]; imax = i;
		}
		if (a[i]<min)  
		{
			min = a[i]; imin = i;
		}
	}
	printf("\nMax = %d,Chi so: %d. Min = %d,Chi so: %d.\n",max,imax,min,imin);
	getch();
	return (0);
}