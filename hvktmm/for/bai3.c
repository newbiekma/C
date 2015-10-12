#include <stdio.h>
#include <math.h>

int main()
{
	float x[100],y[100];
	int n,k=0,i;
	printf("\nNhap vao so luong diem n = ");  scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		printf("\nToa do diem thu %d (x,y): ",i);  scanf("%f %f",&x[i],&y[i]); 
	}
	for (i=0; i<n; i++)
	{
		if ((x[i]>0)&&(y[i]>0))   
		{
			k+=1;
			printf("\n(%f, %f)",x[i],y[i]);
		}
	}
	printf("\nCo %d diem thuoc goc phan tu thu I .\n",k);
	getch();
	return (0);
}