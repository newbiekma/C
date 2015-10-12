#include <stdio.h>
#include <math.h>

main()
{
	float a = 1.25,x,y;
	printf("\nNhap vao x :");  scanf("%f",&x);
	y = exp2f(a + sinf(x)*sinf(x) - x);
	printf("\nKQ = %E\n",y);
	getch();
}
