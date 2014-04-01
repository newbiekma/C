#include"stdio.h"
#define MAX 50
FILE *f;
int i,j;

void doc(int a[][MAX],int n,int m);
void tich(int a[][MAX],int b[][MAX],int c[][MAX],int n,int p,int m);
void ghi(int a[][MAX],int n,int m);

void doc(int a[][MAX],int n,int m)
{
	int tam;
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
		{
			fscanf(f,"%d",&tam);
			a[i][j]=tam;
		}
}

void tich(int a[][MAX],int b[][MAX],int c[][MAX],int n,int p,int m)
{
	int k,s;
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
		{
			for (s=0,k=0;k<p;k++)
				s+=a[i][k]*b[k][j];
			c[i][j]=s;
		}
}

void ghi(int a[][MAX],int n,int m)
{
	fprintf(f,"\nma tran tich:\n");
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			fprintf(f,"%-5d%c",a[i][j],j==m-1?'\n':' ');
}

int main()
{
	int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],n,m,p;
	if((f=fopen("TICH_MT.C","r+t"))==NULL)
	{
		printf("\ntep khong ton tai\n");
		return 0;
	}
	fscanf(f,"%d%d%d",&n,&p,&m);
	doc(a,n,p);
	doc(b,p,m);
	tich(a,b,c,n,p,m);
	ghi(c,n,m);
	fclose(f);
	return 0;
}
