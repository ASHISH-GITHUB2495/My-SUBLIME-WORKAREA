#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define ll long long int
#define mp make_pair
#define mt make_tuple
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 50000
#define IOS ios_base:: sync_with_stdio(false);cin.tie(0);


int n;          //number of vertices
vector <pair<int, int>> *adj;
int *dist;
bool *vis;

int findMinVertex()
{
	int min = -1;

	for (int i = 0; i < n; i++)
	{
		if (vis[i] == false && ( min == -1 || dist[i] < dist[min]))
			min = i;
	}

	return min;
}


void dijkstra (  int src) // actual dijkstra algorithm
{

	fill(dist, dist + n, 999);
	fill(vis, vis + n, 0);

	dist[src] = 0; //src to src should be zero

	for (int i = 0; i < n ; i++) //or may be n-1 because when at n-1 vertex all of then should be already visited;
	{
		int min = findMinVertex();
		vis[min] = true;

		for (int j = 0; j < adj[min].size(); j++)
		{
			if (!vis[adj[min][j].first])
			{
				int newDist = dist[min] + adj[min][j].second;

				if (newDist < dist[adj[min][j].first])
					dist[adj[min][j].first] = newDist;



			}
		}




	}



	for (int i = 0; i < n; i++)
		cout << i << " " << dist[i] << endl;


}




int main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	IOS

//////////////////////////////////////start...............

	/*here we are not takeing weights , such that unweited graph and we will consider
	the edge distance as 1 for all edges*/
	int e;
	cin >> n >> e;            //just building a simple graph that is adjacency list
	dist = new int [n];
	vis = new bool [n];
	adj = new vector<pair<int, int>> [n];

	int u, v, w;
	for1(0, e)
	{
		cin >> u >> v >> w;
		adj[u].pb({v, w});
		adj[v].pb({u, w});
	}

	dijkstra(0);





/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	//printf("\nRun Time -> %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line
