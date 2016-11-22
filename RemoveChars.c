#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() 
{
	
	char a[100], b[100],temp[100],count=1,flag=0,k;
	int j,i,n,n2;
	gets(a); gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		a[i]=tolower(a[i]);
		b[i]=tolower(b[i]);
	}
	a[i]='\0'; b[i]='\0';
	n= strlen(a);
	i=0;
	k=0;
	while(i<n)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
				{
					flag=1;
					break; //i++;
				}
		}
		if(flag!=1)
			temp[k++]=a[i];

		//printf("loop: %d\n",i );
		i++;
	}
	temp[i]='\0';
	puts(temp);
}

