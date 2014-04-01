#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#define MAX 100

int n,i,tong;
char c[10];
FILE *f;
typedef struct	{
		char tenhang[20];
		int dongia,soluong,thanhtien;
		}SOLIEU;
char s[7][30]={"SO LIEU BAN HANG","STT","Ten Hang","Don Gia","So Luong","Thanh Tien","Tong tien"};

int main()
{
	SOLIEU sl[MAX],slb[MAX];
	f=fopen("SO_LIEU.C","wb");
	printf("nhap vao so luong mat hang: ");
	gets(c);
        n=atoi(c);
	for (i=1;i<=n;i++)
	{
		printf("\ncung cap thong tin mat hang thu %d:",i);
		printf("\nten hang: ");
		gets(sl[i].tenhang);
		printf("\ndon gia = ");
		gets(c);
                sl[i].dongia=atoi(c);
		printf("\nso luong = ");
		gets(c);
                sl[i].soluong=atoi(c);
		sl[i].thanhtien=sl[i].dongia*sl[i].soluong;
		fwrite(sl+i,sizeof(SOLIEU),1,f);
	}
	fclose(f);
	printf("%30s\n%-5s%-20s%-10s%-10s%-10s",s[0],s[1],s[2],s[3],s[4],s[5]);
	for (i=1;i<=n;i++)
	{
		printf("\n%-5d%-20s%-10d%-10d%-10d",i,sl[i].tenhang,sl[i].dongia,sl[i].soluong,sl[i].thanhtien);
		tong+=sl[i].thanhtien;
	}
	printf("\n%*s%-15s%d",30,"",s[6],tong);
	f=fopen("SO_LIEU.C","rb");
	fread(slb+1,sizeof(SOLIEU),n,f);
	printf("\nso lieu doc ra tu tep:\n");
	printf("%30s\n%-5s%-20s%-10s%-10s%-10s",s[0],s[1],s[2],s[3],s[4],s[5]);
        for (i=1;i<=n;i++)
                printf("\n%-5d%-20s%-10d%-10d%-10d",i,slb[i].tenhang,slb[i].dongia,slb[i].soluong,slb[i].thanhtien);
	fclose(f);
	printf("\n");
	return 0;
}
