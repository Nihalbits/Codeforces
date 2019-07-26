#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin>>n;

    int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	long long int count_max=1;

	long long int ans=1;
	for(int j=1;j<n;j++)
	{
		if(arr[j]>arr[j-1])
		{
			count_max++;
			ans=max(ans,count_max);
		}
		else
		{
			count_max=1;
		}
	}

	cout<<ans;

	return 0;
}


