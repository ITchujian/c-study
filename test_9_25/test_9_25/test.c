#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1.���泣��
// 2.const���εĳ�����
// 3.define�����ʶ������
// 4.ö�ٳ���
//int main() {
//	//30;
//	//3.14;
//	//'w';
//	//const int a = 10;  // �������Ǳ���������const���κ󣬲��ܱ��޸�
//	//a = 20;
//	//printf("%d\n", a);
//	// const���εĳ����� ֤�����ʻ��Ǳ���
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
//	// ��ԭɫ
//	// red green blue
//	int num = 10;
//	enum Color c = RED;
//	//RED = 10; // error
//	return 0;
//}


//int main() {
//	// char �ַ�����
//	// char ch = 'a';
//	// �ַ��� C������û���ַ������ͣ�˫������������һ���ַ�
//	// �ַ����Ľ�����־�� \0
//	//"abcdef";
//	char arr1[] = "abcdef";  // 7
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	//strlen(); // ���ַ������ȵĺ���
//	int len = strlen(arr2);
//	printf("%d\n", len);
//	return 0;
//}

// ת���ַ�
// ����ĸ�� ??) --> ]	??( -->[
//int main() {
//	printf("abc\nd\n");
//	printf("abc\0d");
//	printf("%s\n", "(are you ok \?\?)");
//	printf("%c\n", '\'');
//	printf("%s\n", "a\"");
//	printf("abc\\nd\n");
//	printf("\a\n");
//	printf("ab\tc\ved\tf\n");
//	printf("%c\n", '\130'); // �൱��10���Ƶ�88 X
//	printf("%c\n", '\x60'); // �൱��10���Ƶ�96 `
//	printf("%d\n", strlen("qwer t"));
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}


// ע��
/*
int main() {
	// int a = 10;
	// ����ָ�����p����ֵΪNULL
	int* p = NULL;

	return 0;
}
*/

// ѡ����� if switch
//int main() {
//	int input = 0;
//	printf("���������\n");
//	printf("Ҫ�ú�ѧϰ��?");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("��offer\n");
//	}
//	else {
//		printf("������\n");
//	}
//	return 0;
//}

// ѭ����� while for do-while
//int main() {
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000) {
//		printf("д���룺%d\n", line);
//		line++;
//	}
//	if (line >= 20000) {
//		printf("��offer\n");
//	}
//	else {
//		printf("��������\n");
//	}
//	return 0;
//}

// ���������������ĺ�
// ������ԭ���� ���� ���� �ӹ� �õ���Ʒ
//�������� ������(��������){
	//������..
	//����ֵ
//}
//int add(int x, int y) {
//	return x + y;
//}
//
//int main() {
//	int n1 = 0;
//	int n2 = 0;
//	//����
//	scanf("%d %d", &n1, &n2);
//	//���
//	//int sum = n1 + n2;
//	int sum = add(n1, n2);
//	//��ӡ
//	printf("��Ϊ%d\n", sum);
//	return 0;
//}

//���� һ��������ͬ��Ԫ��
//int main() {
//	/*
//	int a = 0;
//	int b = 1;
//	...
//	*/
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };  // ����
//	char ch[5] = { '0' };
//	//�����±� ��0��ʼ
//	printf("%d\n", arr[8]);
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\t", arr[i]);
//		i++; // ���Ǹ��������еı���ֵ �ᵼ����ѭ��
//	}
//	return 0;
//}