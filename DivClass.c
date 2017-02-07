#include <stdio.h>
#include <math.h>
int main()
{
	int n,val1,val2,strength;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&strength);

		val1=strength/2;
		val2=strength-val1;

		printf("%d %d",&val2,&val1);
	}
}
//return 0;
}