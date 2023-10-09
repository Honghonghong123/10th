//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int x, y, i, j, k, f, m, max, x1, y1, arr[20][20];
//	scanf("%d%d",&x,&y);
//	for(i = 0; i < x; i++)
//	{
//		for(j = 0; j < y; j++)
//		{
//			scanf("%d",&m);
//			arr[i][j] = m;
//		}
//	}
//	
//	x1 = y1 = 0;
//	for(i = 0; i < x; i++)
//	{
//		max = arr[i][0];
//		x1 = i; y1 = 0;
//		f = 0;
//		for(j = 0; j < y; j++)
//		{
//			if(arr[i][j] > max)
//			{
//				max = arr[i][j];
//				x1 = i;
//				y1 = j;
//			}
//		}
//		for(k = 0; k < x; k++)
//		{
//			if(arr[k][y1] < max)
//			{
//				f++;
//				break;
//			}
//		}
//		if(f == 0)
//		{
//			printf("%d %d %d \n", x1, y1, max);
//			return 0;
//		}	
//	}
//	printf("N\n");
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int i, j, a, num, row, arr[30][30] = {0};
//	scanf("%d",&row);
//	i = 0;
//	j = row / 2;
//	a = 1;
//	num = 0;
//	while(num != row * row)
//	{
//			arr[i][j] = a++;
//			if(arr[(i + row - 1) % row][(j + 1) % row] == 0)
//			{
//				i = (i + row - 1) % row;
//				j = (j + 1) % row;
//			}
//			else i = (i + 1) % row;
//			num++;			
//	}
//	for(i = 0; i < row; i++)
//	{
//		for(j = 0; j < row; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int i = 0, num = 0, j;
//	char arr[100], ar[100];
//	gets(arr);
//	while(arr[i] != '\n' && arr[i + 1] != '\n')
//	{
//		if('A' <= arr[i] && arr[i] <= 'Z')
//		{
//			for(j = 0; j < num; j++)
//			{
//				if(ar[j] == arr[i])
//				{
//					break;
//				}
//			}
//			if(j == num) ar[num++] = arr[i];
//		}
//		i++;
//	}
//	for(i = 0; i < num; i++)
//	{
//		printf("%c ",ar[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int A(char x)
//{
//	if('a' <= x && x <= 'z')
//	{
//		return 1;
//	}
//	else if('A' <= x && x <= 'Z')
//	{
//		return 1;
//	}
//	else return 0;
//}
//int B(char x)
//{
//	if('0' <= x && x <= '9')
//	{
//		return 1;
//	}
//	else if(x == '_')
//	{
//		return 1;
//	}
//	else return 0;
//}
//int main()
//{
//	int row, i, len, f;
//	char str[20];
//	scanf("%d",&row);
//	getchar();
//	while(row--)
//	{
//		f = 0;
//		gets(str);
//		len = strlen(str);
//		if(0 == A(str[0]))
//		{
//			printf("no\n");
//			f++;
//		}
//		for(i = 1; i < len; i++)
//		{
//			if(f == 0 && 0 == A(str[i]) && 0 == B(str[i]))
//			{	
//				printf("no\n");
//				f++;
//				break;
//			}
//		}		
//		if(0 == f)
//		{
//			printf("yes\n");
//		}
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[50], max;
	int i;
	while(scanf("%s",&str) != EOF)
	{
		i = 0;
		max = str[0];
		i = 1;
		while(str[i] != '\0')
		{
			if(str[i] > max)
			{
				max = str[i];
			}
			i++;
		}
		i = 0;
		while(str[i] != '\0')
		{
			if(str[i - 1] == max)
			{
				printf("%c(max)",str[i - 1]);
			}
			else
			{
				printf("%c",str[i - 1]);
			}
			i++;
		}
		printf("\n");
	}
	return 0;
}





















































































