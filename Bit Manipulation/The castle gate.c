#include <stdio.h>

int main()
{
	int n,i,j,num,count;

	scanf("%d",&n);

	while(n--)
	{
		count=0;
		scanf("%d",&num);

		for(i=1;i<num;i++)
		{
			for(j=i+1;j<=num;j++)
			{
				int r= i^j;
				if(r<=num)
				{
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
}