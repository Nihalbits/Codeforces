#include<bits/stdc++.h>
using namespace std;

int main()
{

	int i,j,n,k;
	cin>>n>>k;

	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int extra=0;

	for(i=0;i<n-1;i++)
	{
		int sum=a[i]+a[i+1];
		if(sum>=k)
			continue;
		else
		{
			if(a[i]<k/2)
			{
				extra+=(-a[i]+k/2);
				a[i]=k/2;
			}
			extra+=(k-sum);
			a[i+1]=k-a[i];
		}
	}

	cout<<extra<<endl;

	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"";
	}
	return 0;
}