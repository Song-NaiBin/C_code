#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

//int main()
//{
//	//���泣��
//	// 3,4 ������Щ����
//	//const -������ ����������������Ժ�����Ͳ��ɱ���,��Ȼ����˳����Ե��ǻ��Ǳ���
//	const int num = 4;
//	//num = 8; �ᱨ��
//	int arr[num] = {0}; //���� ����Ҫ���볣��
//	printf("%d\n", num);
//
//	return 0;
//}


//#define ����ı�ʶ������

#define max 10
//int main()
//{
//	int arr[max] = { 0 }; //��������ɹ�
//	printf("%d\n", max);
//	return 0;
// }

//4.ö�ٳ���
//ö�� -����һһ�о�
//�Ա��У�Ů
//��ԭɫ���죬�ƣ���
//ö�ٹؼ��� -enum
//enum Sex
//{
//	MALE,
//	FEMALE, //ö�ٴ����ĳ��������޸�ֵ
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE; //����ֵ0  ������s��ֵ���Ը��൱�ڱ���
//	enum Sex n = FEMALE;
//	printf("%d", s);
//	int arr[FEMALE] = { 0 };
//	return 0;
//}

//int main()
//{
//	"abcdef";
//	"hello bin";
//	"";//���ַ���
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
//	//"abc"--'a' 'b' 'c' '\0' \0�ַ����Ľ�����־  ����ֵҲ��0
//
//	char arr2[] = { 'a','b','c' }; //��Ҫ���0���ܱ��ֺ�����������һ��
//	printf("%s\n", arr);
//	printf("%s\n", arr2);
// strlen���������� #including <string.h> ��ͷ�ļ���
//	printf("%d\n", strlen(arr)); //�����3
//	printf("%d\n", strlen(arr2)); //string length �����ַ����ĳ��� ��Ϊû��\0������־ ���Է���ֵ�����ֵ
//	printf("\a\a\a");
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\170');
//	printf("%d\n", strlen("\170\780"));  //����ת���ַ����8����ضϣ���Ϊ7�ǰ˽���������
//	printf("%d\n", strlen("\170\710")); //719���ַ���Χ̫���˻ᱨ��
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("��Ҫ�ƺ�ѧϰ��\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//
//	return 0;
//}