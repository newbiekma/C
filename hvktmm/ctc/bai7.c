#include <stdio.h>
#include <conio.h>
long ucln(long x, long y);

main()
{
	long a,b;
	printf("\nNhap 2 so nguyen duong : ");  scanf("%ld %ld",&a,&b);
	printf("\nUCLN(%ld,%ld) = %ld\n",a,b,ucln(a,b));
    getch();
}

long ucln(long x, long y)
{
	if (x==y)  return x;
	else
 		if (x>y) return ucln(x-y,y);
		else return ucln(x,y-x);
}
