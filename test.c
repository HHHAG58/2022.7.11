#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//10 5
//	
//	return 0;
//}

//������
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2 ,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *--*++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}

//��ҵ
//���������ַ�������
//void reverse(char* str)
//{
//	aeesrt(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right++;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);//��ȡһ��
//	//������
//	reverse(arr);
//	printf("�������ַ���:%s\n", arr);
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa+....
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//��ӡˮ�ɻ���
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//����i��λ��n
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;			
//		}
//		//����i��ÿһλ��n�η�֮��sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//�Ƚ�i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//��ӡ����
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	int i=0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0; 
//}

//����ˮ����(1ƿ1Ԫ��2��ƿ��һƿ��ˮ,һ��20Ԫ���Ժȶ���)
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//��1
//	////������ĺȵ�
//	//total = money;
//	//empty = money;
//	////��������
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	//printf("total = %d\n", total);
//
//	//��2
//	if (money == 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = 2 * money - 1;
//	}
//	printf("total = %d\n", total);
//	return 0;
//}

//�������е������ŵ�ǰ�棬ż���ŵ�����
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//�������ż��
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//���ұ�������
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}

		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}