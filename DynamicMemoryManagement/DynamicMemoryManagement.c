#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int val = 20;//在栈空间上开辟四个字节
//char arr[10] = { 0 };//在栈空间上开辟10个字节的连续空间

//void* malloc(size_t size);

//如果开辟成功，则返回一个指向开辟好空间的指针。
//如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
//返回值的类型是 void* ，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定。
//如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器。

//void free(void* ptr);

//#include<stdlib.h>
//int main()
//{
//	//int arr[10]
//	int* p = (int*)malloc(40);//强制转化为int*
//	if (p == NULL)
//	{
//		perror("malloc");//打印开辟失败的原因
//		return 1;
//	}
//	//开辟成功
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	  printf("%d\n", *(p + i));
//	}
//
//	free(p);//释放动态开辟的内存
//	p == NULL;//将p置为空指针 防止变为野指针
//	return 0;
//}
//


//void* calloc(size_t num, size_t size);

//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//打印数据
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//void* realloc(void* ptr, size_t size);


//ptr 是要调整的内存地址
//size 调整之后新大小
//返回值为调整之后的内存起始位置。
//这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到 新 的空间。
//realloc在调整内存空间的是存在两种情况：
//情况1：原有空间之后有足够大的空间
//情况2：原有空间之后没有足够大的空间

//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//初始化为1~10
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		p[i] = i + 1;
//	}
//	//增加一些空间
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//打印数据
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}
