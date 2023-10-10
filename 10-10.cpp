//#include<bits/stdc++.h>
//using namespace std;
//struct stu
//{
//	double x;
//	double y;
//	double z;
//	double sum;
//}s1, s2, s3, s4, s5;
//int main()
//{
//	int i, j;
//	struct stu* t;
//	struct stu*  arr[5] = {&s1,&s2,&s3,&s4,&s5
//	};
//	for(i = 0; i < 5; i++)
//	{
//		scanf("%lf %lf %lf",&(arr[i]->x),&(arr[i]->y),&(arr[i]->z));
//		arr[i] -> sum = arr[i]->x + arr[i]->y + arr[i]->z;
//	}
//	for(i = 0; i < 5; i++)
//	{
//		for(j = 0; j < 5; j++)
//		{
//			if(arr[i]->sum > arr[j]->sum)
//			{
//				t = arr[j];
//				arr[j] = arr[i];
//				arr[i] = t;
//			}
//		}
//	}
//	for(i = 0; i < 5; i++)
//	{
//		printf("%.1lf %.1lf %.1lf %.1lf\n",arr[i]->x,arr[i]->y,arr[i]->z,arr[i]->sum);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int year, month, day;
//	double x, y, z;
//	char name[10], sex, id[10], f[10];
//	while(scanf("%s",&f))
//	{
//		if(strcmp(f, "Quit") == 0 || strcmp(f, "Exit") == 0)
//		{
//			printf("Good bye!\n");
//			break;
//		}
//		scanf(" %s %s %c %d %d %d %lf %lf %lf", &id, &name, &sex, &year, &month, &day, &x, &y, &z);
//		printf("Insert:\n");
//		printf("%s %s %c %d %d %d %.1lf %.1lf %.1lf %.1lf %.1lf\n",id, name, sex, year, month, day, x, y, z, (x + y + z) / 3, x + y + z);
//		while(getchar() != '\n');
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//struct point
//{
//	double x;
//	double y;
//}a, b;
//int main()
//{
//	double distance;
//	scanf("%lf %lf %lf %lf",&a.x,&a.y,&b.x,&b.y);
//	distance = sqrt(pow(a.x - b.x,2) + pow(a.y - b.y,2));
//	printf("%.2lf\n",distance);
//	return 0;
////}



//有问题？？ 
//#include<bits/stdc++.h>
//using namespace std;
//int yuan(int goat, int e)
//{
//	if(goat > 80 && e >= 1) return 8000;
//	else return 0;
//}
//int wusi(int goat, int classg)
//{
//	if(goat > 85 && classg > 80) return 4000;
//	else return 0;
//}
//int youx(int goat)
//{
//	if(goat > 90) return 2000;
//	else return 0;
//}
//int xi(int goat, char x)
//{
//	if(goat > 85 && x == 'Y') return 1000;
//	else return 0;
//}
//int classc(int classg, char y)
//{
//	if(classg > 80 && y == 'Y') return 850;
//	else return 0;
//}
//struct std1
//{
//	char name[20];
//	int goat;
//	int classg;
//	char y;
//	char x;
//	int e;
//	int sum;
//};
//int main()
//{
//	int row, i, j, total, max;
//	total = 0;
//	struct std1 boy[10];
//	scanf("%d",&row);
//	for(i = 0; i < row; i++)
//	{
//		scanf("%s %d %d %c %c %d",&boy[i].name,&boy[i].goat,&boy[i].classg,&boy[i].x,&boy[i].y,&boy[i].e);
//		boy[i].sum = yuan(boy[i].goat, boy[i].e) + wusi(boy[i].goat, boy[i].classg) + youx(boy[i].goat) + xi(boy[i].goat, boy[i].y) + classc(boy[i].classg, boy[i].x); 
//	}
//	max = boy[0].sum;
//	j = 0;
//	for(i = 0; i < row; i++)
//	{
//		total += boy[i].sum;
//		if(max < boy[i].sum)
//		{
//			max = boy[i].sum;
//			j = i;
//		}
//	}
//	printf("%s\n%d\n%d\n",boy[j].name, boy[j].sum, total);
//	return 0;
//}
//
//


//有问题？？ 
//#include<bits/stdc++.h>
//using namespace std;
//int A(char x)
//{
//	if('a' <= x && x <= 'z')
//	{
//		return 1;
//	}
//	else return 0;
//}
//int A1(char x)
//{
//	if('A' <= x && x <= 'Z')
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
//	else return 0;
//}
//int C(char x)
//{
//	if(x == '~' || x == '!' || x == '@' || x == '#' || x == '$' || x == '%' || x == '^')
//	{
//		return 1; 
//	}
//	else return 0;
//}
//int main()
//{
//	int a, b, c, d, i, row, len;
//	char arr[30];
//	scanf("%d",&row);
//	getchar();
//	while(row--)
//	{
//		a = b = c = d = len = 0;
//		i = 0;
//		scanf("%s",&arr);
//		while(arr[i] != '\0')
//		{
//			len++;
//			if(1 == A(arr[i++]))
//			{
//				a = 1;
//				continue;
//			}
//			if(1 == B(arr[i++]))
//			{
//				b = 1;
//				continue;
//			}
//			if(1 == C(arr[i++]))
//			{
//				c = 1;
//				continue;
//			}
//			if(1 == A1(arr[i++]))
//			{
//				d = 1;
//				continue;
//			}
//		}
//		if((a + b + c + d) >= 3 && len >= 8 && len <= 16) 
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0; 
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row, i, len;
	char a[20], b[20];
	scanf("%d",&row);
	getchar();
	while(row--)
	{
		gets(a);
		gets(b);
		len = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
		for(i = 0; i < len; i++)
		{
			if(a[i] == b[i]);
			else
			{
				printf("%d\n",a[i] - b[i]);
				break;
			}
		}
	}
	return 0;
}



















