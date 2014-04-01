#include"stdio.h"
#include"string.h"
int main(){
	char s[20];
	int i;
	printf("input:");
	gets(s);
	printf("%c",s[0]);
	for (i=strlen(s);i>0;i--)
		printf("%c",s[i]);
	printf("\n");
	return 0;
}
