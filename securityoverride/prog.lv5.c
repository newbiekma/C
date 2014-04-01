#include"stdio.h"
#include"string.h"
int main()
   {
char *s[5],a[250],a1[50],a2[50],a3[50],a4[50],i,j;
s[0]=a;
s[1]=a1;
s[2]=a2;
s[3]=a3;
s[4]=a4;
printf("\nnhập dãy ký tự:\n");
for (i=0;i<5;i++)
gets(s[i]);
for (i=0;i<5;i++)
{
for (j=0;j<50;j++)
if (s[i][j]=='@')
printf("%c %d-%d",i>0?',':' ',i+1,j);
}
printf("\n\n");
return 0;
   }
