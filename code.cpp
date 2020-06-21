#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 1000000
vector <int> adj[2001];
int vis[2001];
int col[2001];


bool dfs(int s)
{	fill(vis, vis + 2001, 0);
	fill(col, col + 2001, -1);
	stack <int> st;
	st.push(s); int c = 1;
	col[s] = c;

	while (!st.empty())
	{
		int f = st.top(); st.pop();


		if (vis[f] != 1)
			vis[f] = 1;

		for (int i = 0; i < adj[f].size(); i++)
		{

			if (vis[adj[f][i]] == 0)
			{
				dfs(adj[f][i]);
				col[adj[f][i]] = c ^ 1;

			}

			if (col[adj[f][i]] == col[f])
				return false;

		}



	}



	return true;

}


int main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start...............
	int t;
	cin >> t;
	for (int k = 1; k <= t; k++)
	{


		int n, m;
		cin >> n >> m;
		int u, v;

		for (int i = 1; i <= n; i++)
			adj[i].clear();

		for (int i = 0; i < m; i++)
		{	cin >> u >> v;
			adj[u].pb(v);
			adj[v].pb(u);

		}

		bool ans = dfs(1);
		cout << "Scenario #" << t << ":" << endl;
		if (ans)
			cout << "No suspicious bugs found!" << endl;
		else
			cout << "Suspicious bugs found!" << endl;

	}
/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	//cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
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

/*
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/
