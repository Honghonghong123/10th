//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	double x1, y1, x2, y2, distance;
//	scanf("%lf%lf%lf%lf",&x1, &y1, &x2, &y2);
//	distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
//	printf("%.2lf\n",distance);
//	return 0;
//}
//#include<bits/stdc++.h>
//#define PI 3.14159
//using namespace std;
//int main()
//{
//	int h, r, row, i;
//	double sum;
//	scanf("%d",&row);
//	while(row--)
//	{
//		i = 0;
//		sum = 0;
//		scanf("%d%d", &h, &r);
//		while(sum < 20000)
//		{
//			sum += PI * r * r * h;
//			i++;
//		}
//		printf("%d\n",i);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int k, num, arr[3] = {0};
//	scanf("%d",&num);
//	while(num--)
//	{
//		scanf("%d",&k);
//		switch(k)
//		{
//		case 1:
//			{
//				arr[0]++;
//				break;
//			}
//		case 5:
//			{
//				arr[1]++;
//				break;
//			}
//		case 10:
//			{
//				arr[2]++;
//				break;
//			}	
//		}
//	}
//	for(int i = 0; i < 3; i++)
//		printf("%d\n",arr[i]);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row, n;
//	double sum;
//	double arr[10] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
//	scanf("%d",&row);
//	while(row--)
//	{
//		sum = 0;
//		for(int i = 0; i < 10; i++)
//		{
//			scanf("%d",&n);
//			sum += n * arr[i];
//		}
//		printf("%.2lf\n",sum);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a, i, b, row, sum;
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%d",&a);
//		sum = 0;
//		for(i = 0; i < 5; i++)
//		{
//			scanf("%d",&b);
//			if(b < a) sum += b;
//		}
//		printf("%d\n",sum);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int m, i;
//	double sum, n;
//	while(scanf("%lf",&n) != EOF)
//	{
//		sum = 0;
//		for(i = 0; i < n; i++)
//		{
//			scanf("%d",&m);
//			sum += m;
//		}
//		printf("%.2lf\n",sum / n);			
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int i, h, arr[10], num;
//	num = 0;
//	for(i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	scanf("%d",&h);
//	for(i = 0; i < 10; i++)
//	{
//		if(arr[i] <= h + 30) num++;
//	}
//	printf("%d\n",num);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int day;
//	scanf("%d",&day);
//	if(day == 1 || day == 3 || day == 5) printf("NO\n");
//	else printf("YES\n"); 
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	double a, b;
//	scanf("%lf%lf",&a,&b);
//	printf("%.2lf\n",a - b);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	double a, b, sum;
//	a = 2;
//	b = 1;
//	sum = 0;
//	int n;
//	scanf("%d",&n);
//	while(n--)
//	{
//		sum += a / b;
//		a = a + b;
//		b = a - b;
//	}
//	printf("%.4lf\n",sum);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	char str[200] = {'\0'};
//	int len, i;
//	while(gets(str))
//	{
//		len = 0;
//		i = 0;
//		while(str[i++] != '\0') ;
//		printf("%d\n",i - 1);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a, sum;
//	sum = 0;
//	scanf("%d",&a);
//	while(a)
//	{
//		sum += pow(a--, 3);
//	}
//	printf("%d\n",sum);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row, i, j, n;
//	while(scanf("%d",&row) != EOF)
//	{
//		n = 1;
//		for(i = 0; i < row; i++)
//		{
//			for(j = 0; j < n; j++)
//			{
//				printf("*");
//			}
//			n += 2;
//			printf("\n");
//		}
//		n -= 2;
//		for(i = 0; i < row - 1; i++)
//		{
//			n -= 2;
//			for(j = 0; j < n; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	char str[6];
//	int i, len;
//	while(gets(str))
//	{
//		i = 0;
//		while(str[i] != '\0') i++;
//		len = i;
//		while(i--)
//		{
//			printf("%c",str[i]);
//		}
//		printf(" %d\n",len);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int safe(char * str)
//{
//	int i, a, b, c, d;
//	i = a = b = c = d = 0;
//	char x = *(str + i);
//	while(x != '\0')
//	{
//		if('a' <= x && x <= 'z') a = 1;
//		if('A' <= x && x <= 'Z') b = 1;
//		if('0' <= x && x <= '9') c = 1;
//		if(x == '~' || x == '!' || x == '@' || x == '#' || x == '$' || x == '%' || x == '^') d = 1;
//		if((a + b + c + d) >= 3) return 1;
//		x = *(str + ++i);
//	}
//	return 0;
//}
//int main()
//{
//	int row;
//	char str[16];
//	scanf("%d",&row);
//	getchar();
//	while(row--)
//	{
//		gets(str);
//		if(safe(str) == 1)
//		{
//			printf("YES\n");
//		}
//		else printf("NO\n");
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int num, i, j;
//	int arr[100] = {0};
//	while(scanf("%d",&num))
//	{
//		if(num == 0) break;
//		else
//		{
//			for(i = 0; i < num; i++)
//			{
//				scanf("%d",&arr[i]);
//			}
//		}
//		for(i = 0; i < num; i++)
//		{
//			for(j = i + 1; j < num; j++)
//			{
//				if(abs(arr[i]) < abs(arr[j]))
//				{
//					arr[i] += arr[j];
//					arr[j] = arr[i] - arr[j];
//					arr[i] -= arr[j];
//				}
//			}
//		}
//		for(i = 0; i < num; i++)
//		{
//			if(i == 0) printf("%d",arr[i]);
//			else printf(" %d",arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int num, i, k, min;
//	int arr[100] = {0};
//	while(scanf("%d",&num))
//	{
//		k = 0;
//		if(num == 0) break;
//		else
//		{
//			for(i = 0; i < num; i++)
//			{
//				scanf("%d",&arr[i]);
//				if(i == 0) min = arr[i];
//				else
//				{
//					min = min < arr[i] ? min :(k = i, arr[i]);
//				}
//			}
//			if(k == 0) ;
//			else
//			{
//				arr[k] += arr[0];
//				arr[0] = arr[k] - arr[0];
//				arr[k] -= arr[0];
//			}
//		}
//		for(i = 0; i < num; i++)
//		{
//			if(i == 0) printf("%d",arr[i]);
//			else printf(" %d",arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int sushu(int x)
//{
//	x = pow(x, 2) + x + 41;
//	if(x == 2) return 1;
//	for(int i = 2; i <= sqrt(x) + 1; i++)
//	{
//		if(x % i == 0) return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int x, y;
//	while(scanf("%d%d",&x,&y))
//	{
//		if(x == 0 && y == 0) continue;
//		else if(sushu(x) == 1 && sushu(y) == 1) printf("ok\n");
//		else printf("Sorry\n");
//	}
//	return 0;
//}



















