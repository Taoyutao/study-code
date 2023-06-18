#include<stdio.h>
int Max(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a, b, max;
	scanf_s("%d %d",&a,&b);
	max = Max(a,b);
	printf("max = %d\n",max);
	return 0;
}
