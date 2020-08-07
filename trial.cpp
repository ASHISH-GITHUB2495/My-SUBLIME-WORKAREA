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

// Actually this programm is for finding the merge overlapping intervals
	// here we gonna do with time complexity O(nlogn + n)

	// this programm is wrote by me if you want to make it efficient than
	// go ahead;



	int n;
	cout << "Enter no. of paired element\n";
	cin >> n;
	cout << "Enter element pair wise\n";
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		v.pb({x, y});

	}

	sort(v.begin(), v.end());

	vector<pair<int, int>> res;
	pair <int, int> p;
	int flag = 1;

	for (auto i : v)
	{
		if (flag == 1)
		{
			p = make_pair(i.first, i.second);
			flag = 2;

		}

		if (i.first >= p.first && i.first <= p.second)
			p.second = max(p.second, i.second);
		else
			res.pb(p) , p = make_pair(i.first, i.second);

	}

	res.pb(p);
	cout << "After merging the overlapping ones\n";

	for (auto i : res)
		cout << i.first << " " << i.second << endl;



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