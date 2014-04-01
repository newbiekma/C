#include"stdio.h"
#include"math.h"
int SNT(int n)
{
	int i=2;
	for (;i<sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}
int main()
{
	int x,i,j,out=0;
	printf("intput:");
	scanf("%d",&x);
	for (i=2;i<=x/2;i++)
		if(x%i==0&&SNT(i)==1)
			out+=i;
	printf("%d\n",out);
	return 0;
}
