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
//	//int (*pf1)(int, int) = Add;//����ָ��
//	//int (*pf2)(int, int) = Sub;
//	//int (*pf3)(int, int) = Mul;
//	//int (*pf4)(int, int) = Div;
//	//����ָ������
//	int (*pfArr[4])(int, int) = {Add, Sub, Mul, Div};// pfArr �Ⱥ�[]��� Ϊ���� �����������int (*)(int, int)���͵�ָ��
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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������������������>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("������������������>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������������������>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("������������������>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
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
//	//����ָ�������ʹ�� - ת�Ʊ�
//	int (*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//	//                             0     1    2    3    4
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
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
//	printf("������������������");
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
//		printf("��ѡ��>");
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
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//ð������
//��һ����������Ҫ����Ϊ����
//1. �������ڵ�Ԫ�رȽ�
//2. ���������˳��ͽ���
//
//��ǰ�Ĵ���ֻ�ʺ�����������
//

//#include<stdio.h>
//	void bubble_sort(int arr[], int sz)
//	{
//		int i = 0;
//		//����
//		for (i = 0; i < sz - 1; i++)
//		{
//			//һ�˱Ƚ�
//			//��������Ԫ�رȽ�
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

//void qsort(void* base, //ָ������Ҫ���������ĵ�һ��Ԫ��
//           size_t num, //�����Ԫ�ظ���
//           size_t size,//һ��Ԫ�صĴ�С����λ���ֽ�
//           int (*cmp)(const void*, const void*)//����ָ������ - �������ָ��ָ��ĺ������ܹ��Ƚ�baseָ�������е�����Ԫ��
//          );
//
//void* ��ָ�� - �޾������͵�ָ��
//void* ���͵�ָ����Խ����������͵ĵ�ַ
//
//�������͵�ָ���ǲ���ֱ�ӽ����ò�����
//Ҳ����ֱ�ӽ���ָ�������


//#include <stdlib.h>
//#include<stdio.h>
//int cmp_int(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);// �� p1 �� p2 ǿ������ת��Ϊ int * ����  �ٽ��������
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
////����qsort������������
//test1()
//{
//	int arr[10] = { 3,1,5,2,4,7,9,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Ĭ���������
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//
////����qsort����ṹ������
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


void Swap(char* buf1, char* buf2, int size)//����arr[j],arr[j+1]������Ԫ��
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
	//����
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		//һ���ڲ��ȽϵĶ���
		for (j = 0; j < num - 1 - i; j++)
		{
			//������Ҫ����cmp����>0������
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)//����Ԫ�رȽϣ���Ҫ��arr[j],arr[j+1]�ĵ�ַҪ����cmp
			{
				//����
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

//����bubble_sort ����ṹ������
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


//����bubble_sort ������������
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