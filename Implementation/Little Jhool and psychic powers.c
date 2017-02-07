#include <stdio.h>
#include <string.h>
int main()
{
	char string1[101];
	int j, flag[100];
	int n,counter=0;

	gets(string1);
	n=strlen(string1);

	if(string1[0]=='1')		
	{
		flag[0]=1;
	}
	else if(string1[0]=='0')
	{
		flag[0]=0;
	}

		for(j=0;j<n;j++)
			{
				if(string1[j]=='1')
				{
					flag[j+1]=1;
					if(flag[j]==1 && flag[j+1]==1)
					{	
						counter++;
						if(counter==6)
							break;
						//flag[j+1]=1;
					}
					else 
						counter=1;
					//printf("counter in 1: %d\n",counter );
				}
				else if(string1[j]=='0')
				{
					flag[j+1]=0;
					if(flag[j]==0 && flag[j+1]==0)
					{	
						counter++;
						if(counter==6)
							break;
					}
					else 
						counter=1;
					//printf("counter in 0: %d\n",counter );
				}
			}
	if(counter < 6)
		printf("Good luck!");
	else
		printf("Sorry, sorry!");

}
//return 0;
