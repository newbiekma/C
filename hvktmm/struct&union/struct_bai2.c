#include"ncurses.h"
#include"curses.h"
#include"string.h"
#include"ctype.h"
#define MAX 100


typedef struct { 	char kh[1];
			double a;
			double b;
			double c;}KHOI;
typedef struct {char ht[20];
		char que[20];
		char ngaysinh[20];
		KHOI khoi;
		float tongdiem;
		}thisinh;


int main()
{
	char ch[MAX];
	int n,i,j;
	thisinh ts[MAX],tam;
	printf("nhap so luong thi sinh = ");
	n=atoi(gets(ch));


//nhap so lieu
	for (i=1;i<=n;i++)
	{
		printf("\nthong tin thi sinh thi %d",i);
		printf("\nhoten:");
		fflush(stdin);
		gets(ts[i].ht);
		printf("que quan:");
		strcpy(ts[i].que,gets(ch));
		printf("ngay sinh:");
		strcpy(ts[i].ngaysinh,gets(ch));
		printf("nhap khoi hoc (A hoac C):");
		gets(ch);
		ts[i].khoi.kh[0]=toupper(ch[0]);
		if (ts[i].khoi.kh[0]=='A')
		{
			printf("diem toan = ");
			scanf("%lf",&ts[i].khoi.a);
			printf("diem li = ");
			scanf("%lf",&ts[i].khoi.b);
			printf("diem hoa = ");
			scanf("%lf",&ts[i].khoi.c);
		}
		else
		{
			printf("diem Van = ");
			scanf("%lf",&ts[i].khoi.a);
                        printf("diem Su = ");
			scanf("%lf",&ts[i].khoi.b);
                        printf("diem Dia = ");
			scanf("%lf",&ts[i].khoi.c);
		};
		ts[i].tongdiem=ts[i].khoi.a+ts[i].khoi.b+ts[i].khoi.c;
	};


//sap xep
	for (i=1;i<n;i++);
		for (j=i+1;j<=n;j++);
			if (ts[i].tongdiem<ts[j].tongdiem)
			{
				tam=ts[i];
				ts[i]=ts[j];
				ts[j]=tam;
			};




//in danh sach
	printf("\noutput\n");
	printf("DANH SACH THI SINH KHOI A\n");
	printf("STT\thoten\t\t\tque\t\tngaysinh\t\ttoan\tli\thoa\ttong");
	for (i=1,j=1;i<=n;i++)
		if(ts[i].khoi.kh[0]=='A')
			printf("\n%d\t%s\t\t\t%s\t\t%s\t\t%.2lf\t%.2lf\t%.2lf\t%.2lf",j++,ts[i].ht,ts[i].que,ts[i].ngaysinh,ts[i].khoi.a,ts[i].khoi.b,ts[i].khoi.c,ts[i].tongdiem);
	printf("\nDANH SACH THI SINH KHOI C\n");
	for (i=1,j=1;i<=n;i++)
                if(ts[i].khoi.kh[0]!='A')
                        printf("\n%d\t%s\t\t\t%s\t\t%s\t\t%.2lf\t%.2lf\t%.2lf\t%.2lf",j++,ts[i].ht,ts[i].que,ts[i].ngaysinh,ts[i].khoi.a,ts[i].khoi.b,ts[i].khoi.c,ts[i].tongdiem);
	printf("\n");
	return 0;
}
