#define _CRT_SECURE_NO_WARNINGS 1

// 一般使用方式
//include<stdio.h>
//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    *pc = 'w';
//    return 0;
//}
//
//
////另外一种使用方式
//int main()
//{
//    char* pstr = "hello bit.";//这里是把一个字符串放到pstr指针变量里了吗？
//    printf("%s\n", pstr);
//    return 0;
//}
//本质是把字符串 hello bit.首字符的地址放到了pstr中。


//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");//数组名是数组首元素的地址
//	else
//		printf("str1 and str2 are not same\n");// str1 和 str2 是两个独立的数组 开辟不同的空间  所以地址也不会相同 两者不相同
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");// str3和str4是常量字符串 不能修改 所以他们使用的空间是相同的
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//使用指针数组模拟实现二维数组
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };//arr1 - int*
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	//指针数组
//	int* arr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组名的理解
//数组名是数组首元素的地址
//有2个例外：
//1. sizeof(数组名)，这里的数组名不是数组首元素的地址，数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//2. &数组名，这里的数组名表示整个数组， &数组名取出的是整个数组的地址
// 除此之外，所有的地方的数组名都是数组首元素的地址

//int(*p)[10];
///*解释：p先和* 结合，说明p是一个指针变量，然后指着指向的是一个大小为10个整型的数组。所以p是一个
//指针，指向一个数组，叫数组指针。*/
////这里要注意：[]的优先级要高于*号的，所以必须加上（）来保证p先和*结合

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//
//	printf("%p\n", arr+1);//
//
//	printf("%p\n", &arr[0]);//
//	printf("%p\n", &arr[0]+1);//
//
//	printf("%p\n", &arr);//
//	printf("%p\n", &arr+1);//
//
//	
//	return 0;
//}

//对于数组名来说
//&数组名得到的是数组的地址

//&arr 表示的是数组的地址，而不是数组首元素的地址。（细细体会一下）
//数组的地址 + 1，跳过整个数组的大小，所以 & arr + 1 相对于 & arr 的差值是40.

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//*&arr --> arr
//	int i = 0;
//	for (i = 0; i < 10; ++i)
//	{
//		//printf("%d ", *((*p) + i));
//		printf("%d ", (*p)[i]);// 对p解引用 就是 arr
//	}
//
//	return 0;
//}
//


//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	//arr是数组名 数组名表示数组首元素的地址
//	Print(arr, 3, 5);
//	return 0;
//}


//二维数组传参，形参是二维数组的形式

//void Print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	Print(arr, 3, 5);
//
//	return 0;
//}

//二维数组传参，形参是指针的形式

//void Print(int (*p)[5], int r, int c)// 接收一维数组的地址 
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//
//	//arr 是数组名，数组名表示数组首元素的地址,在这里表示二维数组的第一行一维数组的地址
//
//	Print(arr, 3, 5);
//		
//	return 0;
//}


////一维数组传参，形参的部分可以是数组，也可以是指针
//void test1(int arr[5], int sz)
//{}
//void test2(int* p, int sz)
//{}
//
//int main()
//{
//	int arr[5] = { 0 };
//	test1(arr, 5);
//	test2(arr, 5);
//	return 0;
//}
//
////二维数组传参，形参的部分可以是数组，也可以是指针
//
//void test3(char arr[3][5], int r, int c)
//{}
//
//void test4(char (*p)[5], int r, int c)
//{}
//int main()
//{
//	char arr[3][5] = {0};
//	test3(arr, 3, 5);
//	test4(arr, 3, 5);
//
//	return 0;
//}

//#include <stdio.h>
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}
//
//
//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//ok？
//{}
//void test(int arr[][5])//ok？
//{}
//void test(int* arr)//ok？
//{}
//void test(int* arr[5])//ok？
//{}
//void test(int(*arr)[5])//ok？
//{}
//void test(int** arr)//ok？
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int (*pa)[10] = &arr;
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//函数名是函数的地址
//	//&函数名也是函数的地址
//
//	int (*pf)(int, int) = &Add;//pf是函数指针变量
//	//int (*)(int, int) 是函数指针类型
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	// 两者相同
//	//函数名是函数的地址
//	//&函数名也是函数的地址
//
//	int (*pf)(int, int) = &Add;//pf是函数指针变量
//	//int (*)(int, int) 是函数指针类型
//	return 0;
//}

//void test(char* pc, int arr[10])
//{
//
//}
//
//int main()
//{
//	void (*pf)(char *, int [10]) = test;
//
//	return 0;
//}


//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int (*pf)(int, int) = &Add;
//	int (*pf)(int, int) = Add;
//
//	int r = Add(3, 5);
//	printf("%d\n", r);
//
//	int m = (*pf)(4, 5);
//
//	printf("%d\n", m);
//
//	return 0;
//}

////代码1
//(*(void (*)())0)();
////代码2
//void (*signal(int, void(*)(int)))(int);


//int main()
//{
//	//调用0地址处的函数
//	//1. 将0强制类型转换为void (*)()  类型的函数指针
//	//2. 调用0地址处的这个函数
//	( *( void (*)() )0 )();
//
//	return 0;
//}


int main()
{
	void (*signal(int, void(*)(int)))(int);

	//signal 是一个函数声明
	//signal 函数有2个参数，第一个参数的类型是int，第二个参数的类型是 void(*)(int) 函数指针类型
	//该函数指针指向的函数有一个int类型的参数，返回类型是void
	//signal 函数的返回类型也是void(*)(int) 函数指针类型,该函数指针指向的函数有一个int类型的参数，返回类型是void
	
	//简化：
	typedef void(*pf_t)(int);//注意函数指针的重命名是放在函数指针的位置
	pf_t signal(int, pf_t);

	return 0;
}

