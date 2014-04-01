#include"stdio.h"
#include"string.h"
int main()
{
	char s[10];
	int i,out;
	printf("nhap:");
	gets(s);
	for (i=0;i<strlen(s);i++)
		out+=s[i];
	printf("%d\n",out);
	return 0;
}
