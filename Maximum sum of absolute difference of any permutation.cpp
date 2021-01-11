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

//Maximum sum of absolute difference of any permutation
/*
Example
Input : { 1, 2, 4, 8 }
Output : 18
Explanation : For the given array there are
several sequence possible
like : {2, 1, 4, 8}
       {4, 2, 1, 8} and some more.
Now, the absolute difference of an array sequence will be
like for this array sequence {1, 2, 4, 8}, the absolute
difference sum is
= |1-2| + |2-4| + |4-8| + |8-1|
= 14
For the given array, we get the maximum value for
the sequence {1, 8, 2, 4}
= |1-8| + |8-2| + |2-4| + |4-1|
= 18
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
//////////////////////////////////////start...............

	int n;

	cout << "Enter no. of elements \n";
	cin >> n;
	vector<int> arr(n);
	cout << "Enter elements\n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];


	sort(arr.begin(), arr.end());

	for (int i = 1; i < n ; i += 1)
	{
		swap(arr[i], arr[n - 1]);
	}
	if (n % 2 == 1)
		swap(arr[n - 1], arr[n - 2]);

	int sum = 0;

	for (int i = 0; i < n - 1; i++)
		sum += abs(arr[i] - arr[i + 1]);

	sum += abs(arr[n - 1] - arr[0]);

	cout << "Required sum: " << sum << endl;


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