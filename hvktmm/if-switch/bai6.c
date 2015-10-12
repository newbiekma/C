#include <stdio.h>
#include <math.h>

main()
{
	int nam,thang;
	int s[12] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	printf("\nNhap vao nam,thang : ");  scanf("%d %d",&nam,&thang);
        if(((nam%4 == 0)&&(nam % 100 != 0))||(nam % 400 == 0))  s[2] = 29;
        printf("\nThang %d nam %d co %d ngay ",thang,nam,s[thang]);
 	getch();
}
