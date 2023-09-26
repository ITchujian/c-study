#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1.字面常量
// 2.const修饰的常变量
// 3.define定义标识符常量
// 4.枚举常量
//int main() {
//	//30;
//	//3.14;
//	//'w';
//	//const int a = 10;  // 本质上是变量，经过const修饰后，不能被修改
//	//a = 20;
//	//printf("%d\n", a);
//	// const修饰的常变量 证明本质还是变量
//	//const int n = 10;
//	//int arr[n] = {0};
//
//	return 0;
//}


//#define MAX 100
//#define STR "ABCD"
//
//int main() {
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	int arr[MAX] = {10};
//	printf("STR = %s\n", STR);
//	return 0;
//}


//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main() {
//	// 三原色
//	// red green blue
//	int num = 10;
//	enum Color c = RED;
//	//RED = 10; // error
//	return 0;
//}


//int main() {
//	// char 字符类型
//	// char ch = 'a';
//	// 字符串 C语言中没有字符串类型，双引号引起来的一串字符
//	// 字符串的结束标志是 \0
//	//"abcdef";
//	char arr1[] = "abcdef";  // 7
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	//strlen(); // 求字符串长度的函数
//	int len = strlen(arr2);
//	printf("%d\n", len);
//	return 0;
//}

// 转义字符
// 三字母词 ??) --> ]	??( -->[
//int main() {
//	printf("abc\nd\n");
//	printf("abc\0d");
//	printf("%s\n", "(are you ok \?\?)");
//	printf("%c\n", '\'');
//	printf("%s\n", "a\"");
//	printf("abc\\nd\n");
//	printf("\a\n");
//	printf("ab\tc\ved\tf\n");
//	printf("%c\n", '\130'); // 相当于10进制的88 X
//	printf("%c\n", '\x60'); // 相当于10进制的96 `
//	printf("%d\n", strlen("qwer t"));
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}


// 注释
/*
int main() {
	// int a = 10;
	// 创建指针变量p并赋值为NULL
	int* p = NULL;

	return 0;
}
*/

// 选择语句 if switch
//int main() {
//	int input = 0;
//	printf("加入比特吗？\n");
//	printf("要好好学习吗?");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("好offer\n");
//	}
//	else {
//		printf("卖红薯\n");
//	}
//	return 0;
//}

// 循环语句 while for do-while
//int main() {
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000) {
//		printf("写代码：%d\n", line);
//		line++;
//	}
//	if (line >= 20000) {
//		printf("好offer\n");
//	}
//	else {
//		printf("继续加油\n");
//	}
//	return 0;
//}

// 求两个任意整数的和
// 函数：原材料 经过 工厂 加工 得到产品
//返回类型 函数名(函数参数){
	//函数体..
	//返回值
//}
//int add(int x, int y) {
//	return x + y;
//}
//
//int main() {
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	//int sum = n1 + n2;
//	int sum = add(n1, n2);
//	//打印
//	printf("和为%d\n", sum);
//	return 0;
//}

//数组 一组类型相同的元素
//int main() {
//	/*
//	int a = 0;
//	int b = 1;
//	...
//	*/
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };  // 数组
//	char ch[5] = { '0' };
//	//索引下标 从0开始
//	printf("%d\n", arr[8]);
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\t", arr[i]);
//		i++; // 忘记更新条件中的变量值 会导致死循环
//	}
//	return 0;
//}