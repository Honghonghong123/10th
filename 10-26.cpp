//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row, n, i, m, num, j;
//	scanf("%d", &row);
//	while(row--)
//	{
//		scanf("%d", &n);
//		int* arr = new int (n);
//		num = 1;
//		for(i = 0; i < n; i++)
//		{
//			scanf("%d", &m);
//			if(i == 0) *(arr + i) = m;
//			else 
//			{
//				for(j = i - 1; j >= 0; j--)
//				{
//					if(*(arr + j) <= m) break;
//					*(arr + j + 1) = *(arr + j);
//				}
//				*(arr + j + 1) = m;
//			}
//		}
//		printf("%d",arr[0]);
//		for(i = 1; i < n; i++) printf(" %d",*(arr + i));
//		puts("");
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//struct STU
//{
//	char name[15];
//	double goat[3];
//	double sum;
//}stu[5],s;
//int main()
//{
//	int i, j;
//	for(i = 0; i < 5; i++)
//	{
//		scanf("%s%lf%lf%lf", &stu[i].name, &stu[i].goat[0], &stu[i].goat[1], &stu[i].goat[2]);
//		stu[i].sum = stu[i].goat[0] + stu[i].goat[1] + stu[i].goat[2];
//	}
//	for(i = 0; i < 5; i++)
//	{
//		for(j = i + 1; j < 5; j++)
//		{
//			if(stu[i].sum < stu[j].sum)
//			{
//				s = stu[i];
//				stu[i] = stu[j];
//				stu[j] = s;
//			}
//		}
//	}
//	for(i = 0; i < 5; i++)
//	{
//		printf("%s %.1lf %.1lf %.1lf %.1lf\n",stu[i].name,stu[i].goat[0],stu[i].goat[1],stu[i].goat[2],stu[i].sum);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int i, j;
//	string str1, str2;
//	getline(cin, str1);
//	getline(cin, str2);
//	str1.append(str2);
//	for(i = 0; str1[i]; i++)
//	{
//		for(j = 0; str1[j]; j++)
//		{
//			if(str1[i] < str1[j]) swap(str1[i], str1[j]);
//		}
//	}
//	for(i = 0; str1[i]; i++)
//		printf("%c",str1[i]);
//	puts("");
//	return 0;
//} 
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string s;
//	getline(cin, s);
//	transform(s.begin(),s.end(),s.begin(),::toupper);
//	for(int i = 0; s[i]; i++)
//		printf("%c",s[i]);
//	puts("");
//	return 0;
//} 
#include<bits/stdc++.h>
using namespace std;
struct STU
{
	char id[20];
	char name[20];
	double goat[3];
	double aver;
}stu[5],s;
int main()
{
	int i, j;
	for(i = 0; i < 5; i++)
	{
		scanf("%s%s%lf%lf%lf",&stu[i].aver, &stu[i].name, &stu[i].goat[0], &stu[i].goat[1], &stu[i].goat[2]);
		stu[i].aver = (stu[i].goat[0] + stu[i].goat[1] + stu[i].goat[2]) / 3;
	}
	for(i = 0; i < 5; i++)
	{
		for(j = i + 1; j < 5; j++)
		{
			if(stu[i].aver > stu[j].aver)
			{
				s = stu[i];
				stu[i] = stu[j];
				stu[j] = s;
			}
		}
	}
	for(i = 0; i < 5; i++)
	{
		printf("%s %s %.1lf %.1lf %.1lf %.1lf\n",stu[i].id, stu[i].name, stu[i].goat[0], stu[i].goat[1], stu[i].goat[2], stu[i].aver);
	}
	return 0;
}



















































































