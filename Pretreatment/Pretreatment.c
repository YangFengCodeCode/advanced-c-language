#define _CRT_SECURE_NO_WARNINGS 

//#include<stdio.h>
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//
//	//printf("%d\n", __STDC__);//当前VS是不支持ANSI C
//
//
//	return 0;
//}



#include <stdio.h>

//#define M 100
//#define STR "abc"
//#define FOR for(;;)
//
//int main()
//{
//	printf("%d\n", M);
//	printf("%s\n", STR);
//	FOR;
//	
//	return 0;
//}


//#define CASE break;case
//
//int main()
//{
//	int d = 0;
//	switch (d)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	}
//	return 0;
//}
//
////int main()
////{
////	int d = 0;
////	switch (d)
////	{
////	case 1:
////		break;
////	case 2:
////		break;
////	case 3:
////		break;
////	}
////	return 0;
////}


//#define DEBUG_PRINT printf("file:%s\tline:%d\t date:%s\t time:%s\n",__FILE__,__LINE__,__DATE__,__TIME__)
//
//int main()
//{
//	DEBUG_PRINT;
//	return 0;
//}


//1
//#define MAX(x, y) ((x)>(y)?(x):(y))
//
//////2
////int Max(int x, int y)
////{
////	return (x > y ? x : y);
////}
////
//int main()
//{
//	int a = 5;
//	int b = 6;
//	//int c = MAX(a, b);
//	int c = MAX(a, b);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("c = %d\n", c);
//
//	return 0;
//}


//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//
//int main()
//{
//	//int* p = (int*)malloc(126 * sizeof(int));
//
//	//malloc(126, int);
//	int*p = MALLOC(126, int);
//	//函数是不能传类型的
//
//
//	return 0;
//}




//#define MAX(x, y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 5;
//	int b = 6;
//	int c = MAX(a++, b++);
//	//int c = (a++) > (b++) ? (a++) : (b++);
//	//          5       6       6        7-->8
//	printf("a = %d\n", a);//6
//	printf("b = %d\n", b);//8
//	printf("c = %d\n", c);//7
//
//	return 0;
//}


 /*#define SQUARE(x) (x)*(x)

 int main()
 {
     int a = 3;
     int r = SQUARE(a+2);
     printf("r = %d\n", r);
     return 0;
 }*/


 /*#define DOUBLE(x) ((x)+(x))

 int main()
 {
     int a = 3;
     int r = 10*DOUBLE(a);
     printf("r = %d\n", r);
     return 0;
 }*/


//在程序中扩展#define定义符号和宏时，需要涉及几个步骤。
//1. 在调用宏时，首先对参数进行检查，看看是否包含任何由#define定义的符号。如果是，它们首先被替换。
//2. 替换文本随后被插入到程序中原来文本的位置。对于宏，参数名被他们的值替换。
//3. 最后，再次对结果文件进行扫描，看看它是否包含任何由#define定义的符号。如果是，就重复上述处理过程。
//注意：
//1. 宏参数和#define 定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归。
//2. 当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索。


//int main()
//{
//	printf("hello world\n");
//	printf("hello ""world\n");
//    //这两个代码产生的效果是相同的
//	return 0;
//}



//#define PRINT(n, format) printf("the value of "#n" is " format "\n", n)
////这里 #n 编译器会预处理为"a" "b" "c"  
//
//int main()
//{
//	int a = 20;
//	//printf("the value of a is %d\n", a);
//	PRINT(a, "%d");
//
//	int b = 15;
//	//printf("the value of b is %d\n", b);
//	PRINT(b, "%d");
//
//	float f = 4.5f;
//	//printf("the value of f is %f\n", f);
//	PRINT(f, "%f");
//	return 0;
//}


//#define CAT(x,y) x##y
//
//int main()
//{
//	int Class110 = 2024;
//	printf("%d\n", CAT(Class, 110));
//	printf("%d\n", Class110);
//	return 0;
//}

//当宏参数在宏的定义中出现超过一次的时候，如果参数带有副作用，那么你在使用这个宏的时候就可能出现危险，导
//致不可预测的后果。副作用就是表达式求值的时候出现的永久性效果。
//int a = 10;
//int b = a+1;//b=11, a=10 没有副作用
//int b = ++a;//b=11, a=11  有副作用


//那为什么不用函数来完成这个任务？ 原因有二：
//1. 用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多。所以宏比函数在程序
//的规模和速度方面更胜一筹。
//2. 更为重要的是函数的参数必须声明为特定的类型。所以函数只能在类型合适的表达式上使用。反之这个宏怎可
//以适用于整形、长整型、浮点型等可以用于 > 来比较的类型。宏是类型无关的。
//当然和宏相比函数也有劣势的地方：
//1. 每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序的长度。
//2. 宏是没法调试的。
//3. 宏由于类型无关，也就不够严谨。
//4. 宏可能会带来运算符优先级的问题，导致程容易出现错。