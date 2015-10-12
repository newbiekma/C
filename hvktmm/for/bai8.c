#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a[50][50];
	int n,i,j,x=1,hangmin=1,cotmin=1,hangmax,cotmax;
	printf("nhap n = ");
	scanf("%d",&n);
	cotmax = n;
	hangmax = n;
	for (;x <= n*n;)  //while (x <= n*n)
	{
		i = hangmin;
		for (j=cotmin;j<cotmax;j++)
			a[i][j]=x++;
		for (i=hangmin; i<hangmax; i++)
			a[i][j]=x++;
		for (j=cotmax; j>cotmin; j--)
			a[i][j]=x++;
		for (i=hangmax; i>hangmin; i--)
			a[i][j]=x++;
		if (n%2 != 0) a[n/2+1][n/2+1] = n*n;
		hangmin += 1;  hangmax -= 1;
		cotmax -= 1;   cotmin +=1;
	}
		
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	getch();
	return (0);
}
