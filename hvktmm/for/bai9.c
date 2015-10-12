#include <stdio.h>
#include <conio.h>

int main()
{
	int *x, *y, *z, i, j, t, k, m, n;
	printf("\nNhap vao kich thuoc mang A: ");  scanf("%d",&m);
    x = (int *) malloc (m*sizeof(int));
	for (i=0; i<m; i++)
    {
    	printf("\nA[%d] = ",i+1);
    	scanf("%d",x+i);
    }

	printf("\nNhap vao kich thuoc mang B: ");  scanf("%d",&n);
    y = (int *) malloc (n*sizeof(int));
	for (i=0; i<n; i++)
    {
    	printf("\nB[%d] = ",i+1);
    	scanf("%d",y+i);
    }

    z = (int *) malloc ((m+n)*sizeof(int));
	i=0; j=0; k=0;
	while (i<m && j<n)
	{
		if (*(x+i)<=*(y+j))  *(z+k++)=*(x+i++);
		else  *(z+k++)=*(y+j++);
	}
	//if (i!=m)
		for (t=i; t<m; t++)
			*(z+k++)=*(x+t);
	//else if (j!=n)
		for (t=j; t<n; t++)
			*(z+k++)=*(y+t);

    printf("\n\nMANG A\n\n");
	for (i=0; i<m; i++)
    	printf("%5d",*(x+i));
    printf("\n\nMANG B\n\n");
	for (j=0; j<n; j++)
    	printf("%5d",*(y+j));
    printf("\n\nMANG MERGE SORT\n\n");
	for (i=0; i<(m+n); i++)
    	printf("%5d",*(z+i));

    free(x);
    free(y);
    free(z);
	getch();
	return (0);
}


