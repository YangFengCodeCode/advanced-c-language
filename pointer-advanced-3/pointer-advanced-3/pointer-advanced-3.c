#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(arr));//��������������sizeof�ڲ��������arr��ʾ�������飬���������������Ĵ�С����λ���ֽ�,�ܹ�16���ֽ�
//	printf("%d\n", sizeof(arr + 0));//arr��ʾ������Ԫ�صĵ�ַ��arr+0����������Ԫ�صĵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(*arr));//arr��ʾ������Ԫ�صĵ�ַ,*arr������Ԫ�أ���С4���ֽ�
//	printf("%d\n", sizeof(arr[1]));//arr[1]���ǵڶ���Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(&arr));//&arr������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ���ǵ�ַ����4/8
//	printf("%d\n", sizeof(&arr + 1));//&arr + 1���������������ĵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ����4/8���ֽ�
//
//	return 0;
//}


//#include <string.h>
//#include<stdio.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//��������������sizeof�ڲ��������arr��ʾ�������飬���������������Ĵ�С����λ���ֽ�,�ܹ�6���ֽ�
//	printf("%d\n", sizeof(arr + 0));//arr��ʾ������Ԫ�صĵ�ַ��arr+0����������Ԫ�صĵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(*arr));//arr��ʾ������Ԫ�صĵ�ַ,*arr������Ԫ�أ���С1���ֽ�
//	printf("%d\n", sizeof(arr[1]));//arr[1]���ǵڶ���Ԫ�أ���С��1���ֽ�
//	printf("%d\n", sizeof(&arr));//&arr������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ���ǵ�ַ����4/8
//	printf("%d\n", sizeof(&arr + 1));//&arr + 1���������������ĵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ����4/8���ֽ�
//
//	// strlen �ǿ⺯��
//	//���ַ������ȵ� ͳ�Ƶ����ַ����� \0 ֮ǰ���ַ��ĸ���  ���û�� \0 �ͻ�һֱ������
//	printf("%d\n", strlen(arr));//��Ϊ�ַ�����arr��û��\0�����������ַ������ȵ�ʱ�򣬻�һֱ�����ң������Ľṹ�������ֵ
//    printf("%d\n", strlen(arr + 0));//arr + 0����Ԫ�صĵ�ַ���͵�һ��һ����Ҳ�����ֵ
//    printf("%d\n", strlen(*arr));//err, arr��������Ԫ�صĵ�ַ��*arr����������Ԫ�أ�����'a'- 97
////strlen���������Ĳ�����Ҫ��һ����ַ�������Ǵ��ݵ���'a'ʱ��'a'��ASCII��ֵ��97���Ǿ��ǽ�97��Ϊ��ַ����
////strlen�ͻ��97�����ַ��ʼͳ���ַ������ȣ���ͷǷ������ڴ���
//    printf("%d\n", strlen(arr[1]));//err
//    printf("%d\n", strlen(&arr));//&arr������ĵ�ַ,����ĵ�ַ��������Ԫ�صĵ�ַ��ֵ��һ���ģ���ô���ݸ�strlen��������Ȼ�Ǵ�����ĵ�һ��Ԫ�ص�λ�ÿ�ʼ����ͳ��
//
//    printf("%d\n", strlen(&arr + 1));//���ֵ
//    printf("%d\n", strlen(&arr[0] + 1));//&arr[0] + 1�ǵڶ���Ԫ�صĵ�ַ�����Ҳ�����ֵ
//
//	return 0;
//}
//


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";//[a b c d e f \0]
//	
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6 
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//arr + 0����Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));//*arr��ʵ������Ԫ��,1���ֽ�
//	//*arr--> *(arr+0) -- arr[0]
//	printf("%d\n", sizeof(arr[1]));//arr[1]�ǵڶ���Ԫ�أ�1���ֽ�
//	printf("%d\n", sizeof(&arr));//&arr������ĵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//&arr + 1������һ������ĵ�ַ��4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//&arr[0] + 1�ǵڶ���Ԫ�صĵ�ַ 4/8
//
//
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";    
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	printf("%d\n", sizeof(p));//p��һ��ָ�����
//	//��С����4/8
//
//	printf("%d\n", sizeof(p + 1));//p+1��'b'�ĵ�ַ���ǵ�ַ��С����4/8���ֽ�
//	
//	printf("%d\n", sizeof(*p));//*p ����'a'������1���ֽ�
//	printf("%d\n", sizeof(p[0]));//p[0]--> *(p+0) --> *p  1���ֽ�
//
//	printf("%d\n", sizeof(&p));//4/8
//	//&p -- char**
//	printf("%d\n", sizeof(&p + 1));//
//	//4/8
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 �� &p[0] + 1�õ���'b'�ĵ�ַ 
//
//	return 0;
//}
//
//


