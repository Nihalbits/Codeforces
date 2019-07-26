#include<bits/stdc++.h>

using namespace std;

void bfs(list<int> adj[],int t,int n)
{
	int i;
	bool visited[n];

	for(i=0;i<n;i++)
		visited[i]=false;

	visited[0]=true;

	list<int> queue;

	queue.push_back(0);

	//list<int>::iterator x; 

	while(!queue.empty())
	{
		int front=queue.front();
		queue.pop_front();

		for(auto a : adj[front])
		{
			if(!visited[a])
			{	
				visited[a]=true;
				queue.push_back(a);
			}

			if(a==t)
			{
				cout<<"YES";
				return;
			}

	    }
	}

	   cout<<"NO";

}

void addedge(list<int> adj[],int u,int v)
{
	adj[u].push_back(v);
}

int main()
{
	int n,t;

	cin>>n>>t;

	int i;
	int a[n-1];

	t=t-1;

	for(i=0;i<n-1;i++)
	{
		cin>>a[i];
	}


	list<int> adj[n];
	for(i=0;i<n-1;i++)
		{
			addedge(adj,i,a[i]+i);
		}

		bfs(adj,t,n);
		return 0;
}



