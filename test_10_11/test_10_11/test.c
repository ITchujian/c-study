#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//    float r = 0.0f;
//    float pi = 3.1415926f;
//    float v = 0.0f;
//
//    scanf("%f", &r);
//
//    v = 4.0 / 3 * pi * r * r * r;
//
//    printf("%.3f\n", v);
//    return 0;
//}


//int main() {
//    int weight = 0, height = 0;
//    float res = 0.0f;
//    scanf("%d %d", &weight, &height);
//    res = weight * 1.0f / (height * height) * 100.0f * 100.0f;
//    printf("%.2f", res);
//    return 0;
//}

//int main() { 
//	int i = 1;  // ��ʼ��
//	while (i <= 10) {  // �ж�
//		printf("%d ", i);
//		i++;  // ����
//	}
//	return 0;
//}

//��ӡ1-10
//int main() {
//	int i = 0;
//	//for (i = 1; i <= 10; i++)
//	//	printf("%d ", i);
//	//for (i = 1; i <= 10; i++) {
//	//	if (i == 5)
//	//		break;
//	//	printf("%d ", i);
//	//}
//	for (i = 1; i <= 10; i++) {
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	//int i = 1;
//	//while (i <= 10) {
//	//	if (i == 5)
//	//		continue;
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}

//int main() {
//	// forѭ�����жϲ���ʡ����ζ���жϺ����
//	//for (;;) {
//	//	printf("hehe ");
//	//}
//	//int i = 0;
//	//for (;i < 10;i++) {
//	//	printf("hehe ");
//	//}
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 10; i++) {
//	//	for (j = 0; j < 10; j++) {
//	//		printf("hehe\n");
//	//	}
//	//}
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++) {
//		for (; j < 10; j++) {
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//
//	return 0;
//}

//int main() {
//	int i = 1;
//	//do
//	//{
//	//	if (i == 5)
//	//		break;
//	//	printf("%d ", i);
//	//	i++;
//	//} while (i < 11);
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i < 11);
//	return 0;
//}

// ����n�Ľ׳�
//int main() {
//	int n = 1, res = 1;
//	int num = 0;
//	scanf("%d", &num);
//	do {
//		res *= n++;
//	} while (n <= num);
//	printf("result: %d\n", res);
//	return 0;
//}

// ����1! + 2! + ... + 10!
//int fac(int num) {
//	int n = 1, res = 1;
//	do {
//		res *= n++;
//	} while (n <= num);
//	return res;
//}
//
//int main() {
//	int res = 0;
//	for (int n = 0; n < 10; n++) {
//		res += fac(n + 1);
//	}
//	printf("result: %d\n", res);
//	return 0;
//}

//int main() {
//	int num = 10;
//	int n = 1, temp = 1, res = 0;
//	do {
//		temp *= n++;
//		res += temp;
//	} while (n <= num);
//	printf("result: %d\n", res);
//	return 0;
//}

// ��һ�����������в��Ҿ����ĳ������n����������ֲ��ң�
void print_array(int* array, int index, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
	for (int i = 0; i < index * 2; i++) {
		printf(" ");
	}
	printf("^\n");
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 1;
	//int i = 0;  // ˳�����
	int length = sizeof(arr) / sizeof(int);
	//for (i = 0; i < length; i++) {
	//	if (arr[i] == k) {
	//		break;
	//	}
	//}
	//if (i < length) {
	//	printf("�ҵ���%d���±�Ϊ%d\n", k, i);
	//	print_array(&arr, i, length);
	//}
	//else {
	//	printf("δ�ҵ�������\n");
	//}
	// ���ֲ��� O(log2N)
	while (k < 50) {
		int left = 0, right = length - 1;
		int mid = 0;
		while (left <= right) {
			mid = (left + right) / 2;
			if (arr[mid] < k) {
				left = mid + 1;
			}
			else if (arr[mid] > k) {
				right = mid - 1;
			}
			else
			{
				break;
			}
		}
		if (left <= right) {
			printf("�ҵ���%d���±�Ϊ%d\n", k, mid);
			print_array(&arr, mid, length);
		}
		else {
			printf("δ�ҵ�������\n");
		}
		k++;
	}
	return 0;
}