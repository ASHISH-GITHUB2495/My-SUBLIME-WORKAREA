#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 1073741824



int32_t main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start........
	int arr[] = {1,25, 8, 12, -8};
	int n = sizeof(arr) / sizeof(arr[0]);

	int currBest =  arr[0];
	int maxBest = arr[0];
	for (int i = 1; i < n; i++) {
		if (currBest + arr[i] < arr[i]) // if(currBest<0) both correct
			currBest = arr[i];
		else
			currBest += arr[i];
		maxBest = max(maxBest, currBest);
	}

	cout << maxBest << endl;


///////////////////////end-.........................

	return 0;

}


