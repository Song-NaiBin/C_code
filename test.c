#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

//int main()
//{
//	//字面常量
//	// 3,4 比如这些数字
//	//const -常属性 给变量加上这个属性后变量就不可变了,虽然添加了常属性但是还是变量
//	const int num = 4;
//	//num = 8; 会报错
//	int arr[num] = {0}; //报错 这里要输入常量
//	printf("%d\n", num);
//
//	return 0;
//}


//#define 定义的标识符常量

#define max 10
//int main()
//{
//	int arr[max] = { 0 }; //定义数组成功
//	printf("%d\n", max);
//	return 0;
// }

//4.枚举常量
//枚举 -可以一一列举
//性别：男，女
//三原色：红，黄，蓝
//枚举关键字 -enum
//enum Sex
//{
//	MALE,
//	FEMALE, //枚举创建的常量不能修改值
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE; //它的值0  创建的s的值可以改相当于变量
//	enum Sex n = FEMALE;
//	printf("%d", s);
//	int arr[FEMALE] = { 0 };
//	return 0;
//}

//int main()
//{
//	"abcdef";
//	"hello bin";
//	"";//空字符串
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	char arr[] = "abc";
//	//"abc"--'a' 'b' 'c' '\0' \0字符串的结束标志  它的值也是0
//
//	char arr2[] = { 'a','b','c' }; //需要添加0才能保持和上面输出结果一致
//	printf("%s\n", arr);
//	printf("%s\n", arr2);
// strlen函数包含在 #including <string.h> 的头文件中
//	printf("%d\n", strlen(arr)); //结果是3
//	printf("%d\n", strlen(arr2)); //string length 计算字符串的长度 因为没有\0结束标志 所以返回值是随机值
//	printf("\a\a\a");
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\170');
//	printf("%d\n", strlen("\170\780"));  //它的转义字符会从8这里截断，因为7是八进制最大的数
//	printf("%d\n", strlen("\170\710")); //719的字符范围太大了会报错
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("你要浩浩学习吗\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//
//	return 0;
//}