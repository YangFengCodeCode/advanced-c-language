#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 9;
//	// 00000000000000000000000000001001 9�Ķ���������
//	float* pFloat = (float*)&n;
//	// ����*pFloat ���յ�ʱ�� ��Ϊ���Ǹ�����
//	// 0 00000000 00000000000000000001001
//	// S    E          M
//	// E ���ڴ���Ϊȫ0  
//	// S=0  E=-126  M= 0.00000000000000000001001
//	// (-1)^0 * 0.00000000000000000001001 * 2^(-126)
//	//����һ���ǳ�С������ ����6λС�������0.000000
//	printf("n��ֵΪ��%d\n", n);//9
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	// 1001.0  9.0�����������Ʊ�ʾ
//	// 1.001 * 2^3
//	// (-1)^0 * 1.001 * 2^3
//	// S=0      M=1.001  E=3(���ʱ���127 = 130��
//	// 0 10000010 0010000000000000000
//	//0100000100010000000000000000 �������ӽ����� ���ǲ���
//	// ���� ԭ��Ͳ�����ͬ
//	//��������� 1091567616
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//9.000000
//
//	return 0;
//}
////��������ʲô������
//


//int main()
//{
//	float f = 5.5;
//	//101.1
//	//1.011 * 2^2
//	//(-1)^0 *1.011 * 2^2
//	//S = 0
//	//M = 1.011 ֻ����С��������  ��23������λ ���油0
//	//E = 2   +127=129  129�ö����Ʊ�ʾΪ 10000001
//	//0 10000001 0110000000000000000
//	//0100 0000 1011 0000 0000000000000000  
//	//0x40b00000  16������ʽ
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
//	int flag1 = 0;//���Ϊ������Ϊ1
//	int flag2 = 0;//���Ϊ������Ϊ1
//	for (i = 0; i < n-1; i++)// i<n-1��ֹԽ��
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

//����2
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