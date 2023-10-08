//#include<bits/stdc++.h>
//using namespace std;
//int f(int n, int m){
//    return n == 1 ? n : (f(n - 1, m) + m - 1) % n + 1;
//}
//int main()
//{
//	int n, m;
//	while(scanf("%d%d",&n,&m))
//	{
//		if(n == 0 && m == 0) break;
//		else
//		{
//			printf("%d\n",f(n,m));
//		}
//	}
//	return 0;
//}
//?环形列表？
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row, n, i;
//	double m, sum1, sum2;
//	scanf("%d",&row);
//	while(row--)
//	{
//		sum1 = sum2 = 0;
//		scanf("%d",&n);
//		for(i = 0; i < n; i++)
//		{
//			scanf("%lf",&m);
//			sum1 += m;
//			sum2 += m * m;
//		}
//		printf("%.3lf %.3lf\n",sum1 / n,sqrt(sum2 / n - pow(sum1 / n, 2)));
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row, i, j;
//	double n, m, len, x[50], y[50];
//	scanf("%d",&row);
//	len = 0;
//	for(i = 0; i < row; i++)
//	{
//		scanf("%lf %lf",&n,&m);
//		x[i] = n;
//		y[i] = m;
//	}
//	for(i = 0; i < row; i++)
//	{
//		for(j = i + 1; j < row; j++)
//		{
//			len = (pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2)) > len ? (pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2)) : len;
//		}
//	}
//	printf("%.4lf\n",sqrt(len));	
//	return 0;
//} 
//#include<bits/stdc++.h>
//using namespace std;
//void er(int x)
//{
//	if(x != 0)
//	{
//		er(x / 2);
//		printf("%d",x % 2);
//	}
//}
//int main()
//{
//	int n;
//	while(scanf("%d",&n) != EOF)
//	{
//		er(n);
//		printf("\n");
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row, n, m, f, max;
//	scanf("%d",&row);
//	while(row--)
//	{
//		f = 1;
//		scanf("%d",&n);
//		while(n--)
//		{
//			scanf("%d",&m);
//			if(1 == f++) max = m;
//			else max = max > m ? max : m;
//		}
//		printf("%d\n",max);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int sec(int* arr, int x, int right)
//{
//	int left = 0;
//	while(left <= right)
//	{
//		if(*(arr + (left + right) / 2) == x) return	(left + right) / 2;
//		else if(*(arr + (left + right) / 2) > x)
//		{
//			right = (left + right) / 2 - 1;
//		}
//		else left = (left + right) / 2 + 1;
//	}
//	return -1;
//}
//int main()
//{
//	int n, arr[20], m, i;
//	scanf("%d",&n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d",&m);
//		arr[i] = m;
//	}
//	scanf("%d",&m);
//	printf("%d\n",sec(arr, m, n - 1));
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n, m, arr[30], i, j;
//	scanf("%d",&n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d",&m);
//		arr[i] = m;
//	}
//	for(i = 0; i < n; i++)
//	{
//		for(j = i + 1; j < n; j++)
//		{
//			if(arr[i] > arr[j])
//			{
//				arr[i] += arr[j];
//				arr[j] = arr[i] - arr[j];
//				arr[i] -= arr[j];
//			}
//		}
//	}
//	for(i = 0; i < n; i++) printf("%d ",arr[i]);
//	printf("\n"); 
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int i, j, n, m, arr[20], f;
//	scanf("%d",&n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d",&m);
//		arr[i] = m;
//	}
//	f = 0;
//	scanf("%d",&m);
//	for(i = 0; i < n; i++)
//	{
//		if(m == arr[i])
//		{
//			f++;
//			for(j = i; j < n - f; j++)
//			{
//				arr[j] = arr[j + 1];
//			}
//		}
//		if(m == arr[i]) i--;
//	}
//	for(i = 0; i < n - f; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int i, j, arr[6], num, n;
//	while(true)
//	{
//		num = 0;
//		for(i = 0; i < 6; i++)
//		{
//			scanf("%d",&n);
//			arr[i] = n;
//			if(n == 0) num += 1;		
//		}
//		if(num == 6) return 0;
//		for(i = 0; i < 6; i++)
//		{
//			for(j = 0; j < 6; j++)
//			{
//				if(j == 0) printf("%d",arr[(j + 6 - i) % 6]);
//				else printf(" %d",arr[(j + 6 - i) % 6]);
//			}
//		printf("\n");
//		}	
//	}
//	return 0;
//}


//做此题时未考虑 1.相同时；2.最大时 
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n, m, a, i, j, arr[20];
//	while(scanf("%d%d",&n,&m))
//	{
//		if(0 == n && 0 == m) break;
//		else
//		{
//			for(i = 0; i < n; i++)
//			{
//				scanf("%d",&a);
//				arr[i] = a;
//			}
//			for(i = 0; i < n; i++)
//			{
//				if(arr[i] <= m) ;
//				else
//				{
//					for(j = n; j > i; j--)
//					{
//						arr[j] = arr[j - 1];  
//					}
//					arr[j] = m;
//					break;
//				}
//			}
//			if(arr[n - 1] <= m) arr[n] = m;
//			for(i = 0; i <= n; i++) printf("%d ",arr[i]);
//			printf("\n");
//		}
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row, n, i, j, a, sum;
	scanf("%d",&row);
	while(row--)
	{
		a = 1;
		scanf("%d",&n);
		for(i = 0; i < n; i++)
		{
			sum = a;
			printf("%d ",a++);
			for(j = n; j > i + 1; j--)
			{
					sum += j;
					printf("%d ",sum);
			}
			printf("\n");
		}		
	}
	return 0;
}










































