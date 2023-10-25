//#include<bits/stdc++.h>
//using namespace std;
//int ss(int x)
//{
//	int i;
//	if(x == 1) return 0;
//	if(x == 2) return 1;
//	for(i = 2; i <= sqrt(x) + 1; i++)
//	{
//		if(x % i == 0) return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int a, b, num, i;
//	num = 0;
//	scanf("%d%d",&a,&b);
//	for(i = a; i <= b; i++)
//	{
//		if(i % 2 == 0) ;
//		else
//		{
//			if(ss(i) == 1)
//			{
//				if( (i + 6) <= b)
//				{
//					if(ss(i + 6) == 1 ) num++;
//				}
//			}	
//		}
//	}
//	printf("%d\n",num);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	unsigned int row, n, m, sum, j, i;
//	scanf("%u",&row);
//	while(row--)
//	{
//		scanf("%u%u",&n,&m);
//		for(i = 1; i < 16; i++)
//		{
//			sum = 0;
//			for(j = 0; j < 16; j++)
//			{
//				sum += (n >> (i + j) % 16) % 2 * pow(2, j);
//			}
//			if(sum == m)
//			{
//				puts("YES");
//				break;				
//			}
//		}
//		if(sum != m) puts("NO");
//	}
//	return 0;
//} 
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	unsigned int n;
//	while(scanf("%u",&n) != EOF)
//	{
//		printf("%u\n",(n >> 4) % 16);
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row, n, i, j, t;
	int arr[40] = {0};
	int crr[40] = {0};
	double  sum;
	scanf("%d",&row);
	while(row--)
	{
		scanf("%d",&n);
		for(i = 0; i < n; i++)
		{
			scanf("%d",&arr[i]);
			crr[i] = arr[i];
		}
		for(i = 0; i < n; i++)
		{
			for(j = i + 1; j < n; j++)
			{
				if(arr[i] > arr[j])
				{
					t = arr[i];
					arr[i] = arr[j];
					arr[j] = t;
				}
			}
		}
		t = arr[0];
		sum = 0;
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				if(arr[i] == crr[j])
				{
					if(i == 0) printf("%d",j + 1);
					else printf(" %d",j + 1);
				}
			}
			if(i > 0)
			{
				sum += t;
				t += arr[i];
			}
		}
	printf("\n%.2lf\n",sum / n);
	}
	return 0;
}



















































