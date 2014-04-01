#include"stdio.h"
#include"stdlib.h"
#define MAX 100

int n,i,j,tong=0;
char c[10],s[7][20]={"SO LIEU BAN HANG","STT","Ten Hang","Don Gia","So Luong","Thanh Tien","Tong Tien"};
typedef struct{char tenhang[20];int dongia,soluong,thanhtien;}SOLIEU;
SOLIEU tam;

void INPUT(SOLIEU a[MAX]);
void SAPXEP(SOLIEU a[MAX]);
void OUPUT(SOLIEU a[MAX]);

void INPUT(SOLIEU a[MAX])
{
for (i=0;i<n;i++)
{
printf("\nthong tin mon hang thi %d:\nTen hang:",i+1);
gets(a[i].tenhang);
printf("Don gia:");
gets(c);
a[i].dongia=atoi(c);
printf("so luong:");
gets(c);
a[i].soluong=atoi(c);
a[i].thanhtien=a[i].soluong*a[i].dongia;
}
}

void SAPXEP(SOLIEU a[MAX])
{
for (i=0;i<n-1;i++)
for (j=i+1;j<n;j++)
if (a[i].tenhang[0]>a[j].tenhang[0])
{
tam=a[i];
a[i]=a[j];
a[j]=tam;
}
}

void OUTPUT(SOLIEU a[MAX])
{
printf("\n%30s\n%-5s%-10s%-10s%-10s%-10s",s[0],s[1],s[2],s[3],s[4],s[5]);
for (i=0;i<n;i++)
{
printf("\n%-5d%-10s%-10d%-10d%-10d",i+1,a[i].tenhang,a[i].dongia,a[i].soluong,a[i].thanhtien);
tong+=a[i].thanhtien;
}
printf("\n%25s:\t%d\n",s[6],tong);
}

int main()
{
SOLIEU sl[MAX];
printf("nhap so luong hang hoa = ");
gets(c);
n=atoi(c);
INPUT(sl);
SAPXEP(sl);
OUTPUT(sl);
return 0;
}
