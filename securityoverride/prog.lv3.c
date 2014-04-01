#include"stdio.h"
#include"string.h"
#include"stdlib.h"
int main()
{
	FILE *f;
	char p[200][10],s[100];
	long so[200];
	int i=0,n,j,tong=0;
	f=fopen("dictionary.txt","rt");
	while(feof(f)==0)
	{
		fscanf(f,"%8s",p[i]);
		for (j=0;j<strlen(p[i]);j++)
			tong+=p[i][j]*p[i][j];
		so[i]=tong;
		tong=0;
		i++;
	}
	n=i;
	fclose(f);
	printf("input:");
	gets(s);
	strcat(s,", ");
	for (i=0;i<strlen(s);i++)
		if(s[i]!=' ')
			tong+=s[i]*s[i];
		else
		{
			for(j=0;j<n;j++)
				if(so[j]==tong)
				{
					printf("%s ",p[j]);
					break;
				}
			tong=0;
		}
	printf("\n");
	return 0;
}
