//#include<stdio.h>
//#include<stdlib.h>
//递归的方式计算斐波那契数
//int FeiBo(int f)
//{
//	int n = 0;
//	if (0 == f)
//		printf("0的斐波那契数是0\n");
//	else if (1 == f || 2 == f)
//		n = 1;
//	else n = FeiBo(f - 2) + FeiBo(f - 1);
//		return n;
//
//}
//int main()
//{
//	int num = 0;
//	int key = 0;
//	printf("请输入要求的斐波那契数\n");
//	scanf("%d", &key);
//	num = FeiBo(key);
//	printf("%d的斐波那契数是%d\n", key,num);
//	system("pause");
//	return 0;
//}