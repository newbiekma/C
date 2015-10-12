#include <stdio.h>
#include <conio.h>
int x,n;
char k;

int main() 
{ 
	double x_mu_n(double x,unsigned n);
	long gt(int a);
	long tonglp(int n);
	void input();
	do
    {
    	printf("\nChuc nang : \n1-Tinh x mu n \n2-Tinh (2n)! \n3-Tinh tong cac lap phuong \n4-Exit \nYour choice ? [1..4] ");
    	scanf("%d",&k);
    	switch (k)
    	{
	    	case 1: input(); printf("\n%.lf\n",x_mu_n(x,n));  getch(); break;
	    	case 2: input(); printf("\n%ld\n",gt(2*n));   getch(); break;
	    	case 3: input(); printf("\n%ld\n",tonglp(n));  getch(); break;
	    	default: break;
	    }
    } while (k<4);
    getch(); 
    return (0);
}  

double x_mu_n(double x,unsigned n) 
{ 
    return n?x*x_mu_n(x,n-1):1; 
} 
long gt(int a)
{
	return (a==0)?1:a*gt(a-1);
}
long tonglp(int n)
{
	return (n==1)?1:(tonglp(n-1)+n*n*n);
}
void input()
{
	printf("\nNhap n : "); scanf("%d",&n);
	if (k==1) { printf("\nNhap x : "); scanf("%d",&x); }
	printf("\nProcess ... Press Enter !\n");
	getch();
}
