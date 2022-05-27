#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0;//设有多少盒酸奶
	int w = 0;//设多少分钟喝一盒酸奶
	int e = 0;//设喝了多少分钟；
	int r = 0;
	int t = 0;
	int y = 0;
	scanf("%d%d%d", &q, &w, &e);
	t = e / w;//喝了多少盒牛奶
	y = e % w;
	//减去还有时间打开确没喝完的牛奶
	if (y != 0)
	{
		t += 1;
	}
	r = q - t;//还剩几盒酸奶
	printf("%d\n", r);
	return 0;
}