#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void inhs(float a[100], int n);

int main()
{
	int x, n;
	float hs[100];
	printf("\nNhap x va n: "); scanf("%d %d", &x, &n);
	for (int i=n; i>=0; i--)
	{
		printf("\nHe so cua x^%d: ", i); scanf("%f",&hs[i]);
	}
	hs[-1] = 0;
	printf("\nDa thuc : "); inhs(hs,n);
	printf("\n");
	printf("\nGia tri x : %d\n", x);
	float p = hs[0];
	for (int i=n; i>0; i--)
		p += hs[i] * powf(x,i);
	printf("\nGia tri da thuc: %.2f\n", p);
	getchar();
    return 0;
}

void inhs(float a[100], int n)
{
	for (int i=n; i>=0; i--)
		if (a[i]!=0)
		 	if (i==n)
                printf("%.0fx^%d", a[i], i);
			else if (i==1)
                {
                    if (a[i]>0)
                        printf(" + %.0fx", fabs(a[i]));
                    else if (a[i]<0)
                        printf(" - %.0fx", fabs(a[i]));
                }
                else if (i==0)
                    {
                        if (a[i]>0)
                            printf(" + %.0f", a[i]);
                        else if (a[i]<0)
                            printf(" - %.0f", fabs(a[i]));
                    }
                    else
                    {
                        if (a[i]>0)  printf(" + %.0fx^%d", fabs(a[i]),i);
                        else
                        if (a[i]<0)  printf(" - %.0fx^%d", fabs(a[i]),i);
                    }
}
