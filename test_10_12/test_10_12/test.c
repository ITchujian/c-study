#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////二分查找
//int binary_search(int* array, int length, int find_value) {
//	int left = 0, right = length - 1, mid = 0;
//	while (left <= right)
//	{
//		//mid = (left + right) / 2;
//		mid = (right - left) / 2 + left; // 防止left和right过大相加时溢出
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

//编写代码，演示多个字符从两端移动，向中间汇聚。
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
//		printf("\r%s", arr2);  // 方式一
//		//system("cls");  // 方式二
//		//printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}


// 编写代码实现，模拟用户登录情景，并且只能登录三次（只允许输入三次密码，如果密码正确则
// 提示登录成功，如果三次均输入错误，则退出程序）。
//#include <string.h>
//int main() {
//	int i = 0;
//	char password[20] = { 0 };
//	do {
//		i++;
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "admin") == 0) {  // 比较两个字符串是否相等，不使用==，而是使用strcmp
//			printf("登录成功！\n");
//			break;
//		}
//		else {
//			if (i >= 3) {
//				printf("%d次密码均输入错误，冻结一分钟\n", i);
//				break;
//			}
//			else {
//				printf("第%d次登录失败，再次尝试\n", i);
//			}
//		}
//	} while (i < 3);
//
//	return 0;
//}


//猜数字游戏实现
//#include <stdlib.h>
//#include <time.h>
//
//void menu() {
//	printf("**************菜 单**************\n");
//	printf("************* 1.play ************\n");
//	printf("************* 0.exit ************\n");
//	printf("*********************************\n");
//}
//
//void game() {
//	int value = 0, result = rand() % 100 + 1, i = 1;
//	while (value != result) {
//		printf("第%d次, 请输入数字：", i);
//		scanf("%d", &value);
//		//printf("value = %d\n", value);
//		i++;
//		if (result > value) {
//			printf("你猜测得过小\n");
//		}
//		else if (result < value) {
//			printf("你猜测得过大\n");
//		}
//	}
//	if (value == result)
//		printf("总共猜测了%d次，你猜测正确啦！就是%d\n", i - 1, value);
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
//			printf("退出游戏咯！\n");
//			break;
//		}
//		case 1: {
//			printf("游戏开始啦！\n");
//			game();
//			break;
//		}
//		default:{
//			printf("不可以乱填哦！\n");
//			break;
//		}
//		}
//	} while (input);
//	return 0;
//}


// goto语句
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

// 关机程序
//电脑运行起来后，1分钟内关机
//如果输入：我是猪，就取消关机
//shutdown -s -t 60
//shutdown -a
//#include <stdlib.h>
//#include <string.h>
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑将在60秒内关机\n如果输入“我是猪”，可以取消关机\n");
//	printf(">>>");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0) {
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

//写一个函数交换两个整型变量的内容
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
	printf("交换前：\na = %d; b = %d\n", a, b);
	//当实参传递给形参时，形参是实参的一份临时拷贝
	//对形参的修改并不影响实参
	//swap(a, b);
	swap(&a, &b);
	printf("交换后：\na = %d; b = %d\n", a, b);
	return 0;
}