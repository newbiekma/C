#include <stdio.h>

int main()
{
	int n;
	long int gt=1;
	printf("\nNhap vao so n : "); scanf("%d",&n);
	for (int i=1; i<=n; i++)  gt*=i;
	printf("\n%d! = %d ",n,gt);
	getch();
	return (0);
}
