#define _CRT_SECURE_NO_WAENINGS 1


//struct tag
//{
//	member - list;
//}variable - list;

//����һ��ѧ��
//struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	char id[20];//ѧ��
//}��//�ֺŲ��ܶ�


////�����ṹ������
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;


//����1
//#include<stdio.h>
//struct Node
//{
//	int data;
//	struct Node next;
//};
//int main()
//{
//	printf("%d", sizeof(struct Node));
//}
////���з�
//������ԣ���sizeof(struct Node)�Ƕ��٣�



//struct Node
//{
//	int data;
//	struct Node* next;
//};

//typedef struct
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	Node n = { 0 };
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//}p1; //�������͵�ͬʱ�������p1
//struct Point p2; //����ṹ�����p2
////��ʼ�������������ͬʱ����ֵ��
//struct Point p3 = { x, y };
//struct Stu        //��������
//{
//	char name[15];//����
//	int age;      //����
//};
//struct Stu s = { "zhangsan", 20 };//��ʼ��
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //�ṹ��Ƕ�׳�ʼ��
//struct Node n2 = { 20, {5, 6}, NULL };//�ṹ��Ƕ�׳�ʼ��

#include<stdio.h>
struct SN
{
	char c;
	int i;
}sn1 = { 'q', 100 }, sn2 = {.i=200, .c='w'};//ȫ�ֱ���

struct S
{
	double d;
	struct SN sn;
	int arr[10];
};

int main()
{
	struct SN sn3, sn4;//�ֲ�����
	printf("%c %d\n", sn2.c, sn2.i);
	struct S s = { 3.14, {'a', 99}, {1,2,3} };
	printf("%lf %c %d\n", s.d, s.sn.c, s.sn.i);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", s.arr[i]);
	}
	return 0;
}