#include <stdio.h>
#include <math.h>

main()
{
	int n,a,b,c,d;
	char *s[10] = {"linh","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
	printf("\nNhap vao so co 3 chu so : ");  scanf("%d",&n);
	a = n / 100;
	b = (n / 10) % 10;
	c = n % 10;
	if ((b == 0)&&(c == 0))  
        printf("\n%s tram",s[a]);
	else if ((b != 0)&&(c == 0))  
		 	if (b == 1)  
                printf("\n%s tram muoi",s[a]);
		 	else 
                printf("\n%s tram %s muoi",s[a],s[b]);
		 else if ((b == 0)&&(c != 0))  
             printf("\n%s tram linh %s.",s[a],s[c]);
		 else 
             printf("\n%s tram %s muoi %s",s[a],s[b],s[c]);
 	getch();
}