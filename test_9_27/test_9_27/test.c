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


//指针
//int main() {
//	int a = 10; // 向内存申请4个字节存储10
//	//&a; // 取地址操作符
//	printf("%p\n", &a);
//	int* p = &a; // p就是指针变量 （*号是指针变量的标志 int说明p指向的对象是int类型的）
//	//地址也就是指针
//	//存放地址的变量就是指针变量
//	printf("%p\n", p);
//	char ch = 'w';
//	char* pc = &ch;
//	// *pc; // 解引用操作符 意思是通过pc中存放的地址，找到p指向的对象，*pc就是pc指向的对象ch 
//	printf("%c\n", *pc);
//	return 0;
//}

//int main() {
//	// int* p;
//	// char* p2;
//	//不管是什么类型的指针,都是在创建指针变量
//	//指针变量用来存放地址的
//	//指针变量的大小取决于一个地址存放的时候需要多大空间
//	//32位机器 4字节
//	//64位机器 8字节
//	printf("%lld\n", sizeof(char*));
//	printf("%zu\n", sizeof(int*));
//	return 0;
//}

//int main() {
//	char* pc;
//	char* p;
//	int* p1, * p2, p3;
//	return 0;
//}

// char short int long longlong float double
// 人:名字 年龄 性别 地址 电话
// 书:书名 作者 出版社 定价 书号
// 复杂对象 -- 自定义类型 -- 结构体
// 结构体是把单一类型组合在一起的做法
struct Stu { // 学生
	// 成员
	char name[20];
	short age;
	char sex[20];
	char tele[12];
};

void print(struct Stu* stu) {
	//printf("%s %d %s %s\n", (stu).name, (stu).age, (stu).sex, (stu).tele);
	//printf("%s %d %s %s\n", (*stu).name, (*stu).age, (*stu).sex, (*stu).tele);
	printf("%s %d %s %s\n", stu->name, stu->age, stu->sex, stu->tele);
	// -> 
	// 结构体指针变量->成员名
}

int main() {
	struct Stu zs = { "张三", 20, "男", "15741323333" };
	// 结构体对象.成员名
	//printf("%s %d %s %s\n", zs.name, zs.age, zs.sex, zs.tele);
	//print(zs);
	print(&zs);
	return 0;
}