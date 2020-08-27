#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

#define u_m  unordered_map







int countInY(int x, int Y[], u_m <int, int> u , int m)
{



	if (x == 0) return 0;
	if (x == 1) return u[0];

	int* idx = upper_bound(Y, Y + m, x);
	int ans = (Y + m ) - idx;

	ans += (u[0] + u[1]);

	if (x == 2) ans -= (u[3] + u[4]);
	if (x == 3) ans += u[2];




	return ans;


}






int countPairs(int X[], int Y[], int n, int m)
{
	u_m <int, int> u;
	for (int i = 0; i < m; i++)
		if (Y[i] < 5)
			u[Y[i]]++;

	int count = 0;
	sort(Y, Y + m);

	for (int i = 0; i < n; i++)
		count += countInY(X[i], Y, u, m);


	return count;


}






int32_t main()
{

	ios_base:: sync_with_stdio(false);
	cin.tie(0);


	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;

		int X[n];
		int Y[m];

		for (int i = 0; i < n; i++)
			cin >> X[i];
		for (int i = 0; i < m; i++)
			cin >> Y[i];

		cout << countPairs(X, Y, n, m) << endl;
	}




	return 0;

}

