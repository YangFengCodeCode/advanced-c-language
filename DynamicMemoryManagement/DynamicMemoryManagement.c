#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int val = 20;//��ջ�ռ��Ͽ����ĸ��ֽ�
//char arr[10] = { 0 };//��ջ�ռ��Ͽ���10���ֽڵ������ռ�

//void* malloc(size_t size);

//������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ�롣
//�������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ����顣
//����ֵ�������� void* ������malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ���������
//������� size Ϊ0��malloc����Ϊ�Ǳ�׼��δ����ģ�ȡ���ڱ�������

//void free(void* ptr);

//#include<stdlib.h>
//int main()
//{
//	//int arr[10]
//	int* p = (int*)malloc(40);//ǿ��ת��Ϊint*
//	if (p == NULL)
//	{
//		perror("malloc");//��ӡ����ʧ�ܵ�ԭ��
//		return 1;
//	}
//	//���ٳɹ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	  printf("%d\n", *(p + i));
//	}
//
//	free(p);//�ͷŶ�̬���ٵ��ڴ�
//	p == NULL;//��p��Ϊ��ָ�� ��ֹ��ΪҰָ��
//	return 0;
//}
//


//void* calloc(size_t num, size_t size);

//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//��ӡ����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//void* realloc(void* ptr, size_t size);


//ptr ��Ҫ�������ڴ��ַ
//size ����֮���´�С
//����ֵΪ����֮����ڴ���ʼλ�á�
//�����������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ��� �� �Ŀռ䡣
//realloc�ڵ����ڴ�ռ���Ǵ������������
//���1��ԭ�пռ�֮�����㹻��Ŀռ�
//���2��ԭ�пռ�֮��û���㹻��Ŀռ�

//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//��ʼ��Ϊ1~10
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		p[i] = i + 1;
//	}
//	//����һЩ�ռ�
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//��ӡ����
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}
