#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;

	cin>>n>>m;
	int i;

	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int l[m];

	for(i=0;i<m;i++)
	{
		cin>>l[i];
	}

	map<int,int> mp;
	int distinct[n];

	memset(distinct,0,sizeof(distinct));
	distinct[n-1]=1;
	mp[a[n-1]]

	for(i=n-2;i>=0;i--)
	{
		if(mp.find(a[i])==mp.end())
		{
			mp[a[i]]=1;
			distinct[i]=distinct[i+1]+1;
		}
		else
		{
			distinct[i]=distinct[i+1];
		}
	}

	for(i=0;i<m;i++)
	{
		cout<<distinct[l[i]-1]<<endl;
	}
	return 0;


	}

