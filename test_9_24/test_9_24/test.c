
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int �� ���͵���˼��mainǰ���int��ʾmain�������÷���һ������ֵ
//int main() {  //���������������ڣ����ҽ���һ��
//	//����������񣬱����ӡ���һЩhello world
//	//����-print function-��ӡ����--����һ���⺯��--C���Ա����ṩ������ʹ�õĺ���
//	//���Ҫʹ��print��������ôӦ�ð���stdio.h��׼�������ͷ�ļ�
//	printf("hehe\n");
//	printf("hello world\n");
//	printf("hello ����\n");
//	return 0;  //���� 0
//}

//int main() {
//	//char
//	char ch = 'A';
//	printf("%c\n", ch); //��ӡ�ַ�����ʽ������
//	
//	//short int ������
//	short int t = 10;
//	printf("%d\n", t);
//	//int ����
//	int age = 20;
//	printf("%d\n", age); //��ӡ����ʮ��������
//	//long ������
//	long num = 100;
//	printf("%ld\n", num);
//
//	//float �����ȸ�����
//	float f = 3.14;
//	printf("%f\n", f);
//	//double ˫���ȸ�����
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}
//%d��ӡ���� %c��ӡ�ַ� %f��ӡ�������� %p�Ե�ַ��ʽ��ӡ %x��ӡʮ������ %o��ӡ�˽���

//int main() {
//	printf("%lld\n", sizeof(char)); //1
//	printf("%lld\n", sizeof(short int)); //2
//	printf("%lld\n", sizeof(int)); //4
//	printf("%lld\n", sizeof(long int)); //4����8
//	printf("%lld\n", sizeof(long long int)); //8
//	printf("%lld\n", sizeof(float)); //4
//	printf("%lld\n", sizeof(double)); //8
//	short age = 20; //0 ~ 2^16 - 1 ���ڴ����������ֽ��������20
//	return 0;
//}

//int num2 = 20; // ȫ�ֱ��� �����ڴ����{}֮���
//
//int main() {
//	int num1 = 10; // �ֲ����� �����ڴ����{}֮�ڵ�
//
//	return 0;
//}

//int a = 100;
//
//int main() {
//	int a = 10; // �ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ��������� ����bug
//	// ��ȫ�ֱ����;ֲ�������������ͬʱ���ֲ���������
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
//	//�����������ĺ�
//	int num1, num2, sum;
//	//��������--ʹ�����뺯�� scanf
//	scanf("%d%d", &num1, &num2); //ȡ��ַ����&
//	sum = num1 + num2;
//	// C���Թ涨�������Ķ���Ҫ�ڵ�ǰ�������ǰ��
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

//int global = 2023;  // ȫ�ֱ���������������������
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
//	printf("%d\n", a);  // error a�����������ѽ���
//	return 0;
//}
//ȫ�ֱ������������ھ��������������������