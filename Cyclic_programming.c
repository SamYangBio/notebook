/*数据统计（重定向）,定义符号LOCAL*/
#define LOCAL
#include <stdio.h>
#define INF 100000000
int main()
{
	#ifdef LOCAL
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
	#endif
	int x, n = 0 ,min = INF, max = -INF, s = 0;
	while(scanf("%d", &x)==1)
	{
		s += x;
		if(x < min) min = x;
		if(x > max) max = x;	
		printf("x = %d, min = %d, max = %d\n", x, min, max);
		n++;
	}
	printf("%d %d %.3f\n", min, max, (double)s/n);
	return 0;
}

/*fopen的写法繁琐，但是灵活性比较大*/
#include <stdio.h>
#define INF 100000000
int main()
{
	FILE *fin, *fout;
	fin = fopen("data.in", "rb");
	fout = fopen("data.out", "wb");
	int x, n = 0 ,min = INF, max = -INF, s = 0;
	while(scanf("%d", &x)==1)
	{
		s += x;
		if(x < min) min = x;
		if(x > max) max = x;
		n++;
	}
	fprintf(fout, "%d %d %.3f\n", min, max, (double)s/n);
	fclose(fin);
	fclose(fout);
	return 0;
}
