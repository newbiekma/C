#include"stdio.h"
#include"math.h"
int main()
{
	float a;
	printf("intput:");
	scanf("%f",&a);
	printf("%.0f\n",floor(2*sqrt((double)a*a+a*a/4)));
	return 0;
}
