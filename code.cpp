#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container


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
	int n;
	cin >> n;
	string str1, str2;
	cin >> str1 >> str2;
	std::vector<char> v;
	queue <char> q;


	rep(i, 0, n)
	v.pb(str1[i]);

	rep(i, 0, n)
	q.push(str2[i]);
	int i; int flag = 1;
	for (i = 0; i < n; i++)
	{
		flag = 1;

		for (int j = 0; j < q.size(); j++)
		{
			char c = q.front();

			if (str1[i] != c)
			{
				q.pop();
				q.push(c);
			}
			else
			{
				flag = 2;
				q.pop();
				break;

			}


		}

		if (flag == 1)
			break;


	}

	cout << q.size() << endl;

////////////////////////////////////////end-.........................
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