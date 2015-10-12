#include <stdio.h>
#include <math.h>

void input(float x[100][100], int p, int q);
void output(float x[100][100], int p, int q);

int main()
{
    float a[100][100],b[100][100],c[100][100];
    int n,m,p,i,j,k;
    printf("\nNhap vao 3 so n,m,p : ");
    scanf("%d %d %d",&n,&m,&p);
    printf("\nNhap A");
    input(a,n,m);
    printf("\nNhap B");
    input(b,m,p);
    for (i=0; i<n; i++)
        for (j=0;  j<p; j++)
            for (k=0; k<m; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
    printf("\nMA TRAN A\n");
    output(a,n,m);
    printf("\nMA TRAN B\n");
    output(b,m,p);
    printf("\nMA TRAN C\n");
    output(c,n,p);
    getch();
    return (0);
}

void input(float x[100][100], int p, int q)
{
    for (int i=0; i<p; i++)
        for (int j=0;  j<q; j++)
        {
            printf("\n[%d,%d] = ",i,j);
            scanf("%f",&x[i][j]);
        }
}

void output(float x[100][100], int p, int q)
{
    for (int i=0; i<p; i++)
    {
        printf("\n");
        for (int j=0;  j<q; j++)
        {
            printf("%.5f     ",x[i][j]);
        }
    }
}
