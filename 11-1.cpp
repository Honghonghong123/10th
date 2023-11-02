#include<bits/stdc++.h>
using namespace std;
//旋转90，后比较
int f1(char arr1[10][10], char arr2[10][10], int n)
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) if(arr1[i][j] != arr2[j][n - 1 - i]) return 0;
	return 1;
}
//旋转180，后比较
int f2(char arr1[10][10], char arr2[10][10], int n)
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) if(arr1[i][j] != arr2[n - 1 - i][n - 1 - j]) return 0;
	return 1;
}
//旋转270，后比较
int f3(char arr1[10][10], char arr2[10][10], int n)
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) if(arr2[i][j] != arr1[j][n - 1 - i]) return 0;
	return 1;
}
//水平调换
int f4(char arr1[10][10], char arr2[10][10], int n)
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) if(arr1[i][j] != arr2[i][n - 1 - j]) return 0;
	return 1;
}
int f5(char arr1[10][10], char arr2[10][10], int n)
{
	char arr3[10][10] = {'\0'};
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) arr3[i][j] = arr1[i][n - 1 - j];
	if(f1(arr3, arr2, n) == 1) return 1;
	if(f2(arr3, arr2, n) == 1) return 1;
	if(f3(arr3, arr2, n) == 1) return 1;
	return 0;
}
//没变化
int f6(char arr1[10][10], char arr2[10][10], int n)
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) if(arr1[i][j] != arr2[i][j]) return 0;
	return 1;
}


int main()
{
	int n, i, j;
	char arr1[10][10], arr2[10][10];
	scanf("%d", &n);
	getchar();
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++) scanf("%c", &arr1[i][j]);
		getchar();		
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++) scanf("%c", &arr2[i][j]);
		getchar();
	}
	if(f1(arr1, arr2, n) == 1) printf("1\n");
	else if(f2(arr1, arr2, n) == 1) printf("2\n");
	else if(f3(arr1, arr2, n) == 1) printf("3\n");
	else if(f4(arr1, arr2, n) == 1) printf("4\n");
	else if(f5(arr1, arr2, n) == 1) printf("5\n");
	else if(f6(arr1, arr2, n) == 1) printf("6\n");
	else printf("7\n");
	return 0;
}
