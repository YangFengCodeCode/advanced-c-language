#define _CRT_SECURE_NO_WARNINGS 

//#include<stdio.h>
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//
//	//printf("%d\n", __STDC__);//��ǰVS�ǲ�֧��ANSI C
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
//	//�����ǲ��ܴ����͵�
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


//�ڳ�������չ#define������źͺ�ʱ����Ҫ�漰�������衣
//1. �ڵ��ú�ʱ�����ȶԲ������м�飬�����Ƿ�����κ���#define����ķ��š�����ǣ��������ȱ��滻��
//2. �滻�ı���󱻲��뵽������ԭ���ı���λ�á����ں꣬�����������ǵ�ֵ�滻��
//3. ����ٴζԽ���ļ�����ɨ�裬�������Ƿ�����κ���#define����ķ��š�����ǣ����ظ�����������̡�
//ע�⣺
//1. �������#define �����п��Գ�������#define����ı��������Ƕ��ں꣬���ܳ��ֵݹ顣
//2. ��Ԥ����������#define����ķ��ŵ�ʱ���ַ������������ݲ�����������


//int main()
//{
//	printf("hello world\n");
//	printf("hello ""world\n");
//    //���������������Ч������ͬ��
//	return 0;
//}



//#define PRINT(n, format) printf("the value of "#n" is " format "\n", n)
////���� #n ��������Ԥ����Ϊ"a" "b" "c"  
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

//��������ں�Ķ����г��ֳ���һ�ε�ʱ������������и����ã���ô����ʹ��������ʱ��Ϳ��ܳ���Σ�գ���
//�²���Ԥ��ĺ���������þ��Ǳ��ʽ��ֵ��ʱ����ֵ�������Ч����
//int a = 10;
//int b = a+1;//b=11, a=10 û�и�����
//int b = ++a;//b=11, a=11  �и�����


//��Ϊʲô���ú��������������� ԭ���ж���
//1. ���ڵ��ú����ʹӺ������صĴ�����ܱ�ʵ��ִ�����С�ͼ��㹤������Ҫ��ʱ����ࡣ���Ժ�Ⱥ����ڳ���
//�Ĺ�ģ���ٶȷ����ʤһ�
//2. ��Ϊ��Ҫ���Ǻ����Ĳ�����������Ϊ�ض������͡����Ժ���ֻ�������ͺ��ʵı��ʽ��ʹ�á���֮���������
//�����������Ρ������͡������͵ȿ������� > ���Ƚϵ����͡����������޹صġ�
//��Ȼ�ͺ���Ⱥ���Ҳ�����Ƶĵط���
//1. ÿ��ʹ�ú��ʱ��һ�ݺ궨��Ĵ��뽫���뵽�����С����Ǻ�Ƚ϶̣�������ܴ�������ӳ���ĳ��ȡ�
//2. ����û�����Եġ�
//3. �����������޹أ�Ҳ�Ͳ����Ͻ���
//4. ����ܻ������������ȼ������⣬���³����׳��ִ