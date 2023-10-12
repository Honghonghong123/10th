//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	char arr1[100], arr2[100];
//	int len, i, j;
//	while(scanf("%s %s",&arr1, &arr2) != EOF)
//	{
//		getchar();
//		len = strlen(arr1) < strlen(arr2) ? strlen(arr1) : strlen(arr2);
//		j = 0;
//		i = 0;
//		while(arr1[i] != '\0' && arr2[j] != '\0')
//		{
//			if(arr1[i] == arr2[j])
//			{
//				i++;
//				j++;
//			}
//			else j++;
//		}
//		if('\0' == arr1[i])
//		{
//			printf("Yes\n");
//		}
//		else printf("No\n");
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n, m, i, arr1[30], arr2[30];
//	scanf("%d%d",&n,&m);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d",&arr1[i]);
//	}
//	for(i = 0; i < n; i++)
//	{
//		arr2[(i + m) % n] = arr1[i];
//	}
//	for(i = 0; i < n; i++)
//	{
//		if(i == 0) printf("%d",arr2[i]);
//		else printf(" %d",arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n, m, sum, i, k, f;
//	char arr[10] = {'0'};
//	while(scanf("%d%d",&n,&m) != EOF)
//	{
//		if(n == 0)
//		{
//			printf("0\n");
//			continue;
//		}
//		f = 0;
//		sum = 0;
//		i = 0;
//		if(n < 0)
//		{
//			n = -n;
//			f = 1;
//		}
//		while(n != 0)
//		{
//			k = n % m;
//			if(0 <= k && k <= 9)
//			{
//				arr[i++] = k + '0';
//			}
//			else
//			{
//				arr[i++] = k + 'A' - 10;
//			}
//			n /= m;
//		}
//		if(f == 1) arr[i] = '-';
//		while((f + i--) != 0)
//		{
//			printf("%c",arr[i + f]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row, i, j, k;
	char str[20];
	char* arr[100];
	char* t;
	scanf("%d",&row);
	for(i = 0; i < row; i++)
	{
		scanf("%s",&str);
		arr[i] = str;
	}
	for(i = 0; i < row; i++)
	{
		for(j = i + 1; j < row; j++)
		{
			if(0 < strcmp(arr[i],arr[j]))
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	for(i = 0; i < row; i++)
	{
		printf("%s\n",arr[i]);
	}
	return 0;
}
































