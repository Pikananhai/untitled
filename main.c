#include <stdio.h>
//void main()
//{
//	int a = 10;
//	int b = 5;
//
//	a = a & b;
//	printf("%d", a);
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//typedef int a;
//int main()
//{
//	a i = 0;
//	printf("%d ", i);
//	return 0;
//}

//#define N 10
//#define Add(x,y) ((x)+(y))
//
//int main()
//{
//	int a = 10, b = 20;
//	printf("%d\n", N);
//	printf("%d\n", Add(a, b));
//
//	return 0;
//}

//int main()
//{
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(double*));
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(short*));
//
//	return  0;
//}

//struct Sut
//{
//	char name[20];
//	int aeg;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Sut* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).aeg, (*ps).sex, (*ps).tele);
//	printf("%s %d %s %s\n", ps->name, ps->aeg, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Sut s = { "Xuguoyou", 20, "man", "17730381459" };
//	printf("%s %d %s %s\n", s.name, s.aeg, s.sex, s.tele);
//	print(&s);
//
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//
//	scanf("%d %d", &a, &b);
//	if (a > 0 && b < 1000)
//	{
//		printf("%d %d\n", a / b, a % b);
//	}
//	else
//	{
//		printf("错误");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 9;
//	if (a % 3 == 0)
//	{
//		printf("a是奇数\n");
//	}
//	else
//	{
//		printf("a是偶数\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while (((ch = getchar())) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//二分查找(有序数组)
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 1;
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            printf("找到了，下标是:%d\n", mid);
//            break;
//        }
//    }
//    if (left > right)
//    {
//        printf("找不到\n");
//    }
//    return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 1;
//	int ZC = sizeof(arr) / sizeof(arr[0]);
//	int ZB = 0;
//	int YB = ZC - 1;
//
//	while (ZB <= YB)
//	{
//		int ZJZ = (ZB + YB) / 2;
//		if (arr[ZJZ] < k)
//		{
//			ZB = ZJZ + 1;
//		}
//		else if (arr[ZJZ] > k)
//		{
//			YB = ZJZ - 1;
//		}
//		else
//		{
//			printf("k的下标是%d", ZJZ);
//			break;
//		}
//	}
//	if (ZB > YB)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to China";
//	char arr2[] = "XXXXXXXXXXXXXXXX";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//		return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("max=%d", m);
//
//	return 0;
//}

//int a = 0;
//int b = 0;
//
//void Swap()
//{
//    int z = 0;
//    z = a;
//    a = b;
//    b = z;
//}
//
//int main()
//{
//    scanf("%d%d", &a, &b);
//    printf("交换前:a=%d b=%d\n", a, b);
//    Swap();
//    printf("交换后:a=%d b=%d\n", a, b);
//    return 0;
//}

//void Swap(int* px, int* py)
//{
//    int z = *px;
//    *px = *py;
//    *py = z;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    printf("交换前:a=%d b=%d\n", a, b);
//    Swap(&a, &b);
//    printf("交换后:a=%d b=%d\n", a, b);
//    return 0;
//}


