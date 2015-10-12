#include <stdio.h>
#include <math.h>

int main()
{
	int i,day=0,thu,ngay,thang,nam;
	int s=28;
	char *t[7] = {"chu nhat","thu hai","thu ba","thu tu","thu nam","thu sau","thu bay"};
	printf("\nBai toan chi xet cho nam 2007 !");
	printf("\nNhap vao ngay,thang : ");  scanf("%d %d",&ngay,&thang);
	for (i=1; i<thang; i++)
 	switch (i) {
 	case 1: 
 	case 3: 
 	case 5: 
 	case 7: 
 	case 8: 
 	case 10: 
 	case 12: day+=31;
 	        break;
	case 2: day+=s;
	        break;
	case 4: 
	case 6: 
	case 9: 
	case 11: day+=30;
	        break;
	}
	day += ngay;
	thu = day % 7;
	printf("\nNgay %d/%d/2007 la ngay %s",ngay,thang,t[thu]);
 	getch();
 	return (0);
}
