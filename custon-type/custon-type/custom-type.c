#define _CRT_SECURE_NO_WAENINGS 1


//struct tag
//{
//	member - list;
//}variable - list;

//描述一个学生
//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//}；//分号不能丢


////匿名结构体类型
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


//代码1
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
////可行否？
//如果可以，那sizeof(struct Node)是多少？



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
//}p1; //声明类型的同时定义变量p1
//struct Point p2; //定义结构体变量p2
////初始化：定义变量的同时赋初值。
//struct Point p3 = { x, y };
//struct Stu        //类型声明
//{
//	char name[15];//名字
//	int age;      //年龄
//};
//struct Stu s = { "zhangsan", 20 };//初始化
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //结构体嵌套初始化
//struct Node n2 = { 20, {5, 6}, NULL };//结构体嵌套初始化

#include<stdio.h>
struct SN
{
	char c;
	int i;
}sn1 = { 'q', 100 }, sn2 = {.i=200, .c='w'};//全局变量

struct S
{
	double d;
	struct SN sn;
	int arr[10];
};

int main()
{
	struct SN sn3, sn4;//局部变量
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