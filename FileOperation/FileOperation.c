#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>





//һ���ļ�Ҫ��һ��Ψһ���ļ���ʶ���Ա��û�ʶ������á�
//�ļ�������3���֣��ļ�·�� + �ļ������� + �ļ���׺
//���磺 c : \code\test.txt
//Ϊ�˷���������ļ���ʶ������Ϊ�ļ�����


//�����ļ�ϵͳ�У��ؼ��ĸ����ǡ��ļ�����ָ�롱����ơ��ļ�ָ�롱��
//ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ������������ļ��������Ϣ�����ļ������֣��ļ�״̬��
//�ļ���ǰ��λ�õȣ�����Щ��Ϣ�Ǳ�����һ���ṹ������еġ��ýṹ����������ϵͳ�����ģ�ȡ��FILE.



//int main()
//{
//	FILE* pf = fopen("data.txt", 'w');
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//д�ļ�
//	/*fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);*/
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a'+i, pf);
//	}
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ch = fgetc(pf);//ֻ��һ��һ����ȡ
//	printf("%c\n", ch);//����Ӽ��̶�ȡ �ǾͰ�pf����stdin
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ� - дһ��
//	fputs('hello ', pf);
//	fputs('ea', pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ� - дһ��
//	fputs("hello bit\n", pf);
//	fputs("hello xiaobite\n", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ� - ��һ�� ��n-1���ַ�
//	char arr[10] = { 0 };
//	fgets(arr, 10, pf);
//	printf("%s", arr);
//	fgets(arr, 10, pf);
//	printf("%s", arr);
//	fgets(arr, 10, pf);
//	printf("%s", arr);
//	fgets(arr, 10, pf);
//	printf("%s", arr);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	int a;
//	float s;
//};
//
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	struct S s = { 100, 3.14f};
//	fprintf(pf, "%d %f", s.a, s.s);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//struct S
//{
//	int a;
//	float s;
//};
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	struct S s = {0};
//	fscanf(pf, "%d %f", &(s.a), &(s.s));//������Ҫȡ��ַ
//
//	fprintf(stdout, "%d %f", s.a, s.s);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	int a;
//	float s;
//	char str[10];
//};
//
//int main()
//{
//	char arr[30] = { 0 };
//	struct S s = { 100, 3.14f, "hehe" };
//	struct S tmp = {0};
//
//	sprintf(arr, "%d %f %s", s.a, s.s, s.str);//�����ݷ���һ��������
//	//printf("%s\n", arr);
//	sscanf(arr, "%d %f %s", &(tmp.a), &(tmp.s), tmp.str);//��ȡ����
//
//	printf("%d %f %s\n", tmp.a, tmp.s, tmp.str);
//
//	return 0;
//}


//struct S
//{
//	int a;
//	float s;
//	char str[10];
//};
//
//int main()
//{
//	struct S s = { 99, 6.18f, "bit" };
//
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	int a;
//	float s;
//	char str[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("data.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%d %f %s\n", s.a, s.s, s.str);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	//��λ�ļ�ָ�뵽f
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//c
//
//
//	fseek(pf, -3, SEEK_CUR);//�ӵ�ǰλ����ǰƫ������λ��
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	//��λ�ļ�ָ�뵽f
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//c
//
//
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	//��λ�ļ�ָ�뵽f
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//c
//
//	rewind(pf);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//1. �ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�ΪEOF ��fgetc��������NULL��fgets��
//���磺
//fgetc�ж��Ƿ�ΪEOF.
//fgets�жϷ���ֵ�Ƿ�ΪNULL.
//2. �������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
//���磺
//fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����


//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//    int c; // ע�⣺int����char��Ҫ����EOF
//    FILE* fp = fopen("test.txt", "r");
//    if (!fp) {
//        perror("File opening failed");
//        return EXIT_FAILURE;
//    }
//    //fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//    while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//    {
//        putchar(c);
//    }
//    //�ж���ʲôԭ�������
//    if (ferror(fp))
//        puts("I/O error when reading");
//    else if (feof(fp))
//        puts("End of file reached successfully");
//    fclose(fp);
//}

//#include<stdio.h>
//enum { SIZE = 5 };
//int main(void)
//{
//    double a[SIZE] = { 1.0,2.0,3.0,4.0,5.0 };
//    double b = 0.0;
//    size_t ret_code = 0;
//    FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
//    fwrite(a, sizeof(*a), SIZE, fp); // д double ������
//    fclose(fp);
//    fp = fopen("test.bin", "rb");
//    // �� double ������
//    while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1)
//    {
//        printf("%lf\n", b);
//    }
//    if (feof(fp))
//        printf("Error reading test.bin: unexpected end of file\n");
//    else if (ferror(fp)) {
//        perror("Error reading test.bin");
//    }
//    fclose(fp);
//    fp = NULL;
//}



//#include <stdio.h>
//#include <windows.h>
////VS2019 WIN11��������
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//�Ƚ�����������������
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//	return 0;
//}