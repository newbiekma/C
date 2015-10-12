#include <stdio.h>
#include <math.h>

int main()
{
	int a[100], i , n,sd=0, sa=0, tsd=0, tsa=0;
	float tbsd, tbsa;
	printf("\nNhap vao so phan tu n = ");  scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		printf("\nPhan tu thu %d : ",i);  scanf("%d", &a[i]);
	}
	for (i=0; i<n; i++)
	{
		if (a[i]>0)
		{
			tsd += a[i];
			sd += 1;
		}
		if (a[i]<0)
		{
			tsa += a[i];
			sa += 1;
		}
	}
	printf("\nTong so so duong: %d. Tong so so am: %d.\n", sd, sa);
	printf("\nTBC so duong: %f. TBC so am: %f.\n", (float)tsd/sd, (float)tsa/sa);
	printf("\nTBC day so: %f.\n", (float)(tsd+tsa)/n);
	getch();
	return (0);
}
