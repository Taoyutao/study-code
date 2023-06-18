//两个数值比较大小
// 
//#include<stdio.h>
//int Max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a, b, max;
//	scanf_s("%d %d",&a,&b);
//	max = Max(a,b);
//	printf("max = %d\n",max);
//	return 0;
//}


//三个数值比较大小

#include<stdio.h>
int main()
{
	int a, b, c,max;
	scanf_s("%d %d %d",&a,&b,&c);
	if (a > b)
		max = a;
	else
		max = b;
	if (c > max)
		max = c;

	printf("max = %d\n",max);

	return 0;
}