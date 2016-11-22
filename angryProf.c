#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int t,n,k,i,j;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		int count=0;

		scanf("%d %d",&n,&k);
		int a[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			if(a[j]<=0)
			{
				count++;
			}
		}
		(count>=k)?printf("NO"):printf("YES");

	}


}
