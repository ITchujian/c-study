#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//typedef unsigned int uint_32;
//
//int main() {
//	unsigned int num = 1;
//	uint_32 num2 = 1;
//	printf("%d\n", num2);
//	return 0;
//}

// static 静态
// 1.修饰局部变量 局部变量出了作用域，不销毁，改变了存储位置（栈区->静态区），也就是改变了生命周期
// 2.修饰全局变量 全局变量具有外部链接属性，一旦被修饰，全局变量的外部链接属性变成内部链接属性，其他源文件不能再使用 
// 3.修饰函数 函数具备外部链接属性，一旦被修饰，函数的外部链接属性变成内部链接属性，其他源文件无法访问

//void test() {
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main() {
//	int i = 0;
//	while (i < 10) {
//		test();
//		i++;
//	}
//	return 0;
//}

// 声明外部符号
//extern int g_val;
//
//int main() {
//	printf("%d\n", g_val);
//	return 0;
//}

//extern int add(int x, int y);
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int z = add(a, b);
//	printf("%d\n", z);
//	return 0;
//}

//register -- 寄存器 集成到CPU上
/*
寄存器		快，造价贵，空间小
高速缓存
内存
硬盘			满，造价便宜，空间大
*/
//int main() {
//	//寄存器变量
//	register int num = 3;  // 建议3存放在寄存中
//	return 0;
//}


//define定义标识符常量
//#define NUM 100
////define定义宏
////宏是有参数
//#define ADD(x, y) ((x) + (y))
//// define 宏名(宏的参数,参数无类型) 宏体
//
//int main() {
//	//printf("%d\n", NUM);
//	int a = 10, b = 20;
//	int c = ADD(a, b); // 相当于 ((a) + (b))  本质上替换
//	printf("%d\n", c);
//
//	return 0;
//}