#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;

#define int long long
#define mod 1073741824

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start........
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int maxx = arr[0] , currprod = arr[0];
	for (int i = 1; i < n; i++) {
		currprod *= arr[i];

		if (arr[i] <= arr[i - 1])
			currprod = arr[i];
		maxx = max(currprod, maxx);
	}
	cout << maxx << endl;
	maxx = arr[n - 1];
	currprod = 1;
	for (int i = n - 2; i >= 0; i--) {
		currprod *= arr[i];

		if (arr[i] <= arr[i + 1])
			currprod = arr[i];
		maxx = max(currprod, maxx);
	}

	cout << maxx << endl;


///////////////////////end-.........................

	return 0;

}


