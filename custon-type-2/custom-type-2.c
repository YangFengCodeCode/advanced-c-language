#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//struct S2
//{
//	int i;//4
//	char c1;//1
//	char c2;//1
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//
//	printf("%d\n", sizeof(struct S1));//?
//	printf("%d\n", sizeof(struct S2));//?
//	
//	return 0;
//}


//1. 第一个成员在与结构体变量偏移量为0的地址处。
//2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//VS中默认的值为8
//3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整
//体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。

//#include<stddef.h>
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//struct S2
//{
//	int i;//4
//	char c1;//1
//	char c2;//1
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", offsetof(struct S1, c1));//可以计算结构体成员相较于结构体起始位置的偏移量
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	return 0;
//}


//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};



//struct S2
//{
//	int i;
//	char c1;
//	char c2;
//};


//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));//?
//	return 0;
//}


//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S4));//??
//
//	return 0;
//}


//#include <stdio.h>
//#pragma pack(8)//设置默认对齐数为8
//struct S1
//{
//    char c1;//1 8-->1
//    int i;//4 8-->4
//    char c2;// 1 8-->1
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//#pragma pack(1)//设置默认对齐数为1
//struct S2
//{
//    char c1;// 1 1-->1
//    int i;// 4 1--> 1
//    char c2;// 1 1--> 1
//};
//
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//    输出的结果是什么？
//    printf("%d\n", sizeof(struct S1));//12
//    printf("%d\n", sizeof(struct S2));//6
//    return 0;
//}


//#pragma pack(1)
//
//struct S
//{
//	char c1;//1 1 1
//	int a; // 4 1 1
//	char c2;//1 1 1
//};
//
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}


////例如：
//struct S1
//{
//    char c1;
//    int i;
//    char c2;
//};
//struct S2
//{
//    char c1;
//    char c2;
//    int i;
//};




//#include <stdio.h>
//// 用 #pragma 这个预处理指令， 可以改变我们的默认对齐数
//#pragma pack(8)//设置默认对齐数为8
//struct S1
//{
//    char c1;
//    int i;
//    char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//#pragma pack(1)//设置默认对齐数为8
//struct S2
//{
//    char c1;
//    int i;
//    char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//    //输出的结果是什么？
//    printf("%d\n", sizeof(struct S1));
//    printf("%d\n", sizeof(struct S2));
//    return 0;
//}


//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);  //传结构体
//	print2(&s); //传地址
//	return 0;
//}


//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};


//struct A
//{
//	int _a : 2;//二进制位
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}



//一个例子
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//}
////空间是如何开辟的？



//1. int 位段被当成有符号数还是无符号数是不确定的。
//2. 位段中最大位的数目不能确定。（16位机器最大16，32位机器最大32，写成27，在16位机
//器会出问题。
//3. 位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义。
//4. 当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时，是
//舍弃剩余的位还是利用，这是不确定的。


//枚举顾名思义就是一一列举。
//把可能的取值一一列举。
//比如我们现实生活中：
//一周的星期一到星期日是有限的7天，可以一一列举。
//性别有：男、女、保密，也可以一一列举。
//月份有12个月，也可以一一列举
//这里就可以使用枚举了。


//enum Day//星期
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color//颜色
//{
//	RED,
//	GREEN,
//	BLUE
//};

//enum Color//颜色
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Color clr = GREEN;//只能拿枚举常量给枚举变量赋值，才不会出现类型的差异
//	int a = RED;
//	//clr = 5;
//	printf("%d\n", clr);
//	printf("%d\n", a);
//}




//联合类型的声明
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	union Un un = { 0 };
//	un.i = 0x11223344;
//	un.c = 0x55;
//	
//	printf("%p\n", &un);
//	printf("%p\n", &(un.i));
//	printf("%p\n", &(un.c));
//}



//联合的大小至少是最大成员的大小。
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。
//比如：



//union Un1
//{
//	char c[5];//1
//	int i;//4
//};
//union Un2
//{
//	short c[7];//2
//	int i;//4
//};
////下面输出的结果是什么？
//int main()
//{
//	printf("%d\n", sizeof(union Un1));//8
//	printf("%d\n", sizeof(union Un2));//16
//}



//int check_sys()
//{
//	union//匿名
//	{
//		int i;
//		char c;
//	}un = {.i = 1};//初始化
//	return un.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	
//
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}


union Un1
{
	char c[5];//5 1 8 1
	int i;//4 8 4
};

union Un2
{
	short c[7];//14 2 8 2
	int i;//4 4 8 4
};

int main()
{
	printf("%d\n", sizeof(union Un1));//5+3 = 8
	printf("%d\n", sizeof(union Un2));//16

	return 0;
}