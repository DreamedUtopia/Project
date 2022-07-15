#include <stdio.h>

/*约分
void ret(int a, int b, int* c)
{
	int swap = 0;
	if (a < b)
	{
		swap = a;
		a = b;
		b = swap;
	}
	int d = *c;
	if (a%b==0)
	{
		d = b;
		*c = d;
	}
	else
	{
		while (d = a % b)
		{
			a = b;
			b = d;
		}
	*c = b;
	}
}

int main()
{
	int a = 0, b = 0, c = 0,*d=0;
	d = &c;
	printf("请输入一个分数，格式为a/b\n");
	scanf_s("%d/%d", &a, &b);
	ret(a, b, d);
	printf("%d/%d\n", a / c, b / c);
	return 0;
}
*/