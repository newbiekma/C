#include"stdio.h"
#define MAX 50
int n,m,i,j;
FILE *f;

void intput(float a[][MAX]);
void add(float a[][MAX], float b[][MAX], float[][MAX]);
void ghi(float a[][MAX]);

void intput(float a[][MAX])
{
	float tam;
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
		{
			printf("[%d][%d] = ",i,j);
			scanf("%f",&tam);
			a[i][j]=tam;
		}
}

void add(float a[][MAX], float b[][MAX], float c[][MAX])
{
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			c[i][j]=a[i][j]+b[i][j];
}

void ghi(float a[][MAX])
{
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			fprintf(f,"%8.2f%c",a[i][j],j==m-1?'\n':' ');
}

int main()
{
	float a[MAX][MAX], b[MAX][MAX],c[MAX][MAX];
	do
	{
		printf("nhap n va m:");
		scanf("%d%d",&n,&m);
	}
	while (50<n||n<1||50<m||m<1);
	printf("nhap ma tran a:\n");
	intput(a);
	printf("\nnhap ma tran b:\n");
	intput(b);
	add(a,b,c);
	f=fopen("CONG_MT.C","w+");
	fprintf(f,"ma tran a:\n");
	ghi(a);
	fprintf(f,"\nma tran b:\n");
	ghi(b);
	fprintf(f,"\nma tran c:\n");
	ghi(c);
	fclose(f);
	return 0;
}
