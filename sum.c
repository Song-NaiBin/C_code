#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����һ���ṹ��
//struct Book
//{
//	char name[20];
//	short price;
//	
//};
//int main()
//{
//	struct Book b1 = { "C���Գ������",40 };
//	struct Book* pb = &b1; //����ṹָ��
//	printf("%s\n", (*pb).name); //���ýṹ��ָ���ӡ����
//	printf("%s\n", pb->name); //���ָ��򵥵�ָ�뷽ʽ
//	printf("����=%s �۸�=%d\n", b1.name, b1.price); //��ӡ����ṹ�����Ϣ
//	b1.price = 15; //�޸Ľṹ����ĳ�Ա������
//	printf("��ļ۸�%d\n", b1.price);
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	printf("����������: ");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//����һ�����Ľ׳�
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
//	printf("������Ҫ����׳˵�����");
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
// ��һ����������С˳��������źõ�������
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

//�ڶ�ά����a��ѡ����������������ӵ�����b��
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
//����������ҵ����ư���ĸ˳�����������
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

//����ƽ���Ľ׳�
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
//	printf("��������������:\n");
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

//ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	pa = 20;


//	return 0;
//}

//����һ��ѧ��-һЩ����
//����
//����
//�绰
//�ձ�


//void He(n)
//{
//	int s = 0;
//	s = n * n;
//	printf("%d", s);
//}

//struct �ṹ��ؼ��� Stu - �ṹ���ǩ struct Stu �ṹ������
//����һ���ṹ������


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
//	struct T t1 = { "��",{21,'n',"hello world",3.14},NULL}; //Ƕ�׽ṹ���ʼ��
//}

//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3 ������ȫ�ֵĽṹ�����
typedef struct Stu  //typedef ��һ���������������
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu; //Stu �൱��һ����������

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
	//struct Stu s; //�����ṹ����� ���Ǿֲ���
	Stu s1 = { "����",20,"17872112321","��" };
	print(s1);  //�ṹ�崫ֵ
	print2(&s1); //�ṹ�崫ַ
	//�������ε�ʱ�򣬲�����Ҫѹջ�ġ�������ε�ʱ���Ǹ��ṹ�壬Ҫ�ǽṹ�������󣬽ṹ��ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�
	//���ۣ� �ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
	return 0;
}