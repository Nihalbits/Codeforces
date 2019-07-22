/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>

using namespace std;


int cut_ribbon(int arr[],int N,int n,int pieces)
{

if(N==0)
{
return pieces;
}
if(N<0 || n<0)
{
return 0;
}
int ans=INT_MIN;

int sol1=(cut_ribbon(arr,N-arr[n],n,pieces+1));
int sol2=(cut_ribbon(arr,N,n-1,pieces));


ans=max(sol1,sol2);

return ans;
}
int main()
{
	int N;
	cin>>N;
	int a,b,c;
	cin>>a>>b>>c;
    int arr[3];
	arr[0]=a;
	arr[1]=b;
	arr[2]=c;


	cout <<cut_ribbon(arr,N,2,0);
	return 0;

}