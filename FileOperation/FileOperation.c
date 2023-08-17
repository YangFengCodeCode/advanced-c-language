#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>





//一个文件要有一个唯一的文件标识，以便用户识别和引用。
//文件名包含3部分：文件路径 + 文件名主干 + 文件后缀
//例如： c : \code\test.txt
//为了方便起见，文件标识常被称为文件名。


//缓冲文件系统中，关键的概念是“文件类型指针”，简称“文件指针”。
//每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息（如文件的名字，文件状态及
//文件当前的位置等）。这些信息是保存在一个结构体变量中的。该结构体类型是有系统声明的，取名FILE.



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
//	//关闭文件
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
//	//写文件
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
//	//关闭文件
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
//	//读文件
//	int ch = fgetc(pf);//只会一个一个读取
//	printf("%c\n", ch);//如果从键盘读取 那就把pf换成stdin
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
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
//	//写文件 - 写一行
//	fputs('hello ', pf);
//	fputs('ea', pf);
//
//	//关闭文件
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
//	//写文件 - 写一行
//	fputs("hello bit\n", pf);
//	fputs("hello xiaobite\n", pf);
//
//	//关闭文件
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
//	//读文件 - 读一行 读n-1个字符
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
//	//关闭文件
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
//	//写文件
//	struct S s = { 100, 3.14f};
//	fprintf(pf, "%d %f", s.a, s.s);
//
//	//关闭文件
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
//	//写文件
//	struct S s = {0};
//	fscanf(pf, "%d %f", &(s.a), &(s.s));//这里需要取地址
//
//	fprintf(stdout, "%d %f", s.a, s.s);
//
//	//关闭文件
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
//	sprintf(arr, "%d %f %s", s.a, s.s, s.str);//把数据放在一个数组里
//	//printf("%s\n", arr);
//	sscanf(arr, "%d %f %s", &(tmp.a), &(tmp.s), tmp.str);//读取数据
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
//	//写文件
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
//	//读文件
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
//	//读文件
//	//定位文件指针到f
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
//	fseek(pf, -3, SEEK_CUR);//从当前位置往前偏移三个位置
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
//	//读文件
//	//定位文件指针到f
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
//	//读文件
//	//定位文件指针到f
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


//1. 文本文件读取是否结束，判断返回值是否为EOF （fgetc），或者NULL（fgets）
//例如：
//fgetc判断是否为EOF.
//fgets判断返回值是否为NULL.
//2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。
//例如：
//fread判断返回值是否小于实际要读的个数。


//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//    int c; // 注意：int，非char，要求处理EOF
//    FILE* fp = fopen("test.txt", "r");
//    if (!fp) {
//        perror("File opening failed");
//        return EXIT_FAILURE;
//    }
//    //fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//    while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//    {
//        putchar(c);
//    }
//    //判断是什么原因结束的
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
//    FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
//    fwrite(a, sizeof(*a), SIZE, fp); // 写 double 的数组
//    fclose(fp);
//    fp = fopen("test.bin", "rb");
//    // 读 double 的数组
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
////VS2019 WIN11环境测试
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}