#define _CRT_SECURE_NO_WARNINGS 1
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	//int (*pf1)(int, int) = Add;//函数指针
//	//int (*pf2)(int, int) = Sub;
//	//int (*pf3)(int, int) = Mul;
//	//int (*pf4)(int, int) = Div;
//	//函数指针数组
//	int (*pfArr[4])(int, int) = {Add, Sub, Mul, Div};// pfArr 先和[]结和 为数组 数组的内容是int (*)(int, int)类型的指针
//	//
//	return 0;
//}

//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("*****  1.add  2.sub  ******\n");
//	printf("*****  3.mul  4.div  ******\n");
//	printf("*****  0.exit        ******\n");
//	printf("***************************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("*****  1.add  2.sub  ******\n");
//	printf("*****  3.mul  4.div  ******\n");
//	printf("*****  0.exit        ******\n");
//	printf("***************************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	//函数指针数组的使用 - 转移表
//	int (*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//	//                             0     1    2    3    4
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("选择错误，请重新选择\n");
//		}
//	} while (input);
//	
//	return 0;
//}


//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("*****  1.add  2.sub  ******\n");
//	printf("*****  3.mul  4.div  ******\n");
//	printf("*****  0.exit        ******\n");
//	printf("***************************\n");
//}
//
//void Calc(int (*pf) (int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数：");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//冒泡排序
//有一组整数，需要排序为升序
//1. 两两相邻的元素比较
//2. 如果不满足顺序就交换
//
//当前的代码只适合于整型数据
//

//#include<stdio.h>
//	void bubble_sort(int arr[], int sz)
//	{
//		int i = 0;
//		//趟数
//		for (i = 0; i < sz - 1; i++)
//		{
//			//一趟比较
//			//两两相邻元素比较
//			int j = 0;
//			for (j = 0; j < sz - 1 - i; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//		}
//	}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void qsort(void* base, //指向了需要排序的数组的第一个元素
//           size_t num, //排序的元素个数
//           size_t size,//一个元素的大小，单位是字节
//           int (*cmp)(const void*, const void*)//函数指针类型 - 这个函数指针指向的函数，能够比较base指向数组中的两个元素
//          );
//
//void* 的指针 - 无具体类型的指针
//void* 类型的指针可以接收任意类型的地址
//
//这种类型的指针是不能直接解引用操作的
//也不能直接进行指针运算的


//#include <stdlib.h>
//#include<stdio.h>
//int cmp_int(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);// 把 p1 和 p2 强制类型转换为 int * 类型  再解引用相减
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
////测试qsort排序整型数据
//test1()
//{
//	int arr[10] = { 3,1,5,2,4,7,9,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//默认是升序的
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//
////测试qsort排序结构体数据
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//void test2()
//{
//	struct Stu arr[] = { {"zhangsan", 20}, {"lisi", 50},{"wangwu", 15} };
//	int sz = sizeof(arr) / sizeof(arr[0]); 
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//}
//
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//void test3()
//{
//	struct Stu arr[] = { {"zhangsan", 20}, {"lisi", 50},{"wangwu", 15} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	test1();
//	//test2();
//	//test3();
//
//	return 0;
//}
//
//


void Swap(char* buf1, char* buf2, int size)//交换arr[j],arr[j+1]这两个元素
{
	int i = 0;
	char tmp = 0;
	for (i = 0; i < size; i++)
	{
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int num, int size, int (*cmp)(const void*, const void*))
{
	int  i = 0;
	//趟数
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		//一趟内部比较的对数
		for (j = 0; j < num - 1 - i; j++)
		{
			//假设需要升序cmp返回>0，交换
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)//两个元素比较，需要将arr[j],arr[j+1]的地址要传给cmp
			{
				//交换
				Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}

}

struct Stu
{
	char name[20];
	int age;
};


int cmp_stu_by_age(const void* p1, const void* p2)
{
	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
}

//测试bubble_sort 排序结构体数据
//void test2()
//{
//	struct Stu arr[] = { {"zhangsan", 20}, {"lisi", 50},{"wangwu", 15} };
//	int sz = sizeof(arr) / sizeof(arr[0]); 
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//}

int cmp_stu_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}


void test3()
{
	struct Stu arr[] = { {"zhangsan", 20}, {"lisi", 50},{"wangwu", 15} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sizeof(struct Stu));
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}


//B
int cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}


//测试bubble_sort 排序整型数据
void test1()
{
	int arr[10] = { 3,1,5,2,4,7,9,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}
int main()
{
	//test1();
	//test2();
	test3();

	return 0;
}