#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);// POINT
//	printf("%s\n", *-- * ++cpp + 3);// ER
//	printf("%s\n", *cpp[-2] + 3);// ST
//	printf("%s\n", cpp[-1][-1] + 1);// EW
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	if (strlen("abc") > strlen("abcdef"))
//	{
//		printf("大于\n");
//	}
//	else
//		printf("小于等于\n");
//}


//模拟实现strlen 函数
//#include<stdio.h>
//
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	size_t sz = my_strlen("abc");
//	printf("%u", sz);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "";
//	char arr2[] = "hello bit";
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[6] = { 'a', 'b', 'c', 'd', 'e', '\0'};
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//#include<assert.h>
//#include<stdio.h>
//char* my_strcpy(char* dest, const char* sour)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(sour != NULL);
//
//	while (*sour != '\0')
//	{
//		*dest = *sour;
//		dest++;
//		sour++;
//	}
//	*dest = *sour;//  把 \0 传过去
//	return ret;
//	
//}
//
//int main()
//{
//	char arr1[20] = "hello world";
//	char arr2[] = "xxxxx";
//	my_strcpy(arr1+6, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//
//把 src 所指向的字符串复制到 dest。
//把 src 所指向的字符串追加到 dest 所指向的字符串的结尾。
//#include<stdio.h>
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}



//// 模拟实现strcat 函数
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* dest, const char* sour)
//{
//	assert(dest && sour);
//
//	char* ret = dest;
//	//找到目标空间中的 \0
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *sour++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}


//int strcmp(const char* str1, const char* str2);

//#include<stdio.h>
//int main()
//{
//	int ret = strcmp("bbq", "bcq");// 比较第一个字母 都是b 所以比较下一个 b和c  c 大 所以bbq 小于bcq
//	if (ret>0)
//		printf(">\n");
//
//	printf("%d\n", ret);
//	return 0;
//}




//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//
//	return (*str1 - *str2);
//}
//int main()
//{
//	int ret = my_strcmp("bbq", "bcq");// 比较第一个字母 都是b 所以比较下一个 b和c  c 大 所以bbq 小于bcq
//	if (ret>0)
//		printf(">\n");
//
//	printf("%d\n", ret);
//	return 0;
//}
//


//#include<stdio.h>
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "xxx";
//	strncpy(arr1, arr2, 5);
//	printf("%s", arr1);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[20] = "abcdef\0yyyyy";
//	char arr2[] = "xxx";
//	strncat(arr1, arr2, 6);
//	printf("%s", arr1);
//	return 0;
//}


//int strncmp(const char* str1, const char* str2, size_t num);

//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcqwertyuiop";
//	char arr2[] = "abcdef";
//	printf("%d\n", strncmp(arr1, arr2, 4));
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "def";
//
//	char* ret = strstr(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}


//#include<stdio.h>
//char* my_strstr(char *str1, char* str2)
//{
//	char* cp = str1;
//	char* s1 = cp;
//	char* s2 = str2;
//
//	if (*str2 == '\0')
//		return str1;
//
//	while (*cp)
//	{
//		//开始匹配
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cp;
//
//		cp++;
//	}
//
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//
//	return 0;
//}
//


//char* strtok(char* str, const char* delimiters)


//#include<stdio.h>
//int main()
//{
//
//	char arr[] = "zpengwei@yeah.net";
//	char copy[30];
//	strcpy(copy, arr);
//
//	char sep[] = "@.";
//	char* ret = NULL;
//
//	ret = strtok(copy, sep);
//	printf("%s\n", ret);
//	
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//
//
//	
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = "zpengwei@yeah.net@666#777";
//	char copy[30];
//	strcpy(copy, arr);
//
//	char sep[] = "@.#";
//	char* ret = NULL;
//
//	for (ret = strtok(copy, sep); ret != NULL; ret=strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//char* strerror(int errnum);
// 
 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d: %s\n", i, strerror(i));//
//	}
//	return 0;
//}


//#include <ctype.h>
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", isupper('a'));
//	printf("%d\n", isdigit('2'));
//	printf("%c\n", tolower('A'));//转换小写
//	printf("%c\n", tolower('s'));// 转换小写 如果是小写 转换之后还是小写
//	printf("%c\n", toupper('s'));// 转换大写 如果是大写 转换之后还是大写
//	return 0;
//}


#include <ctype.h>
#include<stdio.h>
int main()
{

	char arr[20] = { 0 };
	gets(arr);//遇到空格继续读
	
	char* p = arr;
	while (*p)
	{
		if (isupper(*p))// *p>='A' && *p<='Z'
		{
			*p = tolower(*p);//*p = *p+32;
		}
		p++;
	}
	printf("%s\n", arr);
	return 0;
}