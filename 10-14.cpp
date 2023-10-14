//#include<bits/stdc++.h>
//using namespace std;
//int main ()
//{
//	int row, i, j, k;
//	char arr[100][20];
//	char t[20];
//	scanf("%d",&row);
//	for(i = 0; i < row; i++)
//	{
//		scanf("%s",&arr[i]);
//	}
//	for(i = 0; i < row; i++)
//	{
//		for(j = i + 1; j < row; j++)
//		{
//			if(0 < strcmp(arr[i],arr[j]))
//			{
//				strcpy(t, arr[i]);
//				strcpy(arr[i], arr[j]);
//				strcpy(arr[j], t);
//			}
//		}
//	}
//	for(i = 0; i < row; i++)
//	{
//		printf("%s\n",arr[i]);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//void my_cat(char* str1, char* str2)
//{
//	int i = 0;
//	int j = 0;
//	while(*(str1 + i) != '\0')
//	{
//		i++;
//	}
//	while(*(str2 + j) != '\0')
//	{
//		*(str1 + i) = *(str2 + j);
//		i++; j++;
//	}
//	*(str1 + i) = '\0';
//}
//int main()
//{
//	int row, len;
//	char str1[1000];
//	char str2[1000];
//	scanf("%d",&row);
//	getchar();
//	while(row--)
//	{
//		gets(str1);
//		gets(str2);
//		my_cat(str1,str2);
//		printf("The new string is: %s\n",str1);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int strrindex(char* s,char* t)
//{
//	int i, k, j;
//	j = 0;
//	char arr[20] = {'\0'};
//	for(i = 0; s[i] != '\0' && s[i] != '.'; i++)
//	{
//		if(s[i] == ' ')
//		{
//			arr[j] = '\0';
//			j = 0;
//			//ÅÐ¶ÏÊÇ·ñÒ»Ñù
//			if(0 == strcmp(t, arr))
//			{
//				return k;
//			}
//		}
//		else
//		{
//			if(j == 0)
//			{
//				k = i;
//			}
//			arr[j] = *(s + i);
//			j++;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	char str1[1000];
//	char str2[1000];
//	gets(str1);
//	gets(str2);
//	printf("%d\n",strrindex(str1,str2));
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x, y, i, j;
	scanf("%d%d",&x,&y);
	double arr[x][y], max;
	for(i = 0; i < x; i++)
	{
		for(j = 0; j < y; j++)
		{
			scanf("%lf",&arr[i][j]);
			if(j == 0) max = arr[i][j];
			else max = max > arr[i][j] ? max : arr[i][j];
		}
		arr[i][0] /= max;
		arr[i][1] /= max;
		arr[i][2] /= max;
	}
	for(i = 0; i < x; i++)
	{
		for(j = 0; j < y; j++)
		{
			if(j == 0)
				printf("%.2lf",arr[i][j]);
			else printf(" %.2lf",arr[i][j]); 
		}
		printf("\n");
	}
	return 0;
}


















































