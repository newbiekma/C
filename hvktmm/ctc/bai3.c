#include <stdio.h>
#include <conio.h>
#include <math.h>
void input(float a[100], int n);
void tonghs(float a[100], int an, float b[100], int bn);
void inhs(float a[100], int n);
float tinhgt(float a[100], int n, float x);
void output();
//Khai bao bien toan cuc
float p[100],q[100],t[200];
float x;
int i,j,k,m,n,o;

int main()
{
	printf("\nKich thuoc P: n = ");  scanf("%d",&n);
	input(p,n);
	printf("\nKich thuoc Q: m = ");  scanf("%d",&m);
	input(q,m);
	printf("\nSo thuc x = ");  scanf("%f",&x);
	output();
	return (0);
	getch();
}

void input(float a[100], int n)
{
	for (int i=n;i>=0;i--)
	{
		printf("\nHe so cua x^%d : ",i);  scanf("%f",&a[i]);
	}
			
}

void output()
{
	printf("\n============K=E=T=Q=U=A============\n");
	printf("\n[1] In he so da thuc : \n");
	printf("\nP = "); inhs(p,n);
	printf("\nQ = "); inhs(q,m);
	printf("\nP + Q = "); tonghs(p,n,q,m);
	printf("\n");
	printf("\n[2] Gia tri X : %.2f \n",x);
	printf("\n[3] In gia tri da thuc : \n");
	printf("\nP = %.2f \nQ = %.2f \nP + Q = %.2f \n",tinhgt(p,n,x),tinhgt(q,m,x),tinhgt(p,n,x)+tinhgt(q,m,x));
}

void tonghs(float a[100], int an, float b[100], int bn) 
{
	while (an != bn)
	{
		if (an<bn)
			{ an++; a[an]=0; }
		else { bn++; b[bn]=0; }
	}
	for (i=0;i<=an;i++)
		t[i]=a[i]+b[i];
	inhs(t,an);
}

float tinhgt(float a[100], int n, float x)
{
	float s=a[0];
	for (int i=n; i>0; i--)
		s += a[i]*pow(x,i);
	return (s);
}

void inhs(float a[100], int n) 
{
	for (int i=n; i>=0; i--)
		if (a[i]!=0)
		 	if (i==n)  printf("%.0fx%d",a[i],i);
			else 
			if (i==1)
			{
				if (a[i]>0)  printf(" + %.0fx",fabs(a[i]));
				else 
				if (a[i]<0)  printf(" - %.0fx",fabs(a[i]));
			}
			else 
			if (i==0)
			{
				if (a[i]>0)  printf(" + %.0f",a[i]);
				else 
				if (a[i]<0)  printf(" - %.0f",fabs(a[i]));
			}
			else
			{
				if (a[i]>0)  printf(" + %.0fx%d",fabs(a[i]),i);
				else 
				if (a[i]<0)  printf(" - %.0fx%d",fabs(a[i]),i);
			}
}
