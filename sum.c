#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//创建一个结构体
//struct Book
//{
//	char name[20];
//	short price;
//	
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计",40 };
//	struct Book* pb = &b1; //定义结构指针
//	printf("%s\n", (*pb).name); //利用结构体指针打印书名
//	printf("%s\n", pb->name); //这种更简单的指针方式
//	printf("书名=%s 价格=%d\n", b1.name, b1.price); //打印这个结构体的信息
//	b1.price = 15; //修改结构体里的成员的数据
//	printf("书的价格%d\n", b1.price);
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	printf("请输入天数: ");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	dafault:
//		break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//	return 0;
//}
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//    {
//         k++;
//         printf("hehe\n");
//    
//    }
//        
//    return 0;
//}
//计算一个数的阶乘
//int fun(n)
//{
//	int s = 1;
//	for(; n >= 1; n--)
//	{
//		s *= n;
//	}
//	return s;
//}
//int main()
//{
//	int num = 0;
//	int x;
//	printf("请输入要计算阶乘的数字");
//	scanf("%d", &num);
//	x=fun(num);
//	printf("%d", x);
//	return 0;
//}

//int main()
//{
//		
//	int i, a[10];
//	for (i = 0; i < 10;)
//		a[i++] = 2 * i + 1;
//	for (i = 0; i <= 9; i++)
//	{ 
//	printf("%d ", a[i]);
//	    printf("\n%d %d\n", a[5], a[5]);
//	}
//		
//	
//	return 0;
//}
//int main()
//{
//	int i, j, s = 0, average, v[3], a[5][3];
//	printf("input score\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &a[j][i]);
//			s = s + a[j][i];
//		}
//		v[i] = s / 5;
//	
//			s = 0;
//	}
//	average = (v[0] + v[1] + v[2]) / 3;
//	printf("math:%d\nc languag:%d\ndbase:%d\n", v[0], v[1], v[2]);
//	printf("total:%d\n", average);
//	return 0;
//}

//int main()
//{
//	int s;
//	char a[5] = "hello";
//	printf("%d", strlen(a));
//	return 0;
//}
//
//int main()
//{
//	char a[5];
//	gets(a);
//	printf("%s", a);
//	return 0;
//}
//int main()
//{
//	int i, j, p, q, s, n, a[11] = { 127,3,6,28,54,68,87,105,162,18 };
//	for (i = 0; i < 10; i++)
//	{
//		p = i; q = a[i];
//		for (j = i + 1; j < 10; j++)
//			if (q < a[j]) { p = j; q = a[j]; }
//		if (p != i)
//		{
//			s = a[i];
//			a[i] = a[p];
//			a[p] = s;
//		}
//		printf("%d ", a[i]);
//	}
//	printf("\ninput number:\n");
//	scanf("%d", &n);
//	for (i = 0; i < 10; i++)
//		if (n > a[i])
//		{
//			for (s = 9; s >= i; s--) a[s + 1] = a[s];
//			break;
//		}
//	a[i] = n;
//	for (i = 0; i <= 10; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}
// 把一个整数按大小顺序插入已排好的数组中
//int main()
//{
//	int i,j,s,q,tam,a[12] = { 168, 214, 3, 40, 56, 78, 90, 20, 77, 100 };
//	for (i = 0; i < 10; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (a[i] < a[j])
//			{
//				tam = a[i];
//				a[i] = a[j];
//				a[j] = tam;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\nintup number: ");
//	scanf("%d", &q);
//	for (i = 0; i < 10; i++)
//	{
//		if (q > a[i])
//		{
//			for (s=9; i < s; s--)
//			{
//				a[s + 1] = a[s];
//			}
//			a[i + 1] = a[i];
//			a[i] = q;
//			break;
//		}
//	}
//	for (i = 0; i < 11; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//在二维数组a中选出各行最大的数并添加到数组b中
//int main()
//{
//	int i,j, b[3],a[][4] = { 132,34,45,764,340,29839,458,32,44,11,56,34 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 1; j < 4; j++)
//		{
//			if (a[i][0] < a[i][j])
//			{
//				a[i][0] = a[i][j];
//			}
//		}
//		b[i] = a[i][0];
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("%d", a[0][0]);
//	return 0;
//}
//输入五个国家的名称按字母顺序排列输出。
//int main()
//{
//	char i, j, ct[5][20],bt[20];
//	printf("input country's name:\n");
//	scanf("%s%s%s%s%s", ct[0], ct[1], ct[2], ct[3], ct[4]);
//	for (i = 0; i < 5; i++)
//	{
//		for (j = i+1; j < 5;j++) 
//		{
//			if (ct[i] < ct[j])
//			{
//				strcpy(bt,ct[i]);
//				strcpy(ct[i],ct[j]);
//				strcpy(ct[j],bt);
//		   }
//		}
//		
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s ", ct[i]);
//	}
//	
//	/*puts(ct[0]);
//	puts(ct[1]);*/
//	return 0;
//}

//计算平方的阶乘
//long i, j, q, x ; s = 0, a, b;
//long f1(long n)
//{
//	long f2();
//	q = n * n;
//	j = f2(q);
//	return j;
//}
//long f2(long q)
//{
//	long x = 1;
//	for (i = 1; i <= q; i++)
//	{
//		x =x * i;
//	}
//	return x;
//}
//
//int main()
//{
//	printf("请输入两个整数:\n");
//	scanf("%d%d", &a, &b);
//	s = f1(a) + f1(b);
//	printf("%d", s);
//	return 0;
//}

//move(int n, int x, int y, int z)
//{
//	if (n == 1)
//		printf("%c-->%c\n", x, z);
//	else
//	{
//		move(n - 1, x, z, y);
//		printf("%c-->%c\n", x, z);
//		move(n - 1, y, x, z);
//	}
//}
//main()
//{
//	int h;
//	printf("\ninput number:\n");
//	
//		scanf("%d", &h);
//	printf("the step to moving %2d diskes:\n", h);
//	move(h, 'a', 'b', 'c');
//}

//指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	pa = 20;


//	return 0;
//}

//描述一个学生-一些数据
//名字
//年龄
//电话
//姓别


//void He(n)
//{
//	int s = 0;
//	s = n * n;
//	printf("%d", s);
//}

//struct 结构体关键字 Stu - 结构体标签 struct Stu 结构体类型
//定义一个结构体类型


//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct s s;
//	char* pc;
//};
//
//int main()
//{
//	struct T t1 = { "宋",{21,'n',"hello world",3.14},NULL}; //嵌套结构体初始化
//}

//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3 是三个全局的结构体变量
typedef struct Stu  //typedef 给一个数据类型起别名
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu; //Stu 相当于一个数据类型

void print(Stu song)
{
	printf("%s\n", song.name);
	printf("%d\n", song.age);
	printf("%s\n", song.tele);
	printf("%s\n", song.sex);
}
void print2(Stu* nai)
{
	printf("name:%s\n", nai->name);
	printf("age:%d\n", nai->age);
	printf("name:%s\n", nai->tele);
	printf("name:%s\n", nai->sex);
}
int main()
{
	//struct Stu s; //创建结构体变量 这是局部的
	Stu s1 = { "张三",20,"17872112321","男" };
	print(s1);  //结构体传值
	print2(&s1); //结构体传址
	//函数传参的时候，参数是要压栈的。如果传参的时候是个结构体，要是结构体对象过大，结构体压栈的系统开销比较大，所以会导致性能的下降
	//结论： 结构体传参的时候，要传结构体的地址
	return 0;
}