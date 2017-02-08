#include <stdio.h>
//#include <math.h>

int main()
{
	int i, n, q, from, to, second, temp;
	scanf("%d",&n);
	scanf("%d",&q);
	int arr[n], val=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

//	scanf("%d",&temp);
	while(q--)
	{
		scanf("%d",&temp);
		if(temp==1)
		{
			scanf("%d",&second);
			
			arr[second-1] = !arr[second-1]; 
//			printf("arr is :%d%d%d",arr[0],arr[1],arr[2]);
//			printf("\nvalue of q is %d", q);
		}
		else
		{
			scanf("%d",&from);
			scanf("%d",&to);
			
			if(arr[to-1])
			{printf("ODD\n");}
			else
			{printf("EVEN\n");}
		}
	}
}
