#define _CRT_SECURE_NO_WARNINGS 1

// һ��ʹ�÷�ʽ
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
////����һ��ʹ�÷�ʽ
//int main()
//{
//    char* pstr = "hello bit.";//�����ǰ�һ���ַ����ŵ�pstrָ�����������
//    printf("%s\n", pstr);
//    return 0;
//}
//�����ǰ��ַ��� hello bit.���ַ��ĵ�ַ�ŵ���pstr�С�


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
//		printf("str1 and str2 are same\n");//��������������Ԫ�صĵ�ַ
//	else
//		printf("str1 and str2 are not same\n");// str1 �� str2 ���������������� ���ٲ�ͬ�Ŀռ�  ���Ե�ַҲ������ͬ ���߲���ͬ
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");// str3��str4�ǳ����ַ��� �����޸� ��������ʹ�õĿռ�����ͬ��
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//ʹ��ָ������ģ��ʵ�ֶ�ά����
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };//arr1 - int*
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	//ָ������
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

//�����������
//��������������Ԫ�صĵ�ַ
//��2�����⣺
//1. sizeof(������)�����������������������Ԫ�صĵ�ַ����������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
//2. &���������������������ʾ�������飬 &������ȡ��������������ĵ�ַ
// ����֮�⣬���еĵط�������������������Ԫ�صĵ�ַ

//int(*p)[10];
///*���ͣ�p�Ⱥ�* ��ϣ�˵��p��һ��ָ�������Ȼ��ָ��ָ�����һ����СΪ10�����͵����顣����p��һ��
//ָ�룬ָ��һ�����飬������ָ�롣*/
////����Ҫע�⣺[]�����ȼ�Ҫ����*�ŵģ����Ա�����ϣ�������֤p�Ⱥ�*���

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

//������������˵
//&�������õ���������ĵ�ַ

//&arr ��ʾ��������ĵ�ַ��������������Ԫ�صĵ�ַ����ϸϸ���һ�£�
//����ĵ�ַ + 1��������������Ĵ�С������ & arr + 1 ����� & arr �Ĳ�ֵ��40.

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
//		printf("%d ", (*p)[i]);// ��p������ ���� arr
//	}
//
//	return 0;
//}
//


//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	//arr�������� ��������ʾ������Ԫ�صĵ�ַ
//	Print(arr, 3, 5);
//	return 0;
//}


//��ά���鴫�Σ��β��Ƕ�ά�������ʽ

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

//��ά���鴫�Σ��β���ָ�����ʽ

//void Print(int (*p)[5], int r, int c)// ����һά����ĵ�ַ 
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
//	//arr ������������������ʾ������Ԫ�صĵ�ַ,�������ʾ��ά����ĵ�һ��һά����ĵ�ַ
//
//	Print(arr, 3, 5);
//		
//	return 0;
//}


////һά���鴫�Σ��βεĲ��ֿ��������飬Ҳ������ָ��
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
////��ά���鴫�Σ��βεĲ��ֿ��������飬Ҳ������ָ��
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
//void test(int arr[3][5])//ok��
//{}
//void test(int arr[][])//ok��
//{}
//void test(int arr[][5])//ok��
//{}
//void test(int* arr)//ok��
//{}
//void test(int* arr[5])//ok��
//{}
//void test(int(*arr)[5])//ok��
//{}
//void test(int** arr)//ok��
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
//	//һ��ָ��p����������
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
//	//�������Ǻ����ĵ�ַ
//	//&������Ҳ�Ǻ����ĵ�ַ
//
//	int (*pf)(int, int) = &Add;//pf�Ǻ���ָ�����
//	//int (*)(int, int) �Ǻ���ָ������
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
//	// ������ͬ
//	//�������Ǻ����ĵ�ַ
//	//&������Ҳ�Ǻ����ĵ�ַ
//
//	int (*pf)(int, int) = &Add;//pf�Ǻ���ָ�����
//	//int (*)(int, int) �Ǻ���ָ������
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

////����1
//(*(void (*)())0)();
////����2
//void (*signal(int, void(*)(int)))(int);


//int main()
//{
//	//����0��ַ���ĺ���
//	//1. ��0ǿ������ת��Ϊvoid (*)()  ���͵ĺ���ָ��
//	//2. ����0��ַ�����������
//	( *( void (*)() )0 )();
//
//	return 0;
//}


int main()
{
	void (*signal(int, void(*)(int)))(int);

	//signal ��һ����������
	//signal ������2����������һ��������������int���ڶ��������������� void(*)(int) ����ָ������
	//�ú���ָ��ָ��ĺ�����һ��int���͵Ĳ���������������void
	//signal �����ķ�������Ҳ��void(*)(int) ����ָ������,�ú���ָ��ָ��ĺ�����һ��int���͵Ĳ���������������void
	
	//�򻯣�
	typedef void(*pf_t)(int);//ע�⺯��ָ����������Ƿ��ں���ָ���λ��
	pf_t signal(int, pf_t);

	return 0;
}

