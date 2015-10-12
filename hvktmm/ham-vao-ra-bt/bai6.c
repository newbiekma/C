#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float a=2.5,b=1.5,c=4;
	float tuso,mauso,x,y;
	printf("\nNhap vao x : ");  scanf("%f",&x);
	tuso = x*x*x + sinf(b) - exp2f(0.234);
	mauso = 5 + exp2f(b) + c*abs(0.25 + x) - sqrtf(x+cosf(b));
	y = tuso/mauso;
	printf("\nKQ = %f\n",y);
	getch();
}
