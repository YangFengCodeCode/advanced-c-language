#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 9;
//	// 00000000000000000000000000001001 9的二进制序列
//	float* pFloat = (float*)&n;
//	// 当用*pFloat 接收的时候 认为它是浮点数
//	// 0 00000000 00000000000000000001001
//	// S    E          M
//	// E 在内存中为全0  
//	// S=0  E=-126  M= 0.00000000000000000001001
//	// (-1)^0 * 0.00000000000000000001001 * 2^(-126)
//	//这是一个非常小的数字 保留6位小数后就是0.000000
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	// 1001.0  9.0浮点数二进制表示
//	// 1.001 * 2^3
//	// (-1)^0 * 1.001 * 2^3
//	// S=0      M=1.001  E=3(存的时候加127 = 130）
//	// 0 10000010 0010000000000000000
//	//0100000100010000000000000000 以整形视角来看 这是补码
//	// 整数 原码和补码相同
//	//算出来就是 1091567616
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);//9.000000
//
//	return 0;
//}
////输出结果是什么？？？
//


//int main()
//{
//	float f = 5.5;
//	//101.1
//	//1.011 * 2^2
//	//(-1)^0 *1.011 * 2^2
//	//S = 0
//	//M = 1.011 只保存小数点后面的  有23个比特位 后面补0
//	//E = 2   +127=129  129用二进制表示为 10000001
//	//0 10000001 0110000000000000000
//	//0100 0000 1011 0000 0000000000000000  
//	//0x40b00000  16进制形式
//	return 0;
//}

//int main() {
//    char arr[10001] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    char* left = arr;
//    char* right = arr + len - 1;
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//    printf("%s\n", arr);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[50];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int flag1 = 0;//如果为升序则为1
//	int flag2 = 0;//如果为降序则为1
//	for (i = 0; i < n-1; i++)// i<n-1防止越界
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			flag1 = 1;
//		}
//		else if (arr[i] > arr[i + 1])
//		{
//			flag2 = 1;
//		}
//	}
//	if (flag1 + flag2 == 2)
//	{
//		printf("unsorted\n");
//	}
//	else
//		printf("sorted\n");
//
//	return 0;
//}


#include<stdio.h>

int get_day(int y, int m)
{
	int d = 0;
	switch(m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		d = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		d = 30;
		break;
	case 2:
		{
			d = 28;
			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
			{
				d += 1;
			}
		}
	}
	return d;
}

//方法2
//int get_day(int y, int m)
//{
//    int d = 0;
//    int days[] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
//    d = days[m];
//    if (((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) && m == 2)
//        d += 1;
//    return d;
int main()
{
	int y = 0;
	int m = 0;
	while (scanf("%d %d", &y, &m) != EOF)
	{
		int ret = get_day(y, m);
		printf("%d\n", ret);
	}
	return 0;
}