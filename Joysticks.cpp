#include<bits/stdc++.h>
using namespace std;

int main()
{

	int a,b;
	cin>>a>>b;

	int time=0;

	if(a==1 && b==1)
	{
		cout<<0;
		return 
	}
	
	while(a>0 && b>0)
	{
		while((a<=b) && (a>1 && b>=2))
		{
			time++;
			a++;
			b=b-2;
		}
		while((b<a) && (a>=2 && b>1))
		{
			time++;
			a=a-2;
			b=b+1;
		}
		if(a==1)
		{
			time++;
			a=a+1;
			b=b-2;
		}
		else if(b==1)
		{ 
			time++;
			a=a-2;
			b=b+1;
		}


	}

	cout<<time;


	return 0;
}
