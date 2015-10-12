#include <stdio.h>
#include <math.h>

main()
{
	int x,y;
	long int z;
	printf("\nNhap gia tri x,y (x mu y) : ");  scanf("%d%d",&x,&y);
	z = pow(x,y);
	printf("\nKQ = %d",z);
	getch();
}
