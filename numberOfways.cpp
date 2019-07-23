#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin>>n;

	int a[n];

	int i,j;
	long long int sum=0;

	for(i=0;i<n;i++)
	{
		cin>>a[i];

		sum+=a[i];
	}

	if(sum%3!=0)
	{
		cout<<0;
		return 0;
	}

sum/=3;

int cnt[n];

memset(cnt,0,sizeof(cnt));
long long int tempsum=0;

for(i=n-1;i>=0;i--)
{
	tempsum+=a[i];

	if(tempsum==sum)
	{
	cnt[i]=1;
	}
}


for(i=n-2;i>=0;i--)
{
	cnt[i]=cnt[i]+cnt[i+1];
}

tempsum=0;
long long int ans=0;
for(i=0;i+2<n;i++)
{
	tempsum+=a[i];
	if(tempsum==sum)
	{
		ans=ans+cnt[i+2];
	}
}

cout<<ans;

return 0;
}









