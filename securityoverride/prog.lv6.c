#include"stdio.h"
#include"math.h"
#include"stdlib.h"
int main()
{
	long a=1,b=0,c=0,delta=0;
	char s[10];
	printf("chuoi input:");
	scanf("%20s",s);
	scanf("%20s",s);
	scanf("%ld",&b);
	scanf("%20s",s);
	scanf("%20s",s);
	scanf("%20s",s);
	c=atoi(s);
	delta=sqrt((double)b*b-4*c);
	printf("(x+%ld)(x+%ld)\n",(b+delta)/2,(b-delta)/2);
	return 0;
}
