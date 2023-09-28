#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//	//if (3 == 5) printf("hehe\n");
//	//int age = 10;
//	//if (age >= 18)
//	//	printf("成年\n");
//	//else {
//	//	printf("未成年\n");
//	//	printf("不能饮酒\n");
//	//}
//	int age = 10;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age <= 100)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//	return 0;
//}
//代码风格
//1.变量的命名（有意义，规范）
//2.空格 空行 换行

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
//	if (5 == num) // 防止 num = 5  常量 == 变量
//		printf("hehe\n");
//	return 0;
//}

//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2) {
//		printf("%d是奇数\n", num);
//	}
//	else {
//		printf("%d是偶数\n", num);
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
//	switch (day) {  // 整型表达式
//	case 1: { // 语句项  case 常量(或者字符)
//		printf("星期一");
//		break;
//	}
//	case 2: {
//		printf("星期二");
//		break;
//	}
//	case 3: {
//		printf("星期三");
//		break;
//	}
//	case 4: {
//		printf("星期四");
//		break;
//	}
//	case 5: {
//		printf("星期五");
//		break;
//	}
//	case 6: {
//		printf("星期六");
//		break;
//	}
//	case 7: {
//		printf("星期天");
//		break;
//	}
//	}
//	return 0;
//}

//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {  // 整型表达式
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
//	default: {  // 所有case不匹配 顺序无要求，建议放最后
//		printf("输入错误\n");
//		break;
//	}
//	}
//	return 0;
//}

// 循环
//int main() {
//	while (1) {
//		printf("呵呵\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	while (i < 10) {
//		i++;
//		if (5 == i)
//			//break;  //用于永久跳出循环，循环直接被打断终止运行
//			continue; //跳过本次循环后面的代码，直接进行下一次判断条件
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
//	printf("请输入密码> ");
//	scanf("%s", &password);
//	printf("请确认密码(Y/N)> ");
//	//getchar(); // 读取缓冲区剩余的单个字符
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

//int main() { // 只打印数字字符
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
//    printf("请输入两个整数：");
//    scanf("%d %d", &a, &b);
//    int result = gcd(a, b);
//    printf("最大公约数为：%d\n", result);
//    return 0;
//}

// 打印1000年到2000年之间的闰年
//int main() {
//	int year = 1000;
//	while (year <= 2000) {
//		if ((!(year % 4) && year % 100) || !(year % 400)) {
//			printf("%d是闰年\n", year);
//		}
//		year++;
//	}
//
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
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