#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}

//void test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p不再指向动态内存的起始位置
//}


//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//ok?
//}

//void test()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p不再指向动态内存的起始位置
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//重复释放
//}

//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	while (1);
//}


//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}

//void GetMemory(char** p)//用二级指针接受一级指针的地址
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//传地址
//	strcpy(str, "hello world");
//	printf(str);
//	//释放
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	static char p[] = "hello world";//加static 
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("hehe\n");
//	printf("%d\n", *p);
//
//	return 0;
//}

//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
//
//
//typedef struct st_type
//{
//	int i;
//	int a[];//柔性数组成员
//}type_a;

//结构中的柔性数组成员前面必须至少一个其他成员。
//sizeof 返回的这种结构大小不包括柔性数组的内存。
//包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应
//柔性数组的预期大小。


//code1
//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
//printf("%d\n", sizeof(type_a));//输出的是4

//struct S
//{
//	int n;
//	int arr[0];//柔性数组
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i + 1;
//	}
//
//	//空间不够，需要增容
//	struct S* ptr = realloc(ps, sizeof(struct S) + 60);
//	if (ptr == NULL)
//	{
//		perror("realloc");
//		return 1;
//	}
//	ps = ptr;
//	ps->n = 15;
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d\n", ps->arr[i]);
//	}
//
//	//释放
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}



//struct S
//{
//	int n;
//	int* arr;
//};
//
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		perror("malloc->ps");
//		return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);//1 2 3 4 5 6 7 8 9 10
//	if (ps->arr == NULL)
//	{
//		perror("malloc->arr");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i + 1;
//	}
//
//	//调整
//	int* ptr = (int*)realloc(ps->arr, 60);
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//打印
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d\n", ps->arr[i]);
//	}
//
//	//释放
//	free(ps->arr);
//	ps->arr = NULL;
//
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//上述 代码1 和 代码2 可以完成同样的功能，但是 方法1 的实现有两个好处： 第一个好处是：方便内存释放
//如果我们的代码是在一个给别人用的函数中，你在里面做了二次内存分配，并把整个结构体返回给用户。用
//户调用free可以释放结构体，但是用户并不知道这个结构体内的成员也需要free，所以你不能指望用户来发
//现这个事。所以，如果我们把结构体的内存以及其成员要的内存一次性分配好了，并返回给用户一个结构体
//指针，用户做一次free就可以把所有的内存也给释放掉。
//第二个好处是：这样有利于访问速度.
//连续的内存有益于提高访问速度，也有益于减少内存碎片。（其实，我个人觉得也没多高了，反正你跑不了
//要用做偏移量的加法来寻址）