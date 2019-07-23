#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;

	cin>>str;

	int i,len;

	len=str.size();
	int index1=-1;
	int index2=-2;

	for(i=0;i<len-1;i++)
	{
		if(str[i]=='A' && str[i+1]=='B')
		{
			index1=i;
		}

		if(str[i]=='B' && str[i+1]=='A')
		{
			index2=i;
		}

		if(i!=(index1+1) && index1>=0 && index2>=0	)
		{
					cout<<"YES";
					return 0;
	    }
    }

	cout<<"NO";

	return 0;

}