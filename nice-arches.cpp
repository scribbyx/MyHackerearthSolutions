#include <iostream>
using namespace std;

int main()
{
	int t;

	cin>>t; //testcases
	int count=0;
	
	while(t--)
	{
		string s;
		cin>>s;
		int len = s.length();
		int top =-1;
		char *arr = new char[s.length()];

		for(int i=0;i<len;i++)
		{	
			top++;
			arr[top] = s[i];
			if(arr[top]==arr[top-1] && top>0)
			{
				top=top-2;
			}
		}
		if(top==-1)
		{
			count+=1;
		}

	}

	cout<<count;
}
