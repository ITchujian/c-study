#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////���ֲ���
//int binary_search(int* array, int length, int find_value) {
//	int left = 0, right = length - 1, mid = 0;
//	while (left <= right)
//	{
//		//mid = (left + right) / 2;
//		mid = (right - left) / 2 + left; // ��ֹleft��right�������ʱ���
//		if (find_value > array[mid]) {
//			left = mid + 1;
//		}
//		else if (find_value < array[mid]) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int length = sizeof arr / sizeof arr[0];
//	int find_value = 0;
//	while (find_value <= 30) {
//		int index = binary_search(arr, length, find_value);
//		if (index != -1) {
//			printf("The number %d is subscript %d in the array.\n", find_value, index);
//		}
//		else {
//			printf("The number %d is not found in the array.\n", find_value);
//		}
//		find_value ++ ;
//	}
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//welcome to bit...
//w###############.
//we#############..
//......
//welcome to bit...
//#include <windows.h>
//#include <stdlib.h>
//
//int main() {
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0, right = strlen(arr2) - 1;
//	printf("%s", arr2);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(600);
//		printf("\r%s", arr2);  // ��ʽһ
//		//system("cls");  // ��ʽ��
//		//printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}


// ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Σ�ֻ���������������룬���������ȷ��
// ��ʾ��¼�ɹ���������ξ�����������˳����򣩡�
//#include <string.h>
//int main() {
//	int i = 0;
//	char password[20] = { 0 };
//	do {
//		i++;
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "admin") == 0) {  // �Ƚ������ַ����Ƿ���ȣ���ʹ��==������ʹ��strcmp
//			printf("��¼�ɹ���\n");
//			break;
//		}
//		else {
//			if (i >= 3) {
//				printf("%d�������������󣬶���һ����\n", i);
//				break;
//			}
//			else {
//				printf("��%d�ε�¼ʧ�ܣ��ٴγ���\n", i);
//			}
//		}
//	} while (i < 3);
//
//	return 0;
//}


//��������Ϸʵ��
//#include <stdlib.h>
//#include <time.h>
//
//void menu() {
//	printf("**************�� ��**************\n");
//	printf("************* 1.play ************\n");
//	printf("************* 0.exit ************\n");
//	printf("*********************************\n");
//}
//
//void game() {
//	int value = 0, result = rand() % 100 + 1, i = 1;
//	while (value != result) {
//		printf("��%d��, ���������֣�", i);
//		scanf("%d", &value);
//		//printf("value = %d\n", value);
//		i++;
//		if (result > value) {
//			printf("��²�ù�С\n");
//		}
//		else if (result < value) {
//			printf("��²�ù���\n");
//		}
//	}
//	if (value == result)
//		printf("�ܹ��²���%d�Σ���²���ȷ��������%d\n", i - 1, value);
//}
//
//int main() {
//	srand((unsigned int)time(NULL));
//	int input = -1;
//	do {
//		menu();
//		printf(">>>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:{
//			printf("�˳���Ϸ����\n");
//			break;
//		}
//		case 1: {
//			printf("��Ϸ��ʼ����\n");
//			game();
//			break;
//		}
//		default:{
//			printf("����������Ŷ��\n");
//			break;
//		}
//		}
//	} while (input);
//	return 0;
//}


// goto���
//int main() {
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}

//void test() {
//again:
//	printf("hehe\n");
//}
//
//int main() {
//	printf("haha\n");
//	goto again;
//	return 0;
//}

// �ػ�����
//��������������1�����ڹػ�
//������룺��������ȡ���ػ�
//shutdown -s -t 60
//shutdown -a
//#include <stdlib.h>
//#include <string.h>
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣬��ĵ��Խ���60���ڹػ�\n������롰������������ȡ���ػ�\n");
//	printf(">>>");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0) {
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40] = { 0 };
//	char str3[40] = { 0 };
//	strcpy(str2, str1);
//	strcpy(str3, "Hello World");
//	printf("%s\n%s\n%s\n", str1, str2, str3);
//	memset(str1, '*', 6);
//	printf("%s\n%s\n%s\n", str1, str2, str3);
//	return 0;
//}

//int get_max(int num1, int num2) {
//	return num1 > num2 ? num1 : num2;
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int res = get_max(a, b);
//	printf("The largest number is %d.\n", res);
//	return 0;
//}

//дһ�����������������ͱ���������
//void swap(int x, int y) {
//	int temp = x;
//	x = y;
//	y = temp;
//}

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int a = 10, b = 20;
	printf("����ǰ��\na = %d; b = %d\n", a, b);
	//��ʵ�δ��ݸ��β�ʱ���β���ʵ�ε�һ����ʱ����
	//���βε��޸Ĳ���Ӱ��ʵ��
	//swap(a, b);
	swap(&a, &b);
	printf("������\na = %d; b = %d\n", a, b);
	return 0;
}