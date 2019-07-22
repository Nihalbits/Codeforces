#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	const int MAX_N = 100001;
	
	long long freq[MAX_N];
	memset(freq,0,sizeof(freq));
	
	int m=0;
	while(n--)
	{
		int x;
		cin>>x;

		freq[x]++;

		m=max(m,x);
	}


	long long dp[m+1];

	dp[0]=0;
	dp[1]=freq[1];

	int i;

	for(i=2;i<=m;i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+i*freq[i]);
	}

	cout<<dp[m];

	return 0;

}