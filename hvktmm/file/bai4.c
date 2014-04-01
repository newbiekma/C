#include"stdio.h"
#define MAX 100

typedef struct	{
			char ten[20];
			int tuoi;
			float diem;
		}SINHVIEN;
char s[5][20]={"DANH SACH SINH VIEN","STT","Ho ten","Tuoi","Diem TB"},ch[10];

int main()
{
	FILE *f;
	SINHVIEN sv[MAX],svb[MAX];
	int i,n,kt=0;
	f=fopen("DSACH.C","wb");
	printf("nhap so luong sinh vien = ");
	gets(ch);
	n=atoi(ch);
	for (i=1;i<=n;i++)
	{
		printf("nhap thong tin sv thu %d:\nHo ten: ",i);
		gets(sv[i].ten);
		printf("Tuoi = ");
		gets(ch);
		sv[i].tuoi=atoi(ch);
		printf("diem trung binh = ");
		gets(ch);
		sv[i].diem=atoi(ch);
		fwrite(sv+i,sizeof(SINHVIEN),1,f);
	}
	fclose(f);
	printf("%30s\n%-5s%-15s%-10s%-10s",s[0],s[1],s[2],s[3],s[4]);
        for (i=1;i<=n;i++)
                printf("\n%-5d%-15s%-10d%-10.2f",i,sv[i].ten,sv[i].tuoi,sv[i].diem);

	f=fopen("DSACH.C","rb");
	fread(svb+1,sizeof(SINHVIEN),n,f);
	fclose(f);
	printf("\nDu Lieu Doc Tu Tep:\n");
	printf("%30s\n%-5s%-15s%-10s%-10s",s[0],s[1],s[2],s[3],s[4]);
        for (i=1;i<=n;i++)
                printf("\n%-5d%-15s%-10d%-10.2f",i,svb[i].ten,svb[i].tuoi,svb[i].diem);
	f=fopen("DSACH.C","wb");
	bosung:
	do
	{
		printf("\nbo sung them 1 sv?(c/k)\n");
		gets(ch);
	}
	while(ch[0]!='c'&&ch[0]!='C'&&ch[0]!='k'&&ch[0]!='K');
	if (ch[0]=='c'||ch[0]=='C')
	{
		n++;i=n;
		printf("nhap thong tin sv thu %d:\nHo ten: ",i);
                gets(sv[i].ten);
                printf("Tuoi = ");
                gets(ch);
		sv[i].tuoi=atoi(ch);
                printf("diem trung binh = ");
                gets(ch);
		sv[i].diem=atoi(ch);
                fwrite(sv+i,sizeof(SINHVIEN),1,f);
		kt=1;
		goto bosung;
	}
	fclose(f);
	if(kt==1)
	{
		printf("%30s\n%-5s%-15s%-10s%-10s",s[0],s[1],s[2],s[3],s[4]);
        	for (i=1;i<=n;i++)
                	printf("\n%-5d%-15s%-10d%-10.2f",i,sv[i].ten,sv[i].tuoi,sv[i].diem);
	}
	printf("\n");
	return 0;
}
