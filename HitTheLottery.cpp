#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin>>n;

	long long int bills=0;

	int denom[]={1,5,10,20,100};

	for(int j=4;j>=0;j--)
	{
		if((n%denom[j])>0)
		{
			bills+=(n/denom[j]);
			n=(n%denom[j]);
		}
		else{
			bills+=(n/denom[j]);
			break;
		}
	}

	cout<<bills;

	return 0;

}