//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//3*4*4 = 48
//	printf("%d\n", sizeof(a[0][0]));//4
//
//	printf("%d\n", sizeof(a[0]));//a[0]�ǵ�һ�����һά�����������
//	//���������ǵ�������sizeof�ڲ��ˣ����������������Ĵ�С����С��16���ֽ�
//
//	printf("%d\n", sizeof(a[0] + 1));//?
//	//a[0]��Ϊ��һ�е���������û�е�������sizeo�ڲ���û��&
//	//a[0]��ʾ������Ԫ�صĵ�ַ��Ҳ����a[0][0]�ĵ�ַ
//	//����a[0]+1�ǵ�һ�еڶ���Ԫ�صĵ�ַ���ǵ�ַ����4/8���ֽ�
//	//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	//������Ǿ��ǵ�һ�е�2��Ԫ�صĴ�С
//
//	printf("%d\n", sizeof(a + 1));//4 / 8
//	//a��������Ԫ�صĵ�ַ���ǵ�һ�еĵ�ַ int(*)[4]
//	//a+1 ���ǵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(a + 1)));//16
//	//*(a+1) --> a[1] -> sizeof(*(a+1))->sizeof(a[1]) ������ǵڶ��еĴ�С
//	//a+1 --> �ǵڶ��еĵ�ַ��int(*)[4]
//	//*(a+1) ���ʵĵڶ��е�����
//
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	//&a[0]�ǵ�һ�еĵ�ַ int(*)[4]
//	//&a[0]+1 �ǵڶ��еĵ�ַ int(*)[4]
//
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 ������ǵڶ��еĴ�С
//
//	printf("%d\n", sizeof(*a));//������ǵ�һ�еĴ�С-16
//	//a��������Ԫ�صĵ�ַ�����ǵ�һ�еĵ�ַ
//	//*a ���ǵ�һ��
//	//*a --> *(a+0) --> a[0]
//
//	printf("%d\n", sizeof(a[3]));//16
//	//a[3]--> int [4]
//	//
//	return 0;
//}


//���ʽ����2�����ԣ�
//1. ֵ����   9
//2. ��������
//s = a + 2 --> short
//#include<stdio.h>
//int main() 
//{
//	int a = 7;
//	short s = 4; 
//	printf("%d\n", sizeof(s = a + 2));//short 2
//
//	printf("%d\n", s);//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//
//	return 0;
//}


////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//#include<stdio.h>
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p = (struct Test*)0x100000;
//
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);// +1����һ���ṹ�壨20���ֽڣ� 0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//ǿ��ת��Ϊ�޷������� ֱ��+1  0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);// ǿ��ת��Ϊ�޷�������ָ��  ��1 ����4���ֽ� 0x100004
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);// 4 2000000
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);//1
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p, %d\n", 
//		&p[4][2] - &a[4][2], 
//		&p[4][2] - &a[4][2]);//-4
//	//10000000000000000000000000000100  -4��ԭ��
//	//11111111111111111111111111111011  ����
//	//1111 1111 1111 1111 1111 1111 1111 1100  ����
//	//F    F    F    F    F    F    F    C
//	//0xFFFFFFFC
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


#include <stdio.h>
int main()
{
	char* a[] = { "work","at","alibaba" };//ָ������ ÿ��Ԫ��Ϊָ�� ���Ժ����ö���ָ�����

	char** pa = a;// a ���׵�ַΪ work
	
	pa++;//ָ��+1 ���� at
	
	printf("%s\n", *pa);// ������ Ϊat
	return 0;
}

