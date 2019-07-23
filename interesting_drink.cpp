#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,q;

	cin>>n;

	int x[n];
	int i,j;

	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
 	cin>>q;
    int m[q];

	for(j=0;j<q;j++)
	{
		cin>>m[j];
	}

	sort(x,x+n);

	for(j=0;j<q;j++)
	{
		cout<<upper_bound(x,x+n,m[j])-x<<"\n";
	}

	return 0;
	
}
