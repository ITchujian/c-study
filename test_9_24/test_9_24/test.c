
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int 是 整型的意思，main前面的int表示main函数调用返回一个整型值
//int main() {  //主函数：程序的入口，有且仅有一个
//	//这里完成任务，比如打印输出一些hello world
//	//函数-print function-打印函数--这是一个库函数--C语言本身提供给我们使用的函数
//	//如果要使用print函数，那么应该包含stdio.h标准输入输出头文件
//	printf("hehe\n");
//	printf("hello world\n");
//	printf("hello 世界\n");
//	return 0;  //返回 0
//}

//int main() {
//	//char
//	char ch = 'A';
//	printf("%c\n", ch); //打印字符串格式的数据
//	
//	//short int 短整型
//	short int t = 10;
//	printf("%d\n", t);
//	//int 整型
//	int age = 20;
//	printf("%d\n", age); //打印整数十进制数据
//	//long 长整型
//	long num = 100;
//	printf("%ld\n", num);
//
//	//float 单精度浮点型
//	float f = 3.14;
//	printf("%f\n", f);
//	//double 双精度浮点型
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}
//%d打印整型 %c打印字符 %f打印浮点数字 %p以地址形式打印 %x打印十六进制 %o打印八进制

//int main() {
//	printf("%lld\n", sizeof(char)); //1
//	printf("%lld\n", sizeof(short int)); //2
//	printf("%lld\n", sizeof(int)); //4
//	printf("%lld\n", sizeof(long int)); //4或者8
//	printf("%lld\n", sizeof(long long int)); //8
//	printf("%lld\n", sizeof(float)); //4
//	printf("%lld\n", sizeof(double)); //8
//	short age = 20; //0 ~ 2^16 - 1 向内存申请两个字节用来存放20
//	return 0;
//}

//int num2 = 20; // 全局变量 定义在代码块{}之外的
//
//int main() {
//	int num1 = 10; // 局部变量 定义在代码块{}之内的
//
//	return 0;
//}

//int a = 100;
//
//int main() {
//	int a = 10; // 局部变量和全局变量的名字建议不要相同，容易误会 产生bug
//	// 当全局变量和局部变量的名字相同时，局部变量优先
//	printf("%d\n", a);
//	return 0;
//}

//int main() {
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main() {
//	//计算两个数的和
//	int num1, num2, sum;
//	//输入数据--使用输入函数 scanf
//	scanf("%d%d", &num1, &num2); //取地址符号&
//	sum = num1 + num2;
//	// C语言规定，变量的定义要在当前代码的最前面
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main() {
//	int num = 0;
//	{
//		printf("num = %d\n", num);
//	}
//	return 0;
//}

//int global = 2023;  // 全局变量的作用域是整个工程
//
//void test() {
//	printf("test -- %d\n", global);
//	return 0;
//}
//
//int main() {
//	test();
//	printf("%d\n", global);
//	return 0;
//}


//int main() {
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}


//int main() {
//	{
//		int a = 10;
//		printf("%d\n", a); // ok
//	}
//	printf("%d\n", a);  // error a的生命周期已结束
//	return 0;
//}
//全局变量的生命周期就是整个程序的生命周期