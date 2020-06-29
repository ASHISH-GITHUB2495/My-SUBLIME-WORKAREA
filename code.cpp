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
//ACTUALLY DIJKSTRA'S ALGORITHM USED FOR FINDING SHORTEST PATH FROM ONE SOURCE TO ALL THE VERTICES OF THE GRAPH......

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
	//many of the variables are declared globally for not passing to functions.....

	int a, b;
	cin >> a >> b;

	int sum = 0;

	sum = b / a;
	if (b % a != 0)
		sum++;
	cout << sum ;





/////////////////////////////end................................... ....


#ifndef ONLINE_JUDGE
	//cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
	return 0;

}

/*

c v a s selecting text or x for selecting cut
ctrl+d after selecting text to select same type
ctrl+shift+d for copy and paste the line below it
ctrl+del to delete a text
ctrl+left to jump left of line or vice versa
ctrl+shift+"/"  to comment whole block and vice versa for undo
ctrl+"/" for commenting a line

*/
