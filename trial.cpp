#include<bits/stdc++.h>


using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map
#define bbit bitset <64>
#define INT_BITS 16

pair<  ll ,   ll > reflect (  ll  x,   ll  y,   ll  sphere, ll n)
{
	if (y == n)
	{
		if (sphere == 0)
			return {0, n - x};
		else
			return {y, x};

	}
	else if (x == n)
	{
		if (sphere == 0)
			return {y, x};
		else
			return {n - y, 0};
	}
	else if (y == 0)
	{
		if (sphere == 0)
			return {n, n - x};
		else
			return {y, x};
	}
	else
	{
		if (sphere == 0)
			return {y, x};
		else
			return {n - y, n};

	}
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
//////////////////////////////////////start...............
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;

		std::vector<int> v(n);

		for (int i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end(), greater<int>());




		int sum1 = 0 , sum2 = 0 , cnt1 = 0 , cnt2 = 0 , f1 = 0 , f2 = 0;

		for (int i = 0; i < n && (sum1 < k || sum2 < k); i++)
		{
			if (i % 2 == 0) {
				if ( sum1 < k)
					sum1 += v[i] , cnt1++;
				else if (sum2 < k)
					sum2 += v[i] , cnt1++;

			}
			else if (i % 2 == 1)
			{	if (sum2 < k)
					sum2 += v[i] , cnt1++;
				else if (sum1 < k)
					sum1 += v[i] , cnt1++;
			}
		}

		if (sum1 >= k && sum2 >= k)
			f1 = 1;



		sum1 = 0, sum2 = 0;

		for (int i = 0; i < n; i++) {
			if (sum1 < k) {
				sum1 += v[i];
				cnt2++;
			}
			else if (sum2 < k)
			{
				sum2 += v[i];
				cnt2++;
			}
			else
				break;
		}



		if (sum1 >= k && sum2 >= k)
			f2 = 1;


		if (f1 == 1 && f2 == 1)
			cout << min(cnt1, cnt2) << endl;
		else
			cout << "-1" << endl;



	}
///////////////////////end-.........................
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
// to sort string decending (); but with vec.rbegin()  and vec.rend();
// NOT WORKING SOMETIME IN ONLINE JUDGE

// itoa (ll, char* str , int base);
//atoi convert string to int;
//atol convert string to ;
//