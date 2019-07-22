#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];

	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int max_length=1;
	int length=1;
	for(i=1;i<n;i++)
	{
		if(arr[i]>=arr[i-1])
		{
			length++;
			max_length=max(max_length,length);
		}
		else
		{
			length=1;
		}

	}
	cout<<max_length;

	return 0;

}
