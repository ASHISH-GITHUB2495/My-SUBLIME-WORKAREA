#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 1000000007
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000
#define matrix  vector <vector <ll>>









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
	while (t--)
	{
		int x, n;
		cin >> n >> x;
		int arr[n];

		for1(0, n)
		cin >> arr[i];

		ll oddsum = 0;
		ll evensum = 0;

		for1(0, n)
		{	if (arr[i] % 2 == 0)
				evensum = evensum + 1;
			else if (arr[i] % 2 != 0)
				oddsum = oddsum + 1;
		}
		if (x > n)
		{
			cout << "No" << endl;
			continue;
		}

		if (x % 2 != 0 && oddsum > x || evensum >= x / 2 && evensum != 0 && oddsum >= x / 2 && oddsum != 0)
		{
			cout << "Yes" << endl;
			continue;

		}
		if (x == 2 && oddsum > x || evensum >= x / 2 && oddsum >= x / 2)
		{
			cout << "Yes" << endl;
			continue;
		}








	}
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
