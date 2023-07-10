#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(arr));//数组名单独放在sizeof内部，这里的arr表示整个数组，计算的是整个数组的大小，单位是字节,总共16个字节
//	printf("%d\n", sizeof(arr + 0));//arr表示数组首元素的地址，arr+0还是数组首元素的地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(*arr));//arr表示数组首元素的地址,*arr就是首元素，大小4个字节
//	printf("%d\n", sizeof(arr[1]));//arr[1]就是第二个元素，大小是4个字节
//	printf("%d\n", sizeof(&arr));//&arr是数组的地址，但是数组的地址也是地址，是地址就是4/8
//	printf("%d\n", sizeof(&arr + 1));//&arr + 1是跳过整个数组后的地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址，是4/8个字节
//
//	return 0;
//}


//#include <string.h>
//#include<stdio.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//数组名单独放在sizeof内部，这里的arr表示整个数组，计算的是整个数组的大小，单位是字节,总共6个字节
//	printf("%d\n", sizeof(arr + 0));//arr表示数组首元素的地址，arr+0还是数组首元素的地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(*arr));//arr表示数组首元素的地址,*arr就是首元素，大小1个字节
//	printf("%d\n", sizeof(arr[1]));//arr[1]就是第二个元素，大小是1个字节
//	printf("%d\n", sizeof(&arr));//&arr是数组的地址，但是数组的地址也是地址，是地址就是4/8
//	printf("%d\n", sizeof(&arr + 1));//&arr + 1是跳过整个数组后的地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址，是4/8个字节
//
//	// strlen 是库函数
//	//求字符串长度的 统计的是字符串中 \0 之前的字符的个数  如果没有 \0 就会一直往后找
//	printf("%d\n", strlen(arr));//因为字符数组arr中没有\0，所以在求字符串长度的时候，会一直往后找，产生的结构就是随机值
//    printf("%d\n", strlen(arr + 0));//arr + 0是首元素的地址，和第一个一样，也是随机值
//    printf("%d\n", strlen(*arr));//err, arr是数组首元素的地址，*arr就是数组首元素，就是'a'- 97
////strlen函数参数的部分需要传一个地址，当我们传递的是'a'时，'a'的ASCII码值是97，那就是将97作为地址传参
////strlen就会从97这个地址开始统计字符串长度，这就非法访问内存了
//    printf("%d\n", strlen(arr[1]));//err
//    printf("%d\n", strlen(&arr));//&arr是数组的地址,数组的地址和数组首元素的地址，值是一样的，那么传递给strlen函数后，依然是从数组的第一个元素的位置开始往后统计
//
//    printf("%d\n", strlen(&arr + 1));//随机值
//    printf("%d\n", strlen(&arr[0] + 1));//&arr[0] + 1是第二个元素的地址。结果也是随机值
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
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//arr + 0是首元素的地址
//	printf("%d\n", sizeof(*arr));//*arr其实就是首元素,1个字节
//	//*arr--> *(arr+0) -- arr[0]
//	printf("%d\n", sizeof(arr[1]));//arr[1]是第二个元素，1个字节
//	printf("%d\n", sizeof(&arr));//&arr是数组的地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//&arr + 1是跳过一个数组的地址，4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//&arr[0] + 1是第二个元素的地址 4/8
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
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	printf("%d\n", sizeof(p));//p是一个指针变量
//	//大小就是4/8
//
//	printf("%d\n", sizeof(p + 1));//p+1是'b'的地址，是地址大小就是4/8个字节
//	
//	printf("%d\n", sizeof(*p));//*p 就是'a'，就是1个字节
//	printf("%d\n", sizeof(p[0]));//p[0]--> *(p+0) --> *p  1个字节
//
//	printf("%d\n", sizeof(&p));//4/8
//	//&p -- char**
//	printf("%d\n", sizeof(&p + 1));//
//	//4/8
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 ， &p[0] + 1得到是'b'的地址 
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
//	printf("%d\n", sizeof(a[0]));//a[0]是第一行这个一维数组的数组名
//	//数组名算是单独放在sizeof内部了，计算的是整个数组的大小，大小是16个字节
//
//	printf("%d\n", sizeof(a[0] + 1));//?
//	//a[0]作为第一行的数组名，没有单独放在sizeo内部，没有&
//	//a[0]表示数组首元素的地址，也就是a[0][0]的地址
//	//所以a[0]+1是第一行第二个元素的地址，是地址就是4/8个字节
//	//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	//计算的是就是第一行第2个元素的大小
//
//	printf("%d\n", sizeof(a + 1));//4 / 8
//	//a是数组首元素的地址，是第一行的地址 int(*)[4]
//	//a+1 就是第二行的地址
//
//	printf("%d\n", sizeof(*(a + 1)));//16
//	//*(a+1) --> a[1] -> sizeof(*(a+1))->sizeof(a[1]) 计算的是第二行的大小
//	//a+1 --> 是第二行的地址，int(*)[4]
//	//*(a+1) 访问的第二行的数组
//
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	//&a[0]是第一行的地址 int(*)[4]
//	//&a[0]+1 是第二行的地址 int(*)[4]
//
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 计算的是第二行的大小
//
//	printf("%d\n", sizeof(*a));//计算的是第一行的大小-16
//	//a是数组首元素的地址，就是第一行的地址
//	//*a 就是第一行
//	//*a --> *(a+0) --> a[0]
//
//	printf("%d\n", sizeof(a[3]));//16
//	//a[3]--> int [4]
//	//
//	return 0;
//}


//表达式都有2个属性：
//1. 值属性   9
//2. 类型属性
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


////由于还没学习结构体，这里告知结构体的大小是20个字节
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
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);// +1跳过一个结构体（20个字节） 0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//强制转换为无符号整形 直接+1  0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);// 强制转换为无符号整形指针  加1 跳过4个字节 0x100004
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
//	//10000000000000000000000000000100  -4的原码
//	//11111111111111111111111111111011  反码
//	//1111 1111 1111 1111 1111 1111 1111 1100  补码
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
	char* a[] = { "work","at","alibaba" };//指针数组 每个元素为指针 所以后面用二级指针接收

	char** pa = a;// a 的首地址为 work
	
	pa++;//指针+1 跳到 at
	
	printf("%s\n", *pa);// 解引用 为at
	return 0;
}

