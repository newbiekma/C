#include <stdio.h>
#include <math.h>

main()
{
	float a,b,c,d,e,f;
	float dd,dx,dy,x,y;
	printf("\nNhap vao a,b,c,d,e,f : ");  scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	dd = a*e - d*b;
	dx = c*e - b*f;
	dy = a*f - d*c;
	if (dd != 0)  
	{
		x = (float)dx/dd;
		y = (float)dy/dd;
		printf("\nHe co nghiem duy nhat : (%f %f) ",x,y);
	}
	else
		if ((dx == dy)&&(dy == 0))  printf("\nHe co vo so nghiem");
		else printf("\nHe vo nghiem"); 
	getch();
}
