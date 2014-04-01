#include"stdio.h"
#include"math.h"
int main()
{
	float a[3];
	int i;
	char s[20];
	printf("chuoi input:");
	for (i=0;i<3;i++)
	{
		scanf("%[^=]",s);
		scanf("%c",&s[0]);
		scanf("%f",&a[i]);
	}
	printf("%.3f",sqrt(pow((a[2]/2),2)+pow((a[1]-sqrt(a[0]*a[0]-(a[2]/2)*(a[2]/2))),2)));
	return 0;
}
