#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//���p��ֵ��NULL���ͻ�������
//	free(p);
//}

//void test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//��i��10��ʱ��Խ�����
//	}
//	free(p);
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//}


//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//ok?
//}

//void test()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
//}

//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	while (1);
//}


//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}

//void GetMemory(char** p)//�ö���ָ�����һ��ָ��ĵ�ַ
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//����ַ
//	strcpy(str, "hello world");
//	printf(str);
//	//�ͷ�
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	static char p[] = "hello world";//��static 
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("hehe\n");
//	printf("%d\n", *p);
//
//	return 0;
//}

//typedef struct st_type
//{
//	int i;
//	int a[0];//���������Ա
//}type_a;
//
//
//typedef struct st_type
//{
//	int i;
//	int a[];//���������Ա
//}type_a;

//�ṹ�е����������Աǰ���������һ��������Ա��
//sizeof ���ص����ֽṹ��С����������������ڴ档
//�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ
//���������Ԥ�ڴ�С��


//code1
//typedef struct st_type
//{
//	int i;
//	int a[0];//���������Ա
//}type_a;
//printf("%d\n", sizeof(type_a));//�������4

//struct S
//{
//	int n;
//	int arr[0];//��������
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i + 1;
//	}
//
//	//�ռ䲻������Ҫ����
//	struct S* ptr = realloc(ps, sizeof(struct S) + 60);
//	if (ptr == NULL)
//	{
//		perror("realloc");
//		return 1;
//	}
//	ps = ptr;
//	ps->n = 15;
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d\n", ps->arr[i]);
//	}
//
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}



//struct S
//{
//	int n;
//	int* arr;
//};
//
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		perror("malloc->ps");
//		return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);//1 2 3 4 5 6 7 8 9 10
//	if (ps->arr == NULL)
//	{
//		perror("malloc->arr");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i + 1;
//	}
//
//	//����
//	int* ptr = (int*)realloc(ps->arr, 60);
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//��ӡ
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d\n", ps->arr[i]);
//	}
//
//	//�ͷ�
//	free(ps->arr);
//	ps->arr = NULL;
//
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//���� ����1 �� ����2 �������ͬ���Ĺ��ܣ����� ����1 ��ʵ���������ô��� ��һ���ô��ǣ������ڴ��ͷ�
//������ǵĴ�������һ���������õĺ����У������������˶����ڴ���䣬���������ṹ�巵�ظ��û�����
//������free�����ͷŽṹ�壬�����û�����֪������ṹ���ڵĳ�ԱҲ��Ҫfree�������㲻��ָ���û�����
//������¡����ԣ�������ǰѽṹ����ڴ��Լ����ԱҪ���ڴ�һ���Է�����ˣ������ظ��û�һ���ṹ��
//ָ�룬�û���һ��free�Ϳ��԰����е��ڴ�Ҳ���ͷŵ���
//�ڶ����ô��ǣ����������ڷ����ٶ�.
//�������ڴ���������߷����ٶȣ�Ҳ�����ڼ����ڴ���Ƭ������ʵ���Ҹ��˾���Ҳû����ˣ��������ܲ���
//Ҫ����ƫ�����ļӷ���Ѱַ��