#include"stdio.h"
#include"string.h"

typedef struct	{
			int dd,yy;
			char mm[10];
		}dulieu;

char s[7][10]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
char month[12][15]={"Jan","Feb","Mar","Apr","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

int main()
{
	dulieu data[3];
	int t,i,thu,j,thang,sum;
	char tam[10];
	for (i=0;i<3;i++)
	{
		scanf("%3s",tam);
		strcpy(data[i].mm,tam);
		scanf("%10s",tam);
		scanf("%d",&t);
		data[i].dd=t;
		scanf("%c",&tam[0]);
		scanf("%d",&t);
		data[i].yy=t;
		scanf("%c",&tam[0]);
	}
	printf("");
	for (i=0;i<3;i++)
	{
		sum=0;
		sum=((data[i].yy-1)%7)*365+(data[i].yy-1)/4+data[i].dd;
		for (j=0;j<12;j++)
			if(strcmp(data[i].mm,month[j])==0)
			{
				thang=j;
				break;
			}
		switch (thang)
		{
			case 12: sum+=31;
			case 11: sum+=30;
			case 10: sum+=31;
			case 9: sum+=30;
			case 8: sum+=31;
			case 7: sum+=31;
			case 6: sum+=30;
			case 5: sum+=31;
			case 4: sum+=30;
			case 3: sum+=31;
			case 2: if(data[i].yy%400==0||(data[i].yy%4==0&&data[i].yy%100!=0)) sum+=29;
                                        	else sum+=28;
			case 1: sum+=31;
		}
		thu=sum%7;
		printf("%s%s%s",s[thu],i!=2?",":"",i!=2?" ":"");
	}
	printf("\n");
	return 0;
}
