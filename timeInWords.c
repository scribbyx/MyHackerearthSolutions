#include <stdio.h>

int main()
{
	char minutes[][20] = {"one minute", "two minutes", "three minutes", "four minutes", "five minutes", "six minutes", "seven minutes", "eight minutes", "nine minutes", "ten minutes", "eleven minutes", "twelve minutes", "thirteen minutes", "forteen minutes", "quarter", "sixteen minutes", "seventeen minutes", "eighteen minutes", "nineteen minutes", "twenty minutes", "twenty one minutes", "twenty two minutes", "twenty three minutes", "twenty four minutes", "twenty five minutes", "twenty six minutes", "twenty seven minutes", "twenty eight minutes", "twenty nine minutes", "half"}; 
	char hours[][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"}; 

	int h,m,diff;
	scanf("%d %d", &h, &m);

	if(m==0)
	{
		printf("%s o' clock",hours[h-1]);
	}
	else if(m==15)
	{
		printf("quarter past %s",hours[h-1]);
	}
	else if(m<30)
	{
		printf("%s past %s",minutes[m-1],hours[h-1]);
	}
	else if(m==30)
	{
		printf("half past %s",hours[h-1]);
	}
	else if(m==45)
	{
		printf("quarter to %s",hours[h]);
	}
	else if(m>30)
	{
		diff=60-m;
		printf("%s to %s",minutes[diff-1],hours[h]);
	}
}