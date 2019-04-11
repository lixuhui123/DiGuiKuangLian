//当条件不成立时，跳出if，输出\0前面的字母，再跳出这个递归，输出倒数第二个，直到递归结束。
//用递归逆置字符串
//#include <stdio.h>
//#include "stdlib.h"
//void reverse_string(char* string)
//{
//	if ('\0' != *(++string))
//		reverse_string(string);
//	printf("%c", *(string - 1));
//}
//
//int main()
//{
//	char a[] = "a";
//	printf("请输入要逆置的字符串");
//	scanf("%s", &a);
//	reverse_string(&a[0]);
//	printf("\n");
//	system("pause");
//	return 0;
//}