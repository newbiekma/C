#include <stdio.h>
#include <conio.h>
int ucln(int x, int y);

int main()
{
	int a,b;
	printf("\nNhap 2 so nguyen duong : ");  scanf("%d %d", &a, &b);
	printf("\nUCLN(%d,%d) = %d\n", a, b, ucln(a,b));
    getch();
    return 0;
}

int ucln(int x, int y)
{
	return ((x == 0) ? y : ucln(y % x, x));
}
