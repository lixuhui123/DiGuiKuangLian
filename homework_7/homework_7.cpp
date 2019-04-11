////#define _CRT_SECURE_NO_WARNINGS
//计算一个数的阶乘
//#include<stdio.h>
//#include<stdlib.h>
//int JieCheng(int f)
//{
//	int n = 0;
//	if (f < 0)
//		printf("您的输入非法");
//	else if (0 == f || 1 == f)
//		n = 1;
//	else
//	{
//		n = JieCheng(f - 1)*f;
//		//printf("%d\n", n);
//	}
//	return n;
//	
//}
//int main()
//{
//	int key = 0;
//	printf("请输入要计算阶乘的数\n");
//	scanf("%d", &key);
//	int zhi=JieCheng(key);
//	printf("%d的阶乘是%d\n", key,zhi);
//	system("pause");
//	return 0;
//}