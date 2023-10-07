//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int line,arr[20],n,m,num = 1,i,j;
//	scanf("%d",&line);
//	while(line--)
//	{
//		scanf("%d",&n);
//		for(i=0;i<n;i++)
//		{
//			scanf("%d",&m);
//			if(1 == num++) arr[i] = m;
//			else
//			{
//				for(j=i-1;j>=0;j--)
//				{
//					if(arr[j]>m)
//					{
//						arr[j+1] = arr[j];
//						if(j==0)
//						{
//							arr[j] = m;
//						}
//					}
//					if(arr[j]<m)
//					{
//						arr[j+1] = m;
//						break;
//					}
//				}
//			}
//		}
//		for(i=0;i<n;i++) printf("%d ",arr[i]);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int line,num,a,b,c;
//	scanf("%d",&line);
//	while(line--)
//	{
//		scanf("%d",&num);
//		a = num / 100;
//		b = num / 10 % 10;
//		c = num % 10;
//		printf("%d %d %d\n",a,b,c);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int x,n;
//	double sum = 1;
//	scanf("%d %d",&x,&n);
//	while(n--){
//		sum *= x;
//	}
//	printf("%.3lf\n",sum);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int line,a,b;
//	scanf("%d",&line);
//	while(line--)
//	{
//		scanf("%d%d",&a,&b);
//		a = 1^(a % b);
//		printf("%d\n",a);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a,b,c,d,e,f;
//	while(scanf("%d",&a))
//	{
//		if(0 == a) break;
//		b = a / 10000 % 10;
//		c = a / 1000 % 10;
//		d = a / 100 % 10;
//		e = a / 10 % 10;
//		f = a % 10;
//		printf("%d---%d---%d---%d---%d\n",b,c,d,e,f);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int line,num,min,f,a;
//	scanf("%d",&line);
//	while(line--)
//	{
//		scanf("%d",&num);
//		f = 0;
//		while(num--)
//		{
//			scanf("%d",&a);
//			if(0 == f++) min = a;
//			min = min < a ? min : a;
//		}
//		printf("%d\n",min);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int line,a,i;
//	long int sum,x;
//	scanf("%d",&line);
//	while(line--)
//	{
//		sum = 0;i = 0;
//		scanf("%d",&x);
//		while(x)
//		{
//			a = x % 10;
//			x = x / 10;
//			sum += a*pow(2,i++);
//		}
//		printf("%ld\n",sum);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row;
//	double max,a,b,c;
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%lf %lf %lf",&a,&b,&c);
//		max = a;
//		max = max > b ? max : b;
//		max = max > c ? max : c;
//		if((max*2-a-b-c)>0) printf("0\n");
//		else printf("1\n");
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//void Min( int* px, int* py,const int* arr,int len)
//{
//	*px = *arr;
//	*py = 0;
//	for(int i = 1;i<len;i++)
//	{
//		if(*(arr+i)<*px)
//		{
//			*px = *(arr+i);
//			*py = i;
//		}
//	}
//}
//int main()
//{
//	int num,arr[20],a,x,y,len;
//	scanf("%d",&num);
//	len = num;
//	while(num--)
//	{
//		scanf("%d",&a);
//		arr[num] = a;
//	}
//	Min(&x,&y,arr,len);
//	printf("%d %d\n",x,y);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int i;
//	char ch;
//	scanf("%c",&ch);
//	for( i = 0;i < 4;i++) printf("%c",ch);
//	printf("\n");
//	for(i = 0;i < 2;i++)
//	{
//		printf("%c",ch);
//		printf("  ");
//		printf("%c",ch);
//		printf("\n");		
//	}
//	for(int i = 0;i < 4;i++) printf("%c",ch);
//	printf("\n"); 
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row,num,b,a,sum1,sum2;
//	scanf("%d",&row);
//	while(row--)
//	{
//		sum1 = sum2 = 0;
//		scanf("%d",&a);
//		while(a--)
//		{
//			scanf("%d",&b);
//			if(0 == b % 2) sum1 += b;
//			else sum2 += b;
//		}
//		printf("%d %d\n",sum2,sum1);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row,x,y,i,j,a;
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%d%d",&x,&y);
//		int arr[x][y];
//		for(i = 0;i < x;i++)
//		{
//			for(j = 0;j < y;j++)
//			{
//				scanf("%d",&a);
//				arr[i][j] = a;
//			}
//		}
//		for(j = 0;j < y;j++)
//		{
//			for(i = 0;i < x;i++)
//			{
//				printf("%d ",arr[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <bits/stdc++.h>
//double f(double x,double y)
//{
//	if(0 > x) return x+y;
//	else return f(x-1,x+y) + x / y;
//}
//int main()
//{
//	double x,y;
//	while(scanf("%lf%lf",&x,&y) != EOF)
//	{
//		printf("%.2lf\n",f(x,y));
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	double a,b,i,sum;
//	a = 1;b = 2;
//	sum = 1;
//	for(i = 1;i <= 100;i++)
//	{
//		sum *= b++ / a++;
//		sum *= a++ / b++;
//	}
//	printf("%.3lf\n",sum * 2);
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row,i;
	char num[10];
	scanf("%d",&row);
	while(row--)
	{
		scanf("%s",&num);
		printf("6");
		for(i = 6;i <=10;i++)
		{
			printf("%c",num[i]);
		}
		printf("\n");
	}
	return 0;
}









































