#include<bits/stdc++.h>
using namespace std;


vector<int> *adj;
int *vis;

int bfs(int a,int b,int n)
{   memset(vis,0,sizeof(vis));
    int cnt=0;
    queue<int> q;
    q.push(a);
    vis[a]=1;
    int dist[n+1];
    dist[a]=0;
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        for(auto i:adj[curr])
        {
            if(vis[i]==0)
            {
                vis[i]=1;
                dist[i]=dist[curr]+1;
                if(dist[i]==b)
                {
                   cout<<i<<"->";
                    cnt+=1;
                }   
                q.push(i);
            }
        }
    }
    //cout<<endl;
    return cnt;
}


int32_t main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);

    int n,e;
    cin>>n>>e;
    adj=new vector<int> [n+1];
    vis=new int [n+1];
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int m;
    cin>>m;
   // memset(vis,false,sizeof(vis));
    for(int i=0;i<m;i++)
    {
    	
        int a,b;
        cin>>a>>b;
       //cout<<a<< "->";
        cout<<bfs(a,b,n+1);
        cout<<endl;
       
    }
    return 0;
}