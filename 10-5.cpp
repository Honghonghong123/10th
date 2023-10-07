//#include<bits/stdc++.h>
//using namespace std;

//int main()
//{
//	int line,a,sum,i;
//	scanf("%d",&line);
//	while(line--)
//	{
//		sum = 1;
//		scanf("%d",&a);
//		for(i=1;i<=a;i++)
//		{
//			sum *= i;
//		}
//		printf("%d\n",sum);
//	} 
//	return 0;
//}

//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int line,n,m,sum;
//	scanf("%d",&line);
//	while(line--)
//	{
//		sum = 0;
//		scanf("%d",&n);
//		while(n--)
//		{
//			scanf("%d",&m);
//			sum += m;
//		}
//		printf("%d\n",sum);
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int line,a,b;
//	scanf("%d",&line) ;
//	while(line--)
//	{
//		scanf("%d%d",&a,&b);
//		if(a == b) printf("These numbers are equal.\n");
//		else
//		{
//			a = a>b ? a:b;
//			printf("%d\n",a);
//		}
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int line,n,n1,i,j,m,arr[20] = {};
	scanf("%d",&line);
	while(line--)
	{
		scanf("%d",&n);
		n1 = n;
		for(i=0;i<n;i++)
		{
			scanf("%d",&m);
			if(i == 0) arr[i+1] = m;
			else if(i == 1) 
			{
				if(arr[1]>m)
				{
					arr[2] = arr[1];
					arr[1] = m;
				}
				else arr[2] = m;
			}
			else
			{
				for(j=1;j<n;j++)
				{
					if(arr[j]<m)
					{
						if(j+1 == n) arr[n] = m;
						if(arr[j+1]>m)
						{
							arr[j+2] = arr[j+1];
							arr[j+1] = m;	
							break;
						}
					}			
				}				
			}
		}
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[j+1]);
		}
//		while(n--)
//		{
//			scanf("%d",&m);
//			arr[n+1] = m;
//		}
//		for(i=1;i<=n1-1;i++)
//		{
//			for(j=i+1;j<=n1;j++)
//			{
//				if(arr[i]>arr[j])
//				{
//					arr[i]=arr[i]+arr[j];
//					arr[j]=arr[i]-arr[j];
//					arr[i]=arr[i]-arr[j];
//				}
//			}
//		}
//		for(i=1;i<=n1;i++)
//		{
//			if(i != n1) printf("%d ",arr[i]);
//			if(i == n1) printf("%d\n",arr[i]);
//		}
	}
	return 0;
}


























