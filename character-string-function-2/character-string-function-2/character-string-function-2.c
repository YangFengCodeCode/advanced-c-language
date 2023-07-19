#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	//将arr1中的内容，拷贝到arr2中
//	memcpy(arr2, arr1, 40);
//    //     int*  int*
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0 };
//	float arr2[5] = { 0 };
//	//将arr1中的内容，拷贝到arr2中
//	memcpy(arr2, arr1, 8);
//	//    float* float*
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%f ", arr2[i]);
//	}
//
//	return 0;
//}
//

//#include<assert.h>
//void* my_memcpy(void* dest, const void* sour, size_t num)
//{
//	void* ret = dest;
//	assert(dest && sour);
//	while (num--)
//	{
//		*(char*)dest = *(char*)sour;
//		dest = (char*)dest + 1;// 不能用 (char*)dest++  因为++作用于dest 有可能跳过的不是一个字节
//		sour = (char*)sour + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	// 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 06 00 00 00 .....
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 20);// 21个字节 到06 就结束
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}


//memcpy 只要实现了不重叠拷贝就行 - 60分
//vs 上memcpy 函数实现了重叠拷贝，100分
//
//重叠的内存拷贝还是交给memmove来做
//memmove 当然也可以拷贝不重叠的拷贝

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//             1 2 1 2 3 4 5 8 9 10
//	memmove(arr1+2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,1,4,5,6 };
//	int arr2[] = { 1,2,257 };
//	int ret = memcmp(arr1, arr2, 10);
//	printf("%d\n", ret);
//	return 0;
//}
//


//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (num--)//20
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//             1 2 1 2 3 4 5 8 9 10
//	my_memmove(arr1, arr1+2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,1,4,5,6 };
//	int arr2[] = { 1,2,257 };
//	int ret = memcmp(arr1, arr2, 10);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char arr1[] = "hello bit";
//	memset(arr1+1,'x',4);//以字节为单位设置的
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int x = 0;
//	int y = 2;
//	int flag = 0;
//	while (x <= 2 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			printf("找到了， 下标是：%d %d\n", x, y);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



//void young_tableau_search(int arr[3][3], int k, int *px, int *py)
//{
//	int x = 0;
//	int y = *py-1;
//	int flag = 0;
//	while (x <= *px-1 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	young_tableau_search(arr, k, &x, &y);
//
//	if (x == -1 && y == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是：%d %d\n", x, y);
//	return 0;
//}



//#include <assert.h>
//
//void left_move(char* str, int k)
//{
//	int j = 0;
//	assert(str);
//	for (j = 0; j < k; j++)
//		\
//
//
//
//
//
//
//
//	{
//		char tmp = *str;
//		int len = strlen(str);
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//
//	left_move(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}


//#include<assert.h>
//void left_move(char* str, int k)
//{
//	int j = 0;
//	assert(str);
//	for (j = 0; j < k; j++)
//	{
//		char tmp = *str;
//		int len = strlen(str);
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//
//	left_move(arr, k);
//	printf("%s", arr);
//
//}

//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//	int i = 0;
//
//}
//void left_move(char* str, int k)
//{
//	int len = strlen(str);
//	k %= len;
//	// 左边逆序
//	reverse(str, str + k - 1);
//	// 右边逆序
//	reverse(str + k, str + len - 1);
//	//整体逆序
//	reverse(str, str + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";// 左旋6次 回到原位置
//	//左旋2
//	// bafedc
//	// cdefab
//	int k = 0;
//	scanf("%d", &k);
//
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//int is_left_move(char* str1, char* str2)
//{
//	int j = 0;
//	int len = strlen(str1);
//	for (j = 0; j < len; j++)
//	{
//		char tmp = *str1;
//		int len = strlen(str1);
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(str1 + i) = *(str1 + i + 1);
//
//		}
//		*(str1 + len - 1) = tmp;
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	char arr1[] = "abcdef";// bcdefa cdefab defabc efabcd fabcde abcdef
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}





#include<string.h>
int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		return 0;
	}
	strncat(str1, str1, len1);
	if (strstr(str1, str2) == NULL)
	{
		return 0;
	}
	else
		return 1;
}
int main()
{
	char arr1[20] = "abcdef";// bcdefa cdefab defabc efabcd fabcde abcdef
	//abcdefabcdef
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}


