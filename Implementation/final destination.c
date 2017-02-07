#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	char ch;
	char *str=NULL;
	long int i,n,l=0,d=0;;
	int ar[100];

	//gets(s);
	//n=strlen(s);

	for(i=0;i!='\n';i++)
	{
		ch=getchar();
		*(str+i) = ch ;
		i++ ;
		str = (char*) realloc(str, (2*sizeof(char)) + i ) ;
	}
		*(str+i) = '\0' ;




	n=strlen(str);
	printf("n=====>%ld\n",n );
	
	for(i=0;i<n;i++)
	{
		str[i]=toupper(str[i]);
	}
	str[i]='\0';
	i=0;
	while(i<n)
	{
		if(str[i] == 'L')
		{
			l--;
		}
		else if(str[i]=='R')
		{
			l++;
		}
		else if(str[i]=='U')
		{
			d++;
		}
		else
		{
			d--;
		}
		i++;
		//printf("|%ld %ld|\n", l,d);
	}
	//printf("-----------------\n");
	printf("%ld %ld", l,d);
}
//return 0;



