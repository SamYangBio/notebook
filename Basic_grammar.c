/*---------------------------------Scanf function-----------------------------------*/
/*Larry Wall, the founder of the perl language, is also a master of the C language, 
so the C language has many similarities to the perl language.*/
#include <stdio.h>

int main()
{
	int a,b,t;
	scanf("%d%d", &a,&b); //scanf function like perl-ARGV
	t = a ;
	a = b ;
	b = t;
	printf("%d %d\n", a, b);
	return 0;
}

/*---------------------------------three-number sort-----------------------------*/

#include <stdio.h>
int main()
{
	int a, b , c, t;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b) { t = a; a = b; b = t;} //执行完毕之后a<=b
	if (a > c) { t = a; a = c; c = t;} //执行完毕之后a<=c,且a<=b依然成立
	if (b > c) { t = b; b = c; c = t;}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
