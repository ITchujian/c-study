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

// static ��̬
// 1.���ξֲ����� �ֲ��������������򣬲����٣��ı��˴洢λ�ã�ջ��->��̬������Ҳ���Ǹı�����������
// 2.����ȫ�ֱ��� ȫ�ֱ��������ⲿ�������ԣ�һ�������Σ�ȫ�ֱ������ⲿ�������Ա���ڲ��������ԣ�����Դ�ļ�������ʹ�� 
// 3.���κ��� �����߱��ⲿ�������ԣ�һ�������Σ��������ⲿ�������Ա���ڲ��������ԣ�����Դ�ļ��޷�����

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

// �����ⲿ����
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

//register -- �Ĵ��� ���ɵ�CPU��
/*
�Ĵ���		�죬��۹󣬿ռ�С
���ٻ���
�ڴ�
Ӳ��			������۱��ˣ��ռ��
*/
//int main() {
//	//�Ĵ�������
//	register int num = 3;  // ����3����ڼĴ���
//	return 0;
//}


//define�����ʶ������
//#define NUM 100
////define�����
////�����в���
//#define ADD(x, y) ((x) + (y))
//// define ����(��Ĳ���,����������) ����
//
//int main() {
//	//printf("%d\n", NUM);
//	int a = 10, b = 20;
//	int c = ADD(a, b); // �൱�� ((a) + (b))  �������滻
//	printf("%d\n", c);
//
//	return 0;
//}


//ָ��
//int main() {
//	int a = 10; // ���ڴ�����4���ֽڴ洢10
//	//&a; // ȡ��ַ������
//	printf("%p\n", &a);
//	int* p = &a; // p����ָ����� ��*����ָ������ı�־ int˵��pָ��Ķ�����int���͵ģ�
//	//��ַҲ����ָ��
//	//��ŵ�ַ�ı�������ָ�����
//	printf("%p\n", p);
//	char ch = 'w';
//	char* pc = &ch;
//	// *pc; // �����ò����� ��˼��ͨ��pc�д�ŵĵ�ַ���ҵ�pָ��Ķ���*pc����pcָ��Ķ���ch 
//	printf("%c\n", *pc);
//	return 0;
//}

//int main() {
//	// int* p;
//	// char* p2;
//	//������ʲô���͵�ָ��,�����ڴ���ָ�����
//	//ָ�����������ŵ�ַ��
//	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
//	//32λ���� 4�ֽ�
//	//64λ���� 8�ֽ�
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
// ��:���� ���� �Ա� ��ַ �绰
// ��:���� ���� ������ ���� ���
// ���Ӷ��� -- �Զ������� -- �ṹ��
// �ṹ���ǰѵ�һ���������һ�������
struct Stu { // ѧ��
	// ��Ա
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
	// �ṹ��ָ�����->��Ա��
}

int main() {
	struct Stu zs = { "����", 20, "��", "15741323333" };
	// �ṹ�����.��Ա��
	//printf("%s %d %s %s\n", zs.name, zs.age, zs.sex, zs.tele);
	//print(zs);
	print(&zs);
	return 0;
}