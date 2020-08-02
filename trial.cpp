#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container





int32_t main()
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
	{	int n, i;
		cin >> n;
		int factors = 1, exponen = 0; //exponent stores power of current prime
		while (n % 2 == 0) //a separate check for 2    	{
		{	exponen++;
			n = n / 2;
		}

		factors = factors * (exponen + 1);
		exponen = 0;
		int original_n = n;
		for (i = 3; n > 1 && i <= sqrt(original_n); i += 2) //Checking for every prime number
		{
			exponen = 0;
			while (n % i == 0)
			{
				exponen++;
				n = n / i;
			}
			factors = factors * (exponen + 1);
		}
		cout << factors << endl;


	}

////////////////////////////////////////end-.........................
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
//ctrl+shift+" / "  to comment whole block and vice versa for undo
//ctrl+" / " for commenting a line

/*
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/