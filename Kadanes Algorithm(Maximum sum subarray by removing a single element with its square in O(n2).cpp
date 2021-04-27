#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*
Maximum subarray sum that can be possible by removeing
the single element with its square
*/
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
	int n = 5;
	int arr[] = {1, -5, 8, 12, -8} ;



	int actualMax = arr[0]; int maxx = arr[0];
	for (int j = 0; j < n; j++) {
		int arr2[n] ;
		for (int i = 0; i < n; i++)
			arr2[i] = arr[i];
		arr2[j] = (arr2[j] * arr2[j]);
		int curr = arr2[0]; maxx = arr2[0];
		for (int i = 0; i < n; i++) {
			if (curr + arr2[i] < arr2[i]) {
				curr = arr2[i];
			} else {
				curr += arr2[i];
			}

			maxx = max(curr, maxx);
		}

		actualMax = max(maxx, actualMax);
	}


	cout << actualMax << endl;



///////////////////////end-.........................

	return 0;

}


