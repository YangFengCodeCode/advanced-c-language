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


//1. ��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2. ������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
//������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
//VS��Ĭ�ϵ�ֵΪ8
//3. �ṹ���ܴ�СΪ����������ÿ����Ա��������һ��������������������
//4. ���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ�����
//���С��������������������Ƕ�׽ṹ��Ķ�����������������

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
//	printf("%d\n", offsetof(struct S1, c1));//���Լ���ṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
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
//#pragma pack(8)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//    char c1;//1 8-->1
//    int i;//4 8-->4
//    char c2;// 1 8-->1
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct S2
//{
//    char c1;// 1 1-->1
//    int i;// 4 1--> 1
//    char c2;// 1 1--> 1
//};
//
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//    ����Ľ����ʲô��
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


////���磺
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
//// �� #pragma ���Ԥ����ָ� ���Ըı����ǵ�Ĭ�϶�����
//#pragma pack(8)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//    char c1;
//    int i;
//    char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//#pragma pack(1)//����Ĭ�϶�����Ϊ8
//struct S2
//{
//    char c1;
//    int i;
//    char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//    //����Ľ����ʲô��
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
////�ṹ�崫��
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////�ṹ���ַ����
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);  //���ṹ��
//	print2(&s); //����ַ
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
//	int _a : 2;//������λ
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



//һ������
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
////�ռ�����ο��ٵģ�



//1. int λ�α������з����������޷������ǲ�ȷ���ġ�
//2. λ�������λ����Ŀ����ȷ������16λ�������16��32λ�������32��д��27����16λ��
//��������⡣
//3. λ���еĳ�Ա���ڴ��д������ҷ��䣬���Ǵ�����������׼��δ���塣
//4. ��һ���ṹ��������λ�Σ��ڶ���λ�γ�Ա�Ƚϴ��޷������ڵ�һ��λ��ʣ���λʱ����
//����ʣ���λ�������ã����ǲ�ȷ���ġ�


//ö�ٹ���˼�����һһ�о١�
//�ѿ��ܵ�ȡֵһһ�о١�
//����������ʵ�����У�
//һ�ܵ�����һ�������������޵�7�죬����һһ�о١�
//�Ա��У��С�Ů�����ܣ�Ҳ����һһ�о١�
//�·���12���£�Ҳ����һһ�о�
//����Ϳ���ʹ��ö���ˡ�


//enum Day//����
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//�Ա�
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color//��ɫ
//{
//	RED,
//	GREEN,
//	BLUE
//};

//enum Color//��ɫ
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Color clr = GREEN;//ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ���
//	int a = RED;
//	//clr = 5;
//	printf("%d\n", clr);
//	printf("%d\n", a);
//}




//�������͵�����
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



//���ϵĴ�С����������Ա�Ĵ�С��
//������Ա��С����������������������ʱ�򣬾�Ҫ���뵽������������������
//���磺



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
////��������Ľ����ʲô��
//int main()
//{
//	printf("%d\n", sizeof(union Un1));//8
//	printf("%d\n", sizeof(union Un2));//16
//}



//int check_sys()
//{
//	union//����
//	{
//		int i;
//		char c;
//	}un = {.i = 1};//��ʼ��
//	return un.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	
//
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
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