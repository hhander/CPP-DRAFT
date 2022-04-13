#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int main()
//{
//	int i = 0;
//	cin >> i;
//	for (; i < 10; i++)
//	{
//		cout << i;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 7 == 0 || i % 10 == 7 || ((i / 10))%10 == 7)
//		{
//			cout << "敲桌子"<<endl;
//			continue;
//		}
//		cout << i << endl;
//	}
//	return 0;
//}
//
//int main()
//{
//    int h, r;
//    scanf("%d%d", &h, &r);
//    int Bottle = 3.14 * r * r * h;
//    printf("%d", 10000/Bottle);
//    return 0;
//}




//int main()
//{
//    int hour, minute, k;
//    scanf("%d:%d%d", &hour, &minute, &k);
//    hour = (hour + (minute + k) / 60) % 24;
//    minute = (minute + k) % 60;
//    printf("%02d:%02d", hour, minute);
//    return 0;
//}

//int main()
//{
//    int n, m;
//    int a, b;
//    scanf("%d%d", &n, &m);
//    for (int i = 2; i <= n * m; i++)
//    {
//        if (i % n == 0 && i % m == 0)
//        {
//            a = i;
//            break;
//        }
//    }
//    for (int i = n * m; i > 0; i--)
//    {
//        if (n % i == 0 && m % i == 0)
//        {
//            b = i;
//            break;
//        }
//    }
//    printf("%lld", a + b);
//    return 0;
//}

//int main()
//{
//    int n, m;
//    int a, b;
//    scanf("%d%d", &n, &m);
//    for (int i = 2; i <= n * m; i++)
//    {
//        if (i % n == 0 && i % m == 0)
//        {
//            a = i;
//            break;
//        }
//    }
//    while (m)
//    {
//        m = m % n;
//        n = n % m;
//    }
//    printf("%ld", a + n);
//    return 0;
////}
//int main()
//{
//    int n, m;
//    int a, b;
//    scanf("%d%d", &m, &n);
//    if (n > m)
//    {
//        int tmp = m;
//        m = n;
//        n = tmp;
//    }
//while (m)
//{
//    m = m % n;
//    if (m == 0)
//    {
//        break;
//    }
//    n = n % m;
//
//}
//printf("%d", n);
//return 0;
//}

//int main()
//{
//    int n, m;
//    int a, b;
//    scanf("%d%d", &n, &m);
//    for (int i = 2; i <= n * m; i++)
//    {
//        if (i % n == 0 && i % m == 0)
//        {
//            a = i;
//            break;
//        }
//    }
//    if (n > m)
//    {
//        int tmp = m;
//        m = n;
//        n = tmp;
//    }
//    while (m)
//    {
//        m = m % n;
//        if (m == 0)
//        {
//            break;
//        }
//        n = n % m;
//    }
//    printf("%d", a + n);
//    return 0;
//}

//int main()
//{
//    int n = 0, m = 0;
//    int a=0, b=0;
//    scanf("%d%d", &m, &n);
//    if (n > m)
//    {
//        int tmp = m;
//        m = n;
//        n = tmp;
//    }
//    while (m)
//    {
//        m = m % n;
//         if (m == 0)
//            {
//                b = n;
//                break;
//            }
//        n = n % m;
//    }
//    printf("%d", b);
//
//
//
//    return 0;
//}


//int main()
//{
//    int n;
//    scanf("%d", &n);
//    while (n)
//    {
//        if ((n % 10) % 2))
//       {
//       printf("%d", 1);
//       }
//        return 0;
//    }
//}



//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout<<(" *");
//		}
//		cout<<("\n");
//	}
//	return 0;
//}

#include<Windows.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//			Sleep(60);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	cout << "******"<<endl;
//	goto FLAG;
//	cout << "&&&&&&" << endl;
//	FLAG:
//	cout << "^^^^^^" << endl;
//
//}


#include<string>
//int main()
//{
//	int* arr;
//	arr = (int*)malloc(10 * sizeof(int));
//	if (arr == NULL)
//	{
//		exit(-1);
//	}
//	else
//	{
//		arr[9] = { 10 };
//		cout << " " << arr[9];
//		free(arr);
//		arr = NULL;
//	}
//	return 0;
//}

//void test(int arr[])
//{
//	int sz = sizeof(&arr) / sizeof(arr[0]);
//	printf("%d", sz);
//
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	//int sz = sizeof(&arr) / sizeof(arr[0]);
//	//printf("%d", sz);
//	test(arr);
//	return 0;
//}


//int main()
//{
//	int Max = 0;
//	int arr[5] = { 300,350,200,400,250 };
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr[i] > Max)
//		{
//			Max = arr[i];
//		}
//	}
//	printf("%d", Max);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,3,3,4,3,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dest = 0;
//	int sour = 0;
//	int value = 3;
//	while (sour < sz)
//	{
//		if (arr[sour] != value)
//		{
//			arr[dest] = arr[sour];
//			sour++;
//			dest++;
//		}
//		else
//		{
//			sour++;
//		}
//	}
//	printf("%d", dest);
//	return 0;
//}

//int BinarySearch(int arr[], int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,3,4,5,6,8,9,10 };
//	int k = 7;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = BinarySearch(arr, sz, k);
//	if (ret == -1)
//	{
//		printf("没有找到");
//	}
//	else
//	{
//		printf("找到了 下标是：%d", ret);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,3,6,3,7,3,8};
//	int dest = 0;
//	int sour = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int value = 3;
//	while (sour < sz)
//	{
//		if (arr[sour] != value)
//		{
//			arr[dest] = arr[sour];
//			dest++;
//			sour++;
//		}
//		else
//		{
//			sour++;
//		}
//	}
//	printf("%d", sz - dest);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0,0,1,1,2,2,3,3,4,5,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 1;
//	int dest = 0;
//	while (j < sz)
//	{
//		if (arr[i] == arr[j])
//		{
//			j++;
//		}
//		else
//		{
//			arr[dest] = arr[j];
//			dest++;
//			i = j;
//			j++;
//		}
//	}
//	arr[dest] = arr[i];
//	dest++;
//	printf("%d", dest);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,3,2,5,4 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz -1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		cout<<arr[i];
//	}
//	return 0;
//}




//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//
//	}
//	for (int n = 0; n < sz; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6 } };
//	printf("%d", arr[0][1]);
//	return 0;
//}

#define ROW 3
#define COL 3


//typedef struct S
//{
//
//};
//
//
//
//int main()
//{
//	int arr[ROW][COL] = { 0 };
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	return 0;
//}








