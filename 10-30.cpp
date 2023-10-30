//#include<bits/stdc++.h> 
//using namespace std;
//typedef struct Stu
//{
//	char name[11];
//	char id[11];
//	int goal;
//}Stu;
//int main()
//{
//	int n, i, j;
//	Stu * stu;
//	scanf("%d", &n);
//	stu = (Stu *) malloc(sizeof(Stu) * n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%s %s %d", &(stu + i)->name, &(stu + i)->id, &(stu + i)->goal);
//	}
//	for(i = 0; i < n; i++)
//	{
//		for(j = i + 1; j < n; j++)
//		{
//			if((stu + i)->goal < (stu + j)->goal)
//			{
//				swap((stu + i)->goal, (stu + j)->goal);
//				swap((stu + i)->name, (stu + j)->name);
//				swap((stu + i)->id, (stu + j)->id);		
//			}
//		}
//	}
//	printf("%s %s\n", (stu) -> name, (stu) -> id);	
//	printf("%s %s\n", (stu + n - 1) -> name, (stu + n - 1) -> id);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n, i;
//	scanf("%d", &n);
//	for(i = 0; i < n / 100; i ++) printf("B");
//	for(i = 0; i < n / 10 % 10; i++) printf("S");
//	for(i = 1; i <= n % 10; i++) printf("%d",i);
//	puts("");
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n, m, i;
//	(void)scanf("%d%d", &n, &m);
//	int *arr = (int *) malloc (sizeof(int) * n);
//	for(i = 0; i < n; i++)
//	{
//		(void)scanf("%d", arr + i);
//	}
//	for(i = 0; i < (n - m) / 2; i++)
//	{
//		swap(*(arr + i), *(arr - i + n - m - 1));
//	}
//	for(i = 0; i < m / 2; i++)
//	{
//		swap(*(arr + n - i - 1), *(arr  + n + i - m));
//	}
//	for(i = 0; i < n / 2; i++)
//	{
//		swap(*(arr + i), *(arr + n - 1 - i));
//	}
//	printf("%d",*(arr + 0));
//	for(i = 1; i < n; i++) printf(" %d", *(arr + i));
//	puts("");
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	char ch, arr[10][10] = {'\0'};
//	int i, j;
//	i = j = 0;
//	while(ch = getchar(), ch != '\n')
//	{
//		if(ch != ' ')
//		{
//			arr[i][j++] = ch;
//		}
//		else 
//		{
//			j = 0;
//			i++;
//		}
//	}
//	while(i >= 0)
//	{
//		j = 0;
//		while(arr[i][j] != '\0') printf("%c",arr[i][j++]);
//		if(i != 0) printf(" ");
//		i--;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row, a, b, c, i;
	double d, e, f;
	scanf("%d", &row);
	for(i = 1; i <= row; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		d = a / 2 + a % 2 * 0.5;
		f = c / 2 + c % 2 * 0.5;
		e = b / 2 + b % 2 * 0.5;
		if(a + e > f) printf("Case #%d: true\n", i);
		else printf("Case #%d: false\n", i);
	}
	return 0;
}






























































