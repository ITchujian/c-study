#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int getMax(int x, int y) {
//	if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//}


//int main() {
//	/*int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	printf("最大值是%d\n", getMax(a, b));*/
//	char arr[4] = { 'a', 'b', '\0', 'd' };
//	printf("%d\n", strlen(arr));
//	return 0;
//}


//int f(int x) {
//    if (x < 0) return 1;
//    if (x > 0) return -1;
//    return 0;
//}
//int main() {
//    int num = 0;
//    scanf("%d", &num);
//    printf("%d\n", f(num));
//    return 0;
//}

//int main() {
//	// 除号的两端都是整数，执行的是整数除法
//	//int a = 7 / 2;
//	float a = 7 / 2.0;
//	int b = 7 % 2;  // 求模 取余 取模操作符的两个操作符只能是整数
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main() {
//	int a = 10;
//	a = 20;
//	//a = a + 3;
//	a += 3;
//
//	a -= 3;
//	return 0;
//}

// 单目操作符
// C语言中 0表示假的 非0表示真的
//int main() { 
	//int flag = 0;
	//if (!flag) {
	//	printf("呵呵\n");
	//}
	/*int a = -10;
	int b = -a;
	printf("%d\n", b);*/
	//printf("sizeof是操作符, %lld\n", sizeof(10));
	//printf("sizeof是操作符, %lld\n", sizeof 10);
	//printf("sizeof是操作符, %lld\n", sizeof int); // error
	//int arr[10] = {0};
	//printf("%lld\n", sizeof(arr)); // 4 * 10 单位是字节
	//printf("%lld\n", sizeof(arr[0])); // 4 * 1 单位是字节
	//printf("%lld\n", sizeof(arr) / sizeof(arr[0])); // 40 / 4 数组元素的个数
	
	//int a = 10;
	//int b = a++; // 后置++，先使用后++  --同理
	// int b = a; a += 1;
	//int b = ++a;  // 前置++，先++，后使用 --同理
	// a += 1; b = a;
	//printf("%d %d \n", a, b);

//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0; 
//}

//int main() {
//	int a = 10;
//	if (a == 3) {
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main() {
//	//&&逻辑与 - 并且 一假则假 左假不往后
//	//||逻辑或 - 或者 一真则真 左真不往后
//	/*int a = 0;
//	int b = 20;
//	if (a && b) {
//		printf("hehe\n");
//	}*/
//	int a = 0;
//	int b = 20;
//	if (a || b) {
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main() {
//	// 条件操作符 三目操作符
//	int a = 10;
//	int b = 20;
//	int res = a > b ? a : b;
//	printf("%d\n", res);
//	return 0;
//}

//int main() {
//	// 逗号表达式 就是逗号隔开的一串表达式 从左向右依次计算，整个表达式是最后一个表达式的结果
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3); // 8 - 3
//	printf("%d\n", c);
//	printf("%d\n", a);
//	printf("%d\n", d);
//	return 0;
//}

//int main() {
//	int arr[10] = {1, 2, 3, 4 ,5, 6, 7, 8, 9, 10};
//	//arr[3] = 20; // []下标引用操作符 arr 和 3就是[]的操作数
//	int n = 3;
//	arr[n] = 20;
//	printf("%d\n", arr[3]);
//	return 0;
//}

//int add(int x, int y) {
//	return x + y;
//}
//
//int main() {
//	int sum = add(2, 4); // ()就是函数调用的操作符，add、2、4都是操作数
//	return 0;
//}

// C语言关键字 C语言本身内置的，关键字不是自己创建出来的，也不能自己创建
/*
auto break case char const continue default do double else enum
extern float for goto if int long register return short signed
sizeof static struct switch typedef union unsigned void volatile while
*/
/*
char short int long float double void enum struct union
if else switch case default goto
for while do break continue
auto const extern unsigned signed static register volatile
return
sizeof typedef
*/
// 变量名命名
//1.有意义
//int age; float salary;
//
//2.名字必须是字母、数字、下划线，不能有特殊字符，不能以数字开头
//int 2b; // error
//3.变量名不能是关键字