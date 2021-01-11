#include<bits/stdc++.h>
#include<string>

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

//Maximize array sum after K negations
/*
Example
Input : arr[] = {-2, 0, 5, -1, 2}
        K = 4
Output: 10
// Replace (-2) by -(-2), array becomes {2, 0, 5, -1, 2}
// Replace (-1) by -(-1), array becomes {2, 0, 5, 1, 2}
// Replace (0) by -(0), array becomes {2, 0, 5, 1, 2}
// Replace (0) by -(0), array becomes {2, 0, 5, 1, 2}


Input : arr[] = {9, 8, 8, 5}
        K = 3
Output: 20

*/
/*
the time complexity here is O(n*k) but we can reduce it to O(n)
by using priority queue....*/
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

	int n;

	cout << "Enter no. of elements \n";
	cin >> n; int k;

	vector<int> arr(n);
	cout << "Enter elements\n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "Enter k : ";
	cin >> k;

	for (int i = 1; i <= k; i++) {
		int min = INT_MAX;
		int index = -1;

		// Find minimum element in array for
		// current operation and modify it
		// i.e; arr[j] --> -arr[j]
		for (int j = 0; j < n; j++) {
			if (arr[j] < min) {
				min = arr[j];
				index = j;
			}
		}

		// this the condition if we find 0 as
		// minimum element, so it will useless to
		// replace 0 by -(0) for remaining operations
		if (min == 0)
			break;

		// Modify element of array
		arr[index] = -arr[index];
	}

	// Calculate sum of array
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];


	cout << "Required sum is : " << sum << endl;





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

// itoa (int, char* str , int base);
//atoi convert string to int;
//atol convert string to long;
//