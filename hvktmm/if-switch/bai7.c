#include <stdio.h>
#include <math.h>

main()
{
	int i,day=0,ngay,thang,nam;
	int s[12] = {0,31,28,30};
	printf("\nNhap vao ngay,thang,nam : ");  scanf("%d %d %d",&ngay,&thang,&nam);
 	if(((nam%4 == 0)&&(nam % 100 != 0))||(nam % 400 == 0))  s[2] = 29;
	for (i=1; i<thang; i++)
 	switch (i) {
 	case 1: 
 	case 3: 
 	case 5: 
 	case 7: 
 	case 8: 
 	case 10: 
 	case 12: day+=s[1];
 	        break;
	case 2: day+=s[2];
	        break;
	case 4: 
	case 6: 
	case 9: 
	case 11: day+=s[4];
	        break;
	}
	day += ngay;
	printf("\nNgay %d/%d/%d la ngay thu %d cua nam %d ",ngay,thang,nam,day,nam);
 	getch();
}
