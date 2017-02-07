#include <stdio.h>
int main()
{
	int n, count=0;
	int temp;
	scanf("%d",&n);
	int inc_arr[n],ideal_arr[n];

	for(int i=0;i<n;i++)
		scanf("%d",&inc_arr[i]);
	for(int i=0;i<n;i++)
		scanf("%d",&ideal_arr[i]);
	
	for(int i=0;i<n;)
	{
		if(inc_arr[i]==ideal_arr[i])
		{
			count++; 
			i++;
		}
		else
		{
			for(int j=i;j<n-1;j++)
			{	
				temp 	= inc_arr[j];
				inc_arr[j]	= inc_arr[j+1];
				inc_arr[j+1] 	= temp;
			}
			count++;
		}
	}

	printf("%d",count);
	return 0;
}
