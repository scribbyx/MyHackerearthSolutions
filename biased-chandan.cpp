#include <iostream>
using namespace std;

int main()
{
	int t,j=0;
	long long int sum=0;
	cin>>t;

	int arr[t];
	arr[-1]=0;
	for(int i=0;i<t;i++)
	{
		cin>>arr[j];
		if(arr[j]==0)
		{
			j=j-1;
		}
		else
		{
			j++;
		}
			
	}
	for(int i=0;i<j;i++)
	{
		sum+=arr[i];
	}
	cout<<sum;

}
