#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#include"ctype.h"


typedef struct sinhvien { 	char hoten[20];
				int tuoi,diem;
				struct sinhvien *next;
			}sv;


//nhap danh sach sinh vien
sv *INPUT();
void OUTPUT(sv *pdau);

sv *INPUT()
   {
	sv *pdau, *p;
	char ch[20];
	pdau=NULL;
	p=NULL;
	while(1)
	   {
		printf("NHap Ho tEn (bam Enter de ket thuc): ");
		gets(ch);
		if (ch[0]=='\0')
			return pdau;
		if (pdau==NULL)
		   {
			p=(sv *)malloc(sizeof(sv));
			pdau=p;
		   }
		else
		   {
			(*p).next=(sv *)malloc(sizeof(sv));
			p=(*p).next;
		   }
		strcpy((*p).hoten,ch);
		printf("Tuoi = ");
		gets(ch);
		(*p).tuoi=atoi(ch);
		printf("DiEM trUnG BiNh = ");
		gets(ch);
		(*p).diem=atoi(ch);
		(*p).next=NULL;
	   }
	return pdau;
   }

//xuat danh sach sinh vien
void OUTPUT(sv *pdau)
   {
	sv *p;
	int i=0;
	p=pdau;
	while(p!=NULL)
	   {
		printf("\n%-5d%-20s%-5d%-5d",++i,(*p).hoten,(*p).tuoi,(*p).diem);
		p=(*p).next;
		printf("\n");
	   }
   }


//them 1 sinh vien
sv *THEM(sv *pdau)
{
	sv *pt,*p;
	p=pdau;
	char hoten[30],ten[30];
	printf("\nchen vao dau danh sach ? Y/N ");
	gets(hoten);
	hoten[0]=toupper(hoten[0]);
	if (hoten[0]=='Y')
	{
		printf("nhap ho ten sinh vien: ");
		gets(hoten);
		if (hoten[0]!='\0')
		{
			pt=(sv*)malloc(sizeof(sv));
			strcpy((*pt).hoten,hoten);
			printf("Tuoi = ");
			gets(hoten);
			(*pt).tuoi=atoi(hoten);
			printf("Diem Trung Binh = ");
			(*pt).diem=atoi(gets(hoten));
			(*pt).next=p;
			pdau=pt;
			printf("chem thanh cong!\n");
			return pdau;
		}
	}
	else
	{
		printf("chen vao sau nguoi co ten la:");
		gets(ten);
		while(p!=NULL)
		{
			if (strcmp((*p).hoten,ten)==0)
			{
				printf("nhap ho ten:");
				gets(hoten);
				if (hoten[0]!='\0')
				{
					pt=(sv*)malloc(sizeof(sv));
					strcpy((*pt).hoten,hoten);
					printf("Tuoi = ");
					(*pt).tuoi=atoi(gets(hoten));
					printf("Diem Trung Binh = ");
					(*pt).diem=atoi(gets(hoten));
					(*pt).next=(*p).next;
					(*p).next=pt;
					printf("chen thanh cong!\n");
					return pdau;
				}
			}
			p=(*p).next;
			if (p==NULL)
				printf("khong tin thay %s trong danh sach!\n",ten);
		}

	}
}


//xoa 1 sinh vien ra khoi danh list
sv *XOA(sv *pdau)
{
	char ten[30];
	sv *p,*pt;
	p=pdau;
	printf("nhap ten nguoi muon xoa:");
	gets(ten);
	while(p!=NULL)
	{
		if(strcmp((*p).hoten,ten)==0)
		{
			if(strcmp((*pdau).hoten,ten)==0)
			{
				pdau=(*p).next;
				free(p);
			}
			else
			{
				(*pt).next=(*p).next;
				free(p);
			}
			printf("da xoa %s khoi danh sach!\n",ten);
			return pdau;
		}
		pt=p;
		p=(*p).next;
		if (p==NULL)
			printf("nguoi can xoa khong co ten trong danh sach!\n");
	}
}


//chuong trinh chinh
int main()
   {
	sv *p, *pdau;
	pdau=INPUT();
	char ch[20];
	while(ch[0]!=27)
	   {
		printf("\nchon thao tac (ESC de thoat)");
		printf("\n1.nhap");
		printf("\n2.xuat");
		printf("\n3.them");
		printf("\n4.xoa\n");
		gets(ch);
		switch(ch[0])
		   {
			case '1':{pdau=INPUT(); break;}
			case '2':{OUTPUT(pdau); break;}
			case '3':{pdau=THEM(pdau); break;}
			case '4':{pdau=XOA(pdau);break;}
		   }
	   }
	return 0;
   }


