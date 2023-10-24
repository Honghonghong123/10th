//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int num, row, n, min, pmin, max, pmax;
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%d",&num);
//		int f = 0;
//		while(num--)
//		{
//			scanf("%d",&n);
//			if(f == 0)
//			{
//				min = n;
//				max = n;
//				pmin = n + 1;
//				pmax = n - 1;
//				f++;
//			}
//			else if(f == 1)
//			{
//				if(min == n);
//				else
//				{
//					min = min < n ? (max = n, min) : n;
//					pmax = min;
//					pmin = max;
//					f++;
//				}
//			}
//			else if(f == 2)
//			{
//				if(n < min)
//				{
//					pmin = min;
//					min = n;
//					f++;
//				}
//				else if(n > max)
//				{
//					pmax = max;
//					max = n;
//					f++;
//				}
//				else if(min < n && n < max)
//				{
//					pmax = n;
//					pmin = n;
//					f++;
//				}
//			}
//			else
//			{
//				if(min > n)
//				{
//					pmin = min;
//					min = n;
//				}
//				else if(pmin > n) pmin = n;
//				if(n > max)
//				{
//					pmax = max;
//					max = n;
//				}
//				else if(pmax < n) pmax = n;
//			}
//		}
//		if(row == 0)
//			printf("%d\n",pmax - pmin);
//		else printf("%d\n\n",pmax - pmin);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	double x, sum, i, j, k;
//	while(scanf("%lf",&x) != EOF)
//	{
//		sum = 1;
//		for(i = 1; i < 15; i++)
//		{
//			k = 1;
//			for(j = 1; j <= i; j++)
//			{
//				k *= j;
//			}
//			sum += pow(x, i) / k;
//		}
//		printf("%.8lf\n",sum);	
//	}
//	return 0;
//}


//考虑问题的特殊性 
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row, n, m;
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%d%d",&n,&m);
//		if(m == 0 && n == 0) printf("1\n");
//		else if(m == 0) printf("0\n");
//		else if(n % m == 0) printf("1\n");
//		else printf("0\n");
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	double n, s;
//	int m;
//	scanf("%lf%d",&n,&m);
//	s = pow(n, m);
//	printf("%.3lf\n",s);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row, n, i, j;
//	int arr[100];
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%d",&n);
//		for(i = 0; i < n; i++)
//		{
//			scanf("%d",&arr[i]);
//		}
//		for(i = 0; i < n; i++)
//		{
//			for(j = i + 1; j < n; j++)
//			{
//				if(arr[i] > arr[j])
//				{
//					arr[i] ^= arr[j];
//					arr[j] ^= arr[i];
//					arr[i] ^= arr[j];
//				}
//			}
//		}
//		for(i = 0; i < n; i++)
//		{
//			if(i == 0) printf("%d",arr[i]);
//			else printf(" %d",arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

















































































