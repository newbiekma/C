#include <stdio.h>
#include <math.h>

float dd,dx,dy,x,y;

void th1();
void th2();
void th3();

main()
{
	float a,b,c,d,e,f;
	printf("\nNhap vao a,b,c,d,e,f : ");  scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	dd = a*e - d*b;
	dx = b*f - e*c;
	dy = a*f - d*c;
	if (dd != 0)  
		th1();
	else
		if ((dx == dy)&&(dy == 0))  th2();
		else th3();
	getch();
}

void th1()
{
	x = (float)dx/dd;
	y = (float)dy/dd;
	printf("\nHe co nghiem duy nhat : (%f %f) ",x,y);
}

void th2()
{
	printf("\nHe co vo so nghiem");
}

void th3()
{
	printf("\nHe vo nghiem"); 
}
