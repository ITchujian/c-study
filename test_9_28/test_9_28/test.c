#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//	//if (3 == 5) printf("hehe\n");
//	//int age = 10;
//	//if (age >= 18)
//	//	printf("����\n");
//	//else {
//	//	printf("δ����\n");
//	//	printf("��������\n");
//	//}
//	int age = 10;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age <= 100)
//		printf("����\n");
//	else
//		printf("������\n");
//	return 0;
//}
//������
//1.�����������������壬�淶��
//2.�ո� ���� ����

//int test(int num) {
//	if (num == 3)
//		return 1;
//	return 0;
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", test(n));
//	return 0;
//}

//int main() {
//	int num = 3;
//	if (5 == num) // ��ֹ num = 5  ���� == ����
//		printf("hehe\n");
//	return 0;
//}

//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2) {
//		printf("%d������\n", num);
//	}
//	else {
//		printf("%d��ż��\n", num);
//	}
//
//	return 0;
//}

//int main() {
//	int index = 1;
//	while (index <= 100) {
//		if (index % 2)
//			printf("%d\n", index);
//		index++;
//	}
//	return 0;
//}

//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {  // ���ͱ��ʽ
//	case 1: { // �����  case ����(�����ַ�)
//		printf("����һ");
//		break;
//	}
//	case 2: {
//		printf("���ڶ�");
//		break;
//	}
//	case 3: {
//		printf("������");
//		break;
//	}
//	case 4: {
//		printf("������");
//		break;
//	}
//	case 5: {
//		printf("������");
//		break;
//	}
//	case 6: {
//		printf("������");
//		break;
//	}
//	case 7: {
//		printf("������");
//		break;
//	}
//	}
//	return 0;
//}

//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {  // ���ͱ��ʽ
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5: {
//		printf("weekday\n");
//		break;
//	}
//	case 6:
//	case 7: {
//		printf("weekend\n");
//		break;
//	}
//	default: {  // ����case��ƥ�� ˳����Ҫ�󣬽�������
//		printf("�������\n");
//		break;
//	}
//	}
//	return 0;
//}

// ѭ��
//int main() {
//	while (1) {
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	while (i < 10) {
//		i++;
//		if (5 == i)
//			//break;  //������������ѭ����ѭ��ֱ�ӱ������ֹ����
//			continue; //��������ѭ������Ĵ��룬ֱ�ӽ�����һ���ж�����
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main() {
//	// EOF; // -1 end of fuke
//	//int ch = getchar();
//	//printf("%c\n", ch);
//	//putchar(ch);
//	
//	//int ch = 0;
//	//while ((ch=getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//
//	//example
//	char password[20] = { 0 };
//	printf("����������> ");
//	scanf("%s", &password);
//	printf("��ȷ������(Y/N)> ");
//	//getchar(); // ��ȡ������ʣ��ĵ����ַ�
//	int ch = 0;
//	while ((ch = getchar()) != '\n') {
//
//	}
//	int ret = getchar();
//	if ('Y' == ret) {
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n");
//	}
//	return 0;
//}

//int main() { // ֻ��ӡ�����ַ�
//	char ch = '\0';
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch > '9') {
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}


//int main() {
//    int nums[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int i = 0, len = sizeof(nums) / sizeof(int);
//    printf("%d\n", len);
//    while (i < len) {
//        printf("%c", nums[i]);
//        i++;
//    }
//    return 0;
//}

//int main() {
//    char date[9] = "";
//    scanf("%s", date);
//    int i = 0;
//    printf("year=");
//    while (i < 4) {
//        printf("%c", date[i]);
//        i++;
//    }
//    printf("\nmonth=");
//    while (i < 6)
//    {
//        printf("%c", date[i]);
//        i++;
//    }
//    printf("\nday=");
//    while (i < 8)
//    {
//        printf("%c", date[i]);
//        i++;
//    }
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int gcd(int a, int b) {
//    if (b == 0) {
//        return a;
//    }
//    else {
//        return gcd(b, a % b);
//    }
//}
//
//int main() {
//    int a, b;
//    printf("����������������");
//    scanf("%d %d", &a, &b);
//    int result = gcd(a, b);
//    printf("���Լ��Ϊ��%d\n", result);
//    return 0;
//}

// ��ӡ1000�굽2000��֮�������
//int main() {
//	int year = 1000;
//	while (year <= 2000) {
//		if ((!(year % 4) && year % 100) || !(year % 400)) {
//			printf("%d������\n", year);
//		}
//		year++;
//	}
//
//	return 0;
//}

//дһ�������ӡ1-100֮������3�ı���������
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 3)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

int main()
{
	int a = 0, b = 0;
	// a 1 2 3 4 5 6 7 8
	// b 1 4 7 10 13 16 19 21
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	return 0;
}