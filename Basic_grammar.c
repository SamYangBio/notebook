/*---------------------------------Scanf function-----------------------------------*/
/*Larry Wall, the founder of the perl language, is also a master of the C language, 
so the C language has many similarities to the perl language.*/
#include <stdio.h>

int main()
{
	int a,b,t;
	scanf("%d%d", &a,&b); /*scanf function like perl-ARGV*/
	t = a ;
	a = b ;
	b = t;
	printf("%d %d\n", a, b);
	return 0;
}
