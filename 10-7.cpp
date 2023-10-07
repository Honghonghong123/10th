//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row, n, m;
//	double  sum, num;
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%d",&n);
//		num = 0;sum = 0;
//		while(n--)
//		{
//			scanf("%d",&m);
//			num++;
//			sum += m;
//		}
//		printf("%.2lf\n",sum / num);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//void sec(int x)
//{
//	if(x == 0) printf("%d ",x);
//	else
//	{
//		if((x / 10) == 0) printf("%d ",x);
//		else 
//		{
//			sec(x / 10);
//			printf("%d ", x % 10);
//		}
//	}
//}
//int main()
//{
//	int row, a;
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%d",&a);
//		sec(a);
//		printf("\n");
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int f(int x, int* arr)
//{
//	if(0 == x)
//	{
//		*arr = 0;
//		return *arr;
//	}
//	else if(1 == x)
//	{
//		*(arr + 1) = 1;
//		return *(arr + 1);
//	}
//	else
//	{
//		if(*(arr + x) == 0)
//		{
//			*(arr + x) = f(x - 1,arr) + f(x - 2,arr);
//			return *(arr + x);
//		}
//		else return *(arr + x);
//	}
//}
//int main()
//{
//	int a,arr[50] = {0};
//	while(scanf("%d",&a))
//	{
//		if(-1 == a) break;
//		printf("%d\n",f(a, arr));
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row, i, j, k, l;
//	k = 1;
//	scanf("%d",&row);
//	l = row / 2;
//	for(i = 0; i < row / 2; i++)
//	{
//		for(j = 0; j < l; j++) printf("-");
//		for(j = 0; j < k; j++) printf("*");
//		for(j = 0; j < l; j++) printf("-");
//		printf("\n");
//		l -= 1;
//		k += 2;
//	}
//	for(i = 0; i < row; i++) printf("*");
//	printf("\n");
//	k = row - 2;
//	l = 1;
//	for(i = 0; i < row / 2; i++)
//	{
//		for(j = 0; j < l; j++) printf("-");
//		for(j = 0; j < k; j++) printf("*");
//		for(j = 0; j < l; j++) printf("-");
//		printf("\n");
//		l += 1;
//		k -= 2;
//	}	
//	return 0;
//}if('A' <= x && x <= 'Z')
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n, num1, num2, num3;
//	double m;
//	while(scanf("%d",&n))
//	{
//		if(0 == n) break;
//		num1 = num2 = num3 = 0;
//		while(n--)
//		{
//			scanf("%lf",&m);
//			if(m > 0) num1++;
//			if(m == 0) num2++;
//			if(m < 0) num3++;		
//		}
//		printf("%d %d %d\n",num3,num2,num1);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row, sum, n, m, i, a;
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%d%d",&n,&m);
//		a = 0;sum = 0;
//		for(i = 0; i < m; i++)
//		{
//			a = a * 10 + n;
//			sum += a;
//		}
//		printf("a+aa+aaa+...=%d\n",sum);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//double count(double x)
//{
//	if(x <= 10000) return x * 0.05;
//	else if(x <= 50000) return x * 0.075;
//	else if(x <= 200000) return x * 0.085;
//	else return x * 0.1;
//}
//int main()
//{
//	double n; int row;
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%lf",&n);
//		printf("%.3lf\n",count(n) + 1000);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int sky(int x)
//{
//	int sum1, x1, sum2, i;
//	x1 = x; sum1 = sum2 = 0;
//	while(x1 != 0)
//	{
//		sum1 += x1 % 10;
//		x1 /= 10;
//	}
//	x1 = x;
//	while(x1 != 0)
//	{
//			sum2 += x1 % 16;
//			x1 /= 16;
//	}
//	if(sum1 != sum2) return 0;
//	x1 = x;
//	sum2 = 0;
//	while(x1 != 0)
//	{
//		sum2 += x1 % 12;
//		x1 /= 12;
//	}
//	if(sum1 != sum2) return 0;
//	else return 1;
//}
//int main()
//{
//	int row, n;
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%d",&n);
//		if(1 == sky(n)) printf("%d is a Sky Number.\n",n);
//		else printf("%d is not a Sky Number.\n",n);
//	}
//	return 0;
//}

















































