//winning side
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/winning-side/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	int val[100],totalpart,n;
	char a[100];
	int sum=0,sum1=0,i,j,k;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%d",&totalpart);	
		scanf("%s",a);

		for(j=0;j<totalpart;j++)
			scanf("%d",&val[j]);
	//printf("val: %d",val[j] );
	


		for(i=0;i<totalpart;i++)
		{
			if(a[i]=='g')
			{
				sum+=val[i];
			}
			else if(a[i]=='b')
			{
				sum1+=val[i];
			}
		}

		if(sum>sum1)
		{
			printf("g %d",sum-sum1);
		}
		else
		{
			printf("b %d",sum1-sum);
		}
		printf("\n");
		sum=sum1=0;
	}
}
//return 0;



