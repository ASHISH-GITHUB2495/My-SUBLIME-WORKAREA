#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000
int dx[4] = {0, 1, 0, -1};
int dy[4] = { -1, 0, 1, 0};
int n;

int vis[30][30] = {0};
int dist[30][30] = {0};
char grid[30][30];
int ans;
void dfs(int x, int y)
{


	if (vis[x][y] != 1)
	{
		vis[x][y] = 1;

	}
	for (int i = 0; i < 4; i++)
	{	int xi = x + dx[i];
		int yi = y + dy[i];


		if ((xi >= 0 && xi < n) && (yi >= 0 && yi < n))
		{

			if ( grid[xi][yi] == 'E')
			{
				if (ans > dist[x][y] + 1)
					ans = dist[x][y] + 1;
			}
			if ((vis[xi][yi] != 1 && (grid[xi][yi] == 'P' )) || grid[xi][yi] == 'E')
			{

				dist[xi][yi] = dist[x][y] + 1;
				dfs(xi, yi);


			}

		}


	}



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
	ans = 0;
	cin >> n;
	int x, y, ex, ey;
	for1(0, n)
	{	for2(0, n)
		{
			cin >> grid[i][j];
			if (grid[i][j] == 'S') x = i , y = j ;
			else if (grid[i][j] == 'E') ex = i, ey = j;
		}
	}

	dfs(x, y);
	cout << dist[ex][ey] ;
	/////////////////////////////end.......................................
#ifndef ONLINE_JUDGE
	cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+" / "  to comment whole block and vice versa for undo
//ctrl+" / " for commenting a line

/*
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/