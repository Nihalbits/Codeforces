#include<bits/stdc++.h>
using namespace std;

int main()
{

	int i,j,n,k;
	cin>>n>>k;

	int h[n];
	for(i=0;i<n;i++)
	{
		cin>>h[i];
	}

	long long int sum_till_k=0;
	int sum[n];
	for(i=0;i<k;i++)
	{
		sum_till_k+=h[i];
	}
	sum[0]=sum_till_k;
	int min=sum_till_k;
	int index_min_start=0;

	for(j=1;j<=n-k;j++)
	{
		sum[j]=sum[j-1]+h[j+k-1]-h[j-1];
		if(sum[j]<min)
		{
			min=sum[j];
			index_min_start=j;
		}
	}
	cout<<index_min_start+1;

	return 0;

}