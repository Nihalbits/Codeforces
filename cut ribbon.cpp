#include<bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin>>N;
	int arr[3];

	cin>>arr[0]>>arr[1]>>arr[2];


	int dp[4001];


int i;

sort(arr,arr+3);



memset(dp,0,sizeof(dp));
dp[arr[0]]=dp[arr[1]]=dp[arr[2]]=1;

for(i=1;i<=N;i++)
{
	int x,y,z;

	x=y=z=0;

	if(i-arr[0]>=0)
	{
		if(dp[i-arr[0]]>0)
		x=dp[i-arr[0]]+1;
	}
	if(i-arr[1]>=0)
	{
		if(dp[i-arr[1]]>0)
		y=dp[i-arr[1]]+1;
	}
	if(i-arr[2]>=0)
	{
		if(dp[i-arr[2]]>0)
		z=dp[i-arr[2]]+1;
	}

	dp[i]=max(dp[i],max(x,max(y,z)));
}

cout<< dp[N];

return 0;
}