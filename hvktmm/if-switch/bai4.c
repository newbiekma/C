#include <stdio.h>

main()
{
	float a,b,c;
	printf("\nNhap vao a,b,c : ");  scanf("%f %f %f",&a,&b,&c);
	if ((a + b > c)&&(a + c > b)&&(b + c > a)) 
	{
	printf("\nTam giac ");
	if ((a == b)&&(b == c))  printf("deu");
	else 
		if (((a*a == b*b + c*c)&&(b == c))||((b*b == a*a + c*c)&&(a == c))||((c*c == b*b + a*a)&&(b == a)))
		printf("vuong can");
		else
			if ((a*a == b*b + c*c)||(b*b == a*a + c*c)||(c*c == b*b + a*a))
			printf("vuong");
			else
				if ((a == b)||(b == c)||(a == c))  printf("can");
				else printf("thuong")
	}
	else printf("\nKhong phai tam giac");
	getch();	 
}