//1.写一个函数可以判断一个数是不是素数。
//2.写一个函数判断一年是不是闰年。
//3.写一个函数，实现一个整形有序数组的二分查找。
//4.写一个函数，每调用一次这个函数，就会将 num 的值增加 1。
//int is_sushu(int x)
//{
//	int sushu = 1;
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_sushu(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//int is_runnian(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_runnian(year))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//int RC_CZ(int arr[], int k, int ZC)
//{
//	int ZB = 0;
//	int YB = ZC - 1;
//	while (ZB <= YB)
//	{
//		int ZJZ = (ZB + YB) / 2;
//		if (arr[ZJZ] > k)
//		{
//			YB = ZJZ - 1;
//		}
//		else if (arr[ZJZ] < k)
//		{
//			ZB = ZJZ + 1;
//		}
//		else
//		{
//			return ZJZ;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int ZC = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int A = RC_CZ(arr, k, ZC);
//
//	if (A == -1)
//	{
//		printf("找不到\n", A);
//	}
//	else
//	{
//		printf("下标为%d", A);
//	}
//
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	while (num)
//	{
//		printf("%u ", num % 10);
//		num /= 10;
//	}
//
//	return 0;
//}

//void print(unsigned int n)//函数的递归
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%u ", n % 10);
//}
//
//int main()
//{
//	unsigned int i = 0;
//	scanf("%u", &i);
//	print(i);
//
//	return 0;
//}

//#include <string.h>
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d ", len);
//
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "zxcvbnm";
//	printf("%d ", my_strlen(arr));
//
//	return 0;
//}

//int fac(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x * fac(x - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//int seq(int x)// 1 1 2 3 5 8 13
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return seq(x - 1) + seq(x - 2);
//	}
//}
////效率非常低
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = seq(n);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//int seq(int x)// 1 1 2 3 5 8 13
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (x >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
////效率高
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = seq(n);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//#define N 3
//
//void size(int arr[])
//{
//
//	int i = 0;
//	int j = 0;
//	int t = 0;
//
//	for (i = 0; i < N - 1; i++)
//	{
//		for (j = 0; j < N - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//
//	for (i = 0; i <= N - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[N];
//
//	for (i = 0; i <= N - 1; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	size(arr);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	for (i = 3; i <= 100; i += 3)
//	{
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//	int min = (a > b) ? a : b;
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			break;
//		}
//		min--;
//	}
//	printf("%d\n", min);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}

//int Max(int arr[])
//{
//	int i = 0;
//	int max_val = arr[0];
//	for (i = 1; i <= 9; i++)
//	{
//		if (max_val < arr[i])
//		{
//			max_val = arr[i];
//		}
//	}
//	return max_val;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 11, 10 };
//	printf("%d\n", Max(arr));
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int j = 1;
//
//	for (i = 1; i <= 9; i++)//i行
//	{
//		for (j = 1; j <= i; j++)//i行j列
//			printf("%d*%d=%-2d ", j, i, i * j);
//		printf("\n");
//	}
//
//
//	return 0;
//}

//数组倒叙
//#include <stdlib.h>
//void reverse_string(char* string)
//{
//	size_t ret = strlen(string);
//	size_t i = 0;
//	char t = 0;
//	for (i = 0; i < ret / 2; i++)
//	{
//		t = string[i];
//		string[i] = string[ret - 1 - i];
//		string[ret - 1 - i] = t;
//	}
//}
//
//int main()
//{
//	char str[] = "abcdefgh123";
//	printf("%s\n", str);
//	reverse_string(str);
//	printf("%s\n", str);
//
//	return 0;
//}

//数组倒叙打印
//void flashback(char arr[])
//{
//	if (*arr != '\0')
//	{
//		flashback(arr + 1);
//	}
//	printf("%c", *arr);
//}
//
//int main()
//{
//	char arr[] = "abcdefghijklmnopqrstuvwxyz";
//	flashback(arr);
//	return 0;
//}

//递归解决数组倒叙 我自己写的
//#include <string.h>
//void flashback(char* str, int len)
//{
//	char t = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = t;
//	if (len > 1)
//	{
//		flashback(str + 1, len - 2);
//	}
//}
//
//int main()
//{
//	char arr[] = "123456";
//	int len = strlen(arr);
//	flashback(arr, len);
//	printf("%s\n", arr);
//
//	return 0;
//}

//老师写的 但题目给的是 void reverse(char* str) 就一个参数
//void reverse(char* str)
//{
//	char tmp = *str;//1
//	int len = strlen(str);
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	if (strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);//4
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f \0]
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//void reverse(char arr[], int left, int right)
//{
//    char tmp = arr[left];
//    arr[left] = arr[right];
//    arr[right] = tmp;
//    if (left < right)
//        reverse(arr, left + 1, right - 1);
//}
//
//int main()
//{
//    char arr[] = "abcdefg";//[a b c d e f \0]
//    int left = 0;
//    int right = strlen(arr) - 1;
//    reverse(arr, left, right);
//
//    printf("%s\n", arr);
//
//    return 0;
//}

//int DigitSum(unsigned int n)
//{
//	int t = n % 10;
//	if (n > 9)
//	{
//		t += DigitSum(n / 10);
//	}
//	return t;
//}
//
//int main()
//{
//	unsigned int  n = 0;
//
//	scanf("%u", &n);
//	DigitSum(n);
//	printf("%d\n", DigitSum(n));
//
//	return 0;
//}

//int DigitSum(unsigned int n)//1234
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 5;
//	printf("交换前a = %d b = %d \n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后a = %d b = %d \n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int n = 0;
//
//	while (a != 0)
//	{
//		if ((a & 1) == 1)
//		{
//			n++;
//		}
//		a = a >> 1;
//	}
//	printf("%d\n", n);
//
//	return 0;
//}

//// 统计整数二进制表示中1的个数的核心函数
//int count_binary_1(int n)
// {
//	int count = 0; // 初始化计数器，记录1的个数
//	// 循环消去二进制最右侧的1，直到n变为0
//	while (n != 0)
// {
//		count++; // 每消去一个1，计数器+1
//		n = n & (n - 1); // 核心操作：消去n二进制中最右边的1
//	}
//	return count; // 返回最终1的个数
//}

//int main()
//{
//    int a1 = 10;
//    int a2 = -1;
//    int a3 = 0;
//
//    printf("10的二进制1的个数：%d\n", count_binary_1(a1));
//    printf("-1的二进制1的个数：%d\n", count_binary_1(a2));
//    printf("0的二进制1的个数：%d\n", count_binary_1(a3));
//
//    return 0;
//}

//int main()
//{
//	int a = 13;
//	a |= (1 << 4);
//	printf("%d\n", a);
//	a &= (~(1 << 4));
//	printf("%d\n", a);
//	a &= (a^(1 << 4));
//	printf("%d\n", a);
//
//	return 0;
//}
//00000000 00000000 00000000 00000001 - 1
//00000000 00000000 00000000 00010000 - 1 << 4
//00000000 00000000 00000000 00001101 - a
//11111111 11111111 11111111 11101111 - ~(1 << 4)
//00000000 00000000 00000000 00001101 - a &= (~(1 << 4))

//00000000 00000000 00000000 00000001 - 1
//00000000 00000000 00000000 00010000 - 1 << 4
//00000000 00000000 00000000 00001101 - a
//00000000 00000000 00000000 00011101 - a^(1 << 4)
//00000000 00000000 00000000 00001101 - a &= (a^(1 << 4))

//有n个台阶有，一次可以走一个台阶或者两个台阶一共有多少走法
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return (fib(n - 1) + fib(n - 2));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int d = 0;
//	scanf("%d", &d);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != d)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	return 0;
//}

//int main() {
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int del = 0;
//
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &del);
//	for (i = 0; i < n; i++) {
//		if (arr[i] != del) {
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++) {
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 1; i < n; i++) {
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//		if (min > arr[i]) {
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//
//	return 0;
//}

//int main() {
//	int n = 0;
//	int i = 0;
//	int arr[50] = { 0 };
//	int max = 0;
//	int min = 100;
//
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//
//	return 0;
//}

//int main() {
//	char ch = 'a';
//	if (ch >= 'A' && ch <= 'Z') {
//		ch += 32;
//	}
//	else {
//		ch -= 32;
//	}
//	printf("%c\n", ch);
//
//	return 0;
//}

//int main() {
//	int i = 0;
//	int arr[3] = { 0 };
//
//	for (i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0] > arr[1] ? arr[0] : arr[1];
//	max = max > arr[2] ? max : arr[2];
//	printf("%d\n", max);
//
//	return 0;
//}

//int main() {
//	int i = 0;
//	int max = 0;
//	int score = 0;
//
//	for (i = 0; i < 3; i++) {
//		scanf("%d", &score);
//		if (score > max)
//			max = score;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//#include <math.h>
//int main() {
//	int i = 0;
//	for (i = 10000; i <= 99999; i++) {
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++) {
//			int k = (int)pow(10, j);
//			sum += (i / k) * (i % k);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

////方法一循环
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		str++;
//		count++;
//	}
//	return count;
//}
////方法二递归
//int my_strlen(char* str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	return 1 + my_strlen(str + 1);
//}
////方法三指针
//int my_strlen(char* str) {
//	char* str0 = str;
//	while (*str != '\0') {
//		str++;
//	}
//	return str - str0;
//}

//int main() {
//	//求字符串长度
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//
//	return 0;
//}

//int main() {
//	int a = 10;
//	int* p = &a;
//	int** ppa = &p;
//
//	return 0;
//}

//struct Peo {
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//
//}p1, p2;//p1和p2是俩个全局的结构体变量

//struct Peo {
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//
//};
//
//int main() {
//	struct Peo p1 = { "张三", "66666666", "男", "185" };//结构体变量的创建
//	printf("name = %s\ntele = %s\nsex = %s\nhigh = %d", p1.name, p1.tele, p1.sex, p1.high);
//
//	return 0;
//}

//int main() {
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//
//	//x = 1; y = 2;
//	//00000000 00000000 00000000 00000001 - 1
//	//00000000 00000000 00000000 00000010 - 2
//	// x ^ y 统计有几个 1
//	//00000000 00000000 00000000 00000011 - x ^ y
//	//00000000 00000000 00000000 00000001 - z & 1
//	//
//	int z = x ^ y;
//		int n = 0;
//
//	while (z != 0) {
//		if ((z & 1) == 1) {
//			n++;
//		}
//		z= z >> 1;
//	}
//	printf("%d\n", n);
//
//	return 0;
//}

//int count_num_of_1(unsigned int n) {
//	int count = 0;
//
//	while (n) {
//		if ((n % 2) == 1) {
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//
//	return 0;
//}

//int count_num_of_1(unsigned int n) {
//	int count = 0;
//	while (n) {
//		if ((n & 1) == 1) {
//			count++;
//		}
//		n = n >> 1;
//	}
//	return count;
//}
//
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//
//	return 0;
//}

//int count_num_of_1(unsigned int n) {
//	int count = 0;
//	while (n) {
//			n = n & (n - 1);
//			count++;
//	}
//	return count;
//}
//
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//
//	return 0;
//}

//int main() {
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//
//	//x = 1; y = 2;
//	//00000000 00000000 00000000 00000001 - 1
//	//00000000 00000000 00000000 00000010 - 2
//	// x ^ y 统计有几个 1
//	//00000000 00000000 00000000 00000011 - x ^ y
//	//00000000 00000000 00000000 00000001 - z & 1
//	//
//	int z = x ^ y;
//		int n = 0;
//
//	while (z != 0) {
//		z = z & (z - 1);
//		n++;
//	}
//	printf("%d\n", n);
//
//	return 0;
//}

//int Factorial(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	return n * Factorial(n - 1);
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Factorial(n);
//	printf("%d! = %d", n, ret);
//
//	return 0;
//}

//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		ret *= i;//ret = ret * i => (n-1)! * n = n!
//	}
//	printf("%d", ret);
//
//	return 0;
//}

//int main() {
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//#include <assert.h>
////为什么返回char*呢？
////是为了实现链式访问
//char* my_strcpy(char* dest, const char* src)
//{
//    char* ret = dest;
//
//    assert(src != NULL);
//    assert(dest != NULL);
//
//    while (*dest++ = *src++);
//    return ret;
//}
//
//int main()
//{
//    char arr1[20] = "XXXXXXXXXXXX";
//    char arr2[] = "hello bit";
//    char* p = NULL;
//    //strcpy在拷贝字符串的时候，会把源字符串中的\0也拷贝过去
//   /* my_strcpy(arr1, p);*/
//    my_strcpy(arr1, arr2);
//   /* printf("%s\n", arr1);*/
//    printf("%s\n", my_strcpy(arr1, arr2));
//    return 0;
//}

//#include <assert.h>
//int my_strlen(const char* str) {
//    int count = 0;
//    assert(str);
//    while (*str != '\0') {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//int main() {
//    char arr[] = "hello word";
//    int len = my_strlen(arr);
//    printf("%d\n", len);
//
//    return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void print(int* arr, int len) {
//	int i = 0;
//
//	while (i != len) {
//		printf("%d", *(arr + i));
//		i++;
//	}
//	printf("\n");
//}
//
//int main() {
//	int arr[] = { 1, 2, 3 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr, len);
//
//	return 0;
//}

//void Reverse(char* p, int len) {
//    assert(p != NULL && len > 0);
//    int left = 0;        // 左指针（第一个字符）
//    int right = len - 1; // 右指针（最后一个字符）
//    // 首尾交换，直到指针相遇
//    while (left < right) {
//        // 交换两个字符
//        char temp = p[left];
//        p[left] = p[right];
//        p[right] = temp;
//        left++;
//        right--;
//    }
//}
//
//int main() {
//	char arr[] = "abc";
//	int len = sizeof(arr) / sizeof(arr[0]) - 1;
//	Reverse(arr, len);
//
//	return 0;
//}

//int main()
//{
//    int a = 0;
//    int n = 0;
//    scanf("%d %d", &a, &n); // 输入示例：2 5
//    int i = 0;
//    int sum = 0;
//    int k = 0;
//    for (i = 0; i < n; i++)
//    {
//        k = k * 10 + a;
//        sum += k;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//// 单函数递归：sum表示累计和，term表示当前项的值，n是剩余项数
//int recursive_sum(int a, int n, int sum, int term) {
//    // 终止条件：剩余项数为0，返回累计和
//    if (n == 0) {
//        return sum;
//    }
//    // 更新当前项：term = term×10 +a
//    term = term * 10 + a;
//    // 累计和 += 当前项，剩余项数-1，递归调用
//    return recursive_sum(a, n - 1, sum + term, term);
//}
//
//int main() {
//    int a = 0, n = 0;
//    printf("请输入a和n（用空格分隔）：");
//    scanf("%d %d", &a, &n);
//
//    // 初始调用：sum=0，term=0（还没有任何项）
//    int result = recursive_sum(a, n, 0, 0);
//    printf("前%d项的和为：%d\n", n, result);
//
//    return 0;
//}

//int main() {
//    int i = 0;
//    // 遍历0到100000的所有数
//    for (i = 0; i <= 100000; i++) {
//        int n = 0;    // 每次处理新i，重置位数n（核心修复）
//        int sum = 0;  // 每次处理新i，重置求和sum（核心修复）
//        int p = i;    // 临时变量，用于计算位数/提取每一位
//
//        // 1. 计算当前数字的位数（单独处理i=0的特殊情况）
//        if (i == 0) {
//            n = 1; // 0视为1位数，避免n=0导致次方无意义
//        }
//        else {
//            while (p != 0) {
//                p /= 10;
//                n++;
//            }
//        }
//
//        // 2. 计算各位数字的n次方和（整数运算，无精度误差）
//        p = i; // 重置临时变量，用于提取每一位
//        while (p != 0) {
//            int digit = p % 10; // 提取最后一位数字
//            // 计算digit的n次方（替代pow，避免精度问题）
//            int power = 1;
//            for (int k = 0; k < n; k++) {
//                power *= digit;
//            }
//            sum += power;
//            p /= 10; // 去掉最后一位，处理下一位
//        }
//
//        // 3. 特殊处理i=0（0的1次方和为0）
//        if (i == 0) {
//            sum = 0;
//        }
//
//        // 4. 判断是否是阿姆斯特朗数并输出
//        if (sum == i) {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//#include <math.h>
//int main() {
//	int i = 0;
//	for (i = 0; i <= 100000; i++) {
//		//判断i是否为“水仙花数”
//		//1.计算i是几位数 -> n
//		int tmp = i;
//		int sum = 0;
//		int n = 1;//任何一个数字至少有一位
//		while (tmp / 10) {
//			n++;
//			tmp /= 10;
//		}
//		//2.得到每一位数字，计算它们n次方之和 -> sum
//		tmp = i;
//		while (tmp) {
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum) {
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//喝汽水 一瓶汽水1元 2个空瓶子换一瓶汽水 给20元 可以喝多少汽水？
//int main() {
//	int money = 0;//有n元
//	scanf("%d", &money);
//	int total = money; //刚开始可以喝多少汽水
//	int empty = money;//刚开始的空瓶数
//	//置换汽水
//	while (empty / 2) {
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d\n", total);
//	//归纳总结
//	if (money > 0) {
//		printf("%d\n", 2 * money - 1);
//	}
//	else {
//		printf("0");
//	}
//	//规律2*money - 1
//	return 0;
//}

//int exchange(int empty) {
//    if (empty < 2) {
//        return 0;
//    }
//    int total = empty / 2;
//    empty = empty / 2 + empty % 2;
//    return  total + exchange(empty);
//}
//
//int main() {
//    int money = 0;
//    printf("请输入钱数：");
//    scanf("%d", &money);
//
//    if (money <= 0) {
//        printf("0\n");
//        return 0;
//    }
//    int total = money;//刚开始可以喝多少汽水
//    int empty = money;//刚开始的空瓶数
//    //置换汽水
//    total += exchange(empty);
//    printf("总共能喝：%d 瓶\n", total);
//
//	return 0;
//}

//void hanoi(int n, char from, char to, char tmp, int* steps) {
//    if (n == 1) {
//        (*steps)++;  // 通过指针修改主函数的变量
//        printf("第%d步： %c  ->  %c\n", *steps, from, to);
//        return;
//    }
//    hanoi(n - 1, from, tmp, to, steps);
//    (*steps)++;
//    printf("第%d步： %c  ->  %c\n", *steps, from, to);
//    hanoi(n - 1, tmp, to, from, steps);
//}
//
//int main() {
//    int n, total_steps = 0;
//    printf("请输入盘子数量：");
//    scanf("%d", &n);
//    hanoi(n, 'A', 'C', 'B', &total_steps);  // 传步数变量的地址
//    printf("总步数：%d\n", total_steps);
//    return 0;
//}

//int frog(int n) {
//	if (n <= 2) {
//		return n;
//	}
//	return frog(n - 1) + frog(n - 2);
//}
//
//int main() {
//	int n = 0;//台阶个数
//	scanf("%d", &n);
//
//	int ret = frog(n);
//	printf("有%d个台阶\n共有%d个跳法\n",n, ret);
//
//	return 0;
//}

//// 非递归版基础版青蛙跳台阶
//long long frog_basic(int n) {
//    // 处理边界条件
//    if (n <= 2) {
//        return n;
//    }
//
//    // 用两个变量保存前两步的结果，避免重复计算
//    long long prev_prev = 1;  // 对应f(n-2)，初始为f(1)=1
//    long long prev = 2;       // 对应f(n-1)，初始为f(2)=2
//    long long res = 0;        // 保存最终结果f(n)
//
//    // 从3级开始迭代计算到n级
//    for (int i = 3; i <= n; i++) {
//        res = prev + prev_prev;  // f(i) = f(i-1) + f(i-2)
//        // 更新变量，为下一次循环准备
//        prev_prev = prev;        // 原f(i-1)变为新的f(i-2)
//        prev = res;              // 原f(i)变为新的f(i-1)
//    }
//
//    return res;
//}

//int main() {
//    int n = 0;
//    printf("请输入台阶个数：");
//    scanf("%d", &n);
//
//    // 输入合法性校验
//    if (n < 0) {
//        printf("输入错误！台阶数不能为负数。\n");
//        return 1;
//    }
//
//    long long ret = frog_basic(n);
//    printf("有%d级台阶，共有%lld种跳法。\n", n, ret);
//    return 0;
//}

//// 递归实现进阶版青蛙跳台阶
//long long frog_advance_recursion(int n) {
//    // 边界条件
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    // 核心递推：f(n) = 2 * f(n-1)
//    return 2 * frog_advance_recursion(n - 1);
//}
//
//int main() {
//    int n = 0;
//    printf("请输入台阶个数：");
//    scanf("%d", &n);
//
//    if (n < 0) {
//        printf("输入错误！台阶数不能为负数。\n");
//        return 1;
//    }
//
//    long long ret = frog_advance_recursion(n);
//    printf("有%d级台阶，共有%lld种跳法。\n", n, ret);
//    return 0;
//}

//// 非递归实现进阶版青蛙跳台阶
//long long frog_advance(int n) {
//    // 边界条件处理
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    // 用long long避免数值溢出（n较大时结果会快速增长）
//    long long res = 1; // 初始值对应f(1)=1
//    // 迭代计算：f(n) = 2 * f(n-1)
//    for (int i = 2; i <= n; i++) {
//        res *= 2;
//    }
//    return res;
//}
//
//int main() {
//    int n = 0; // 总台阶数
//    printf("请输入台阶个数：");
//    scanf("%d", &n);
//
//    // 校验输入合法性（n为非负整数）
//    if (n < 0) {
//        printf("输入错误！台阶数不能为负数。\n");
//        return 1;
//    }
//
//    long long ret = frog_advance(n);
//    printf("有%d级台阶，共有%lld种跳法。\n", n, ret);
//    return 0;
//}

//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    if (a < 0) a = -a;
//    if (b < 0) b = -b;
//    scanf("%d %d", &a, &b);
//    int t = a * b;
//    if (b == 0) {
//        // 若a也为0，提示错误（0和0无最大公约数）
//        if (a == 0) {
//            printf("错误：两个数不能同时为0！\n");
//            return 1;
//        }
//        // 若b=0且a≠0，最大公约数是a
//        printf("%d\n", a);
//        return 0;
//    }
//    while ((c = a % b) != 0) {
//        a = b;
//        b = c;
//    }
//    printf("最大公约数为：%d\n", b);
//    printf("最小公倍数为：%d\n", t / b);
//    return 0;
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while ((a * i) % b) {
//		i++;
//	}
//	printf("最小公倍数为：%d\n", a * i);
//}

//逆序单词	Eg.ni hao beijing. => beijing. hao ni
//#include <assert.h>
//#include <string.h>
//void reverse(char* left, char* right) {
//	assert(left);
//	assert(right);
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main() {
//	char arr[101];
//	gets(arr);
//	int len = strlen(arr);
//	//逆序整个字符串
//	reverse(arr, arr + len - 1);
//	//逆序单词
//	char* start = arr;
//	char* end = start;
//	while (*end) {
//		while (*end != ' ' && *end != '\0') {
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0') {
//			end++;
//		}
//		start = end;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}

//#include <string.h>
//#include <assert.h>
//void reverse(char* left, char* right) {
//	assert(left);
//	assert(right);
//	while (left < right) {
//		char* tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main() {
//	char arr[101];
//	gets(arr);
//	//1.逆序整个字符串
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	//2.逆序单词
//	char* start = arr;
//	char* end = start;
//
//	while (*end) {
//		while (*end != ' ' && *end != '\0') {
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//			end++;
//		start = end;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main() {
//	int a = 1;
//
//	if (*(char*) & a == a) {
//		printf("小端\n");
//	}
//	else
//		printf("大端");
//
//	return 0;
//}

//int main() {
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    char d = -128;
//    char e = -128;
//    printf("a=%d,b=%d,c=%d,d=%u,e=%d", a, b, c, d, e);
//    return 0;
//}

//int main() {
//    char a = 128;
//    printf("%u\n", a);
//    printf("%d\n", a);
//    return 0;
//}

//int main() {
//    int i = -20;
//    unsigned int j = 10;
//
//    printf("%d\n", i + j);
//    return 0;
//}

//#include <Windows.h>
//int main()
//{
//    unsigned int i;
//    for (i = 9; i >= 0; i--) {
//        printf("%u\n", i);
//        Sleep(1000);//休眠1000毫秒
//    }
//
//    return 0;
//}
//#include <string.h>
//int main() {
//    char a[1000];
//    int i;
//
//    for (i = 0; i < 1000; i++) {
//        a[i] = -1 - i;
//    }
//    //
//    //arr[i] --> char  -128~127
//    //-1 -2 -3 -4 ... -1000
//    //-1 -2 ... -128 127 126 125 .. 3 2 1 0 -1 ...
//    printf("%d", strlen(a));//255
//    //strlen 是求字符串的长度，关注的是字符串中'\0'（数字0）之前出现多少字符
//
//    return 0;
//}

//unsigned char i = 0;
//int main() {
//    for (i = 0; i <= 255; i++) {
//        printf("hello world\n");
//    }
//    return 0;
//}

//#include <string.h>
//int main() {
//    //int len = strlen("abcdef");
//    //printf("%d\n", len);
//    //size_t -> unsigned int(32位4B)/unsigned long long(64位8B)
//    //
//    if (strlen("abc") - strlen("abcdef") >= 0)
//        printf(">\n");
//    else
//        printf("<\n");
//
//    return 0;
//}

//#include <string.h>
//int main() {
//	int ret = (strlen("abc") - strlen("abcdef"));
//
//	printf("%d\n", ret);
//	printf("%u\n", ret);
//
//	return 0;
//}

//int main() {
//    int n = 9;
//    float* pFloat = (float*)&n;
//
//    printf("n的值为: %d\n", n);
//    printf("*pFloat的值为: %f\n", *pFloat);
//
//    *pFloat = 9.0;
//    printf("n的值为: %d\n", n);
//    printf("*pFloat的值为: %f\n", *pFloat);
//
//    return 0;
//}

//int main() {
//    int n = -9;
//    //10000000 00000000 00000000 00001001 - 原码
//    //11111111 11111111 11111111 11110110 - 反码
//    //11111111 11111111 11111111 11110111 - 补码
//
//    float* pFloat = (float*)&n;
//
//    printf("n的值为: %d\n", n);
//    printf("*pFloat的值为: %f\n", *pFloat);
//
//    *pFloat = -9.0;
//    //1 10000010 00100000000000000000000 - -9
//    printf("n的值为: %d\n", n);
//    printf("*pFloat的值为: %f\n", *pFloat);
//
//    return 0;
//}

////x86死循环
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//int my_strlen(char* p) {
//	int count = 0;
//	while (*p) {
//		p++;
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	char arr[] = "hihao shijie";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//
//	return 0;
//}

//#include <assert.h>
//char* my_strcpy(char* p2, char* p1) {
//	char* p = p2;
//	assert(p1);
//	assert(p2);
//	while (*p2++ = *p1++);
//	return p;
//}
//
//int main() {
//	char arr1[] = "hihao";
//	char arr2[10];
//	my_strcpy(arr2, arr1);
//	printf("%s\n%s\n", arr1, arr2);
//
//	return 0;
//}

//void odd_even(int* p, int len) {
//	int odd[len];//存放奇数
//	int even[len];//存放偶数
//	int i = 0;
//	int j = 0;//用于前进和存储odd数组长度
//	int k = 0;//用于前进和存储even数组长度
//
//	for (i = 0; i < len; i++) {
//		//奇数判断条件
//		if (*(p + i) % 2 != 0) {
//			odd[j] = *(p + i);
//			j++;
//		}
//		else {
//			even[k] = *(p + i);
//			k++;
//		}
//	}
//	//实现把odd和even数组合并
//		i = 0;
//		int x = j;
//		int y = k;
//		for (j = 0; j < x; j++) {
//			*(p + i++) = odd[j];
//		}
//		for (k = 0; k < y; k++) {
//			*(p + i++) = even[k];
//		}
//}
//
//int main() {
//	int n = 0;
//	printf("请输入数组的长度\n");
//	scanf("%d", &n);
//	int arr[n];
//	int i = 0;
//	printf("请输入数组->");
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int len = sizeof(arr) / sizeof(arr[0]);
//	odd_even(arr, len);//实现奇数在前偶数在后
//	for (i = 0; i < len; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}

//void odd_even(int* p, int len) {
//    int left = 0;   // 左指针：找偶数
//    int right = len - 1; // 右指针：找奇数
//
//    while (left < right) {
//        // 左指针找偶数（遇到奇数就后移）
//        while (left < right && p[left] % 2 != 0) {
//            left++;
//        }
//        // 右指针找奇数（遇到偶数就前移）
//        while (left < right && p[right] % 2 == 0) {
//            right--;
//        }
//        // 交换奇偶元素
//        if (left < right) {
//            int temp = p[left];
//            p[left] = p[right];
//            p[right] = temp;
//        }
//    }
//}
//left < right && 条件防止越界访问

//void odd_even(int arr[], int sz) {
//    int left = 0;
//    int right = sz - 1;
//
//    while (left < right) {
//        //从左向右找一个偶数，停下来
//        while (left < right && arr[left] % 2 == 1) {
//            left++;
//        }
//        //从右向左找一个奇数，停下来
//        while (left < right && arr[right] % 2 == 0) {
//            right--;
//        }
//        //交换奇数和偶数
//        if (left < right) {
//            int tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//            left++;
//            right--;
//        }
//    }
//}
////left < right && 条件防止越界访问

//int main() {
//	int arr[] = { 1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//    odd_even(arr, len);//实现奇数在前偶数在后
//	int i = 0;
//	for (i = 0; i < len; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}

// int main() {
// 	int x = 0;//arr1的数组元素个数
// 	int y = 0;//arr2的数组元素个数
// 	scanf("%d %d", &x, &y);
// 	int arr1[x];
// 	int arr2[y];
// 	int arr[x + y];//将arr1 arr2合并到arr
//
// 	int i = 0;
// 	int j = 0;
// 	for (i = 0; i < x; i++) {
// 		scanf("%d", &arr1[i]);
// 	}
// 	for (i = 0; i < y; i++) {
// 		scanf("%d", &arr2[i]);
// 	}
// 	//合并·
//     i = 0;
// 	for (j = 0; j < x; j++) {
// 		arr[i++] = arr1[j];
// 	}
// 	for (j = 0; j < y; j++) {
// 		arr[i++] = arr2[j];
// 	}
// 	//冒泡排序
// 	for (j = 0; j < x + y - 1; j++) {
// 		for (i = 0; i < x + y - j - 1; i++) {
// 			if (arr[i] > arr[i + 1]) {
// 				int tmp = arr[i];
// 				arr[i] = arr[i + 1];
// 				arr[i + 1] = tmp;
// 			}
// 		}
// 	}
// 	for (i = 0; i < x + y; i++) {
// 		printf("%d ", arr[i]);
// 	}
//
// 	return 0;
// }

int main() {

    return 0;
}
111
int main() {
    return 0;
}