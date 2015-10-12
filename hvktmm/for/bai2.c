#include <stdio.h>
#include <math.h>

long int gt(int x)
{
	long int temp=1;
	for (int i=1; i<=x; i++) temp*=i;
	return temp;
}

int main()
{
	float s=0;
	int n;
	printf("\nNhap vao so n : ");  scanf("%d",&n);
	for (int i=1; i<=n; i++) s+=(float)1/gt(i);
	printf("\nKQ = %f \n",s);
	getch();
	return (0);
}