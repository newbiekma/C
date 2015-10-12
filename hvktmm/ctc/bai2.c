#include <stdio.h>
#include <conio.h>

void doicoso(int x,int y);

int main()
{
	int n;
	printf("\nNhap vao so nguyen duong n : ");  scanf("%d",&n);
	doicoso(n,2);
	doicoso(n,8);
	doicoso(n,16);
	getch();
	return (0);
}

void doicoso(int x,int y)
{
	char kq[100];
	int i=0,j;
	while (x > 0)
	{
		i += 1;
		kq[i] = x%y;
		x = x/y;
	}
	printf("\nBIEU DIEN BANG CO SO %d : \n",y);
	for (j=i; j>0; j--)
		printf("%X ",kq[j]);
	printf("\n");
}
