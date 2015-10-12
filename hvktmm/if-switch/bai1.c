#include <stdio.h>
#include <math.h>

main()
{
	float a,b,c,max,min,tbc;
	printf("\nNhap vao a,b,c : ");  scanf("%f%f%f",&a,&b,&c);
	max = a;
	if (b > max)  max = b;
	if (c > max)  max = c;
	min = a;
	if (b > min)  min = b;
	if (c > min)  min = c;
	tbc = (float)((a+b+c)/3);
	printf("\nMax, Min, TBC = %f %f %f ",max,min,tbc);
	getch();
}
