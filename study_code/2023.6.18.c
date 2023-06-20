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

//#include<stdio.h>
//int main()
//{
//	int a, b, c,max;
//	scanf_s("%d %d %d",&a,&b,&c);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	if (c > max)
//		max = c;
//
//	printf("max = %d\n",max);
//
//	return 0;
//}


//写出1-100之间的奇数
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//			printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

//读取输出数字
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//用for循环输出1-10
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}

//计算n的阶乘
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf_s("%d",&n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("n! = %d\n",ret);
	return 0;
}