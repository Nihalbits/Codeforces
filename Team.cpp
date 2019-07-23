#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin>>n;

	int i;
	int ans=0;

	for(i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<3;j++)
		{
			int x;
			cin>>x;
			if(x)
				count++;
		}
		if(count>=2)
			ans++;
	}
	cout<<ans;

	return 0;
}