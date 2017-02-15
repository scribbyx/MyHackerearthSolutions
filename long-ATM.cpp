#include  <iostream>

using namespace std;

int main()
{
	int n,t, count=1;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{ 
		cin>>arr[i];
		if(i>0)
		{
			if(arr[i-1]>arr[i])
			{
				count++;
			}
		}
	}
	cout<<count;
}
