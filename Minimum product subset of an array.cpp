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

//Minimum product subset of an array
/*
Example
Input : a[] = { -1, -1, -2, 4, 3 }
Output : -24
Explanation : Minimum product will be ( -2 * -1 * -1 * 4 * 3 ) = -24

Input : a[] = { -1, 0 }
Output : -1
Explanation : -1(single element) is minimum product possible

Input : a[] = { 0, 0, 0 }
Output : 0

*/

/*
A better solution is to use the below facts.

1)If there are even number of negative numbers and no zeros,
  the result is the product of all except the largest valued negative number.
2) If there are an odd number of negative numbers and no zeros,
   the result is simply the product of all.
3) If there are zeros and positive, no negative, the result is 0.
   The exceptional case is when there is no negative number and all
   other elements positive then our result should be the first minimum
   positive number.
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
	vector<int> v(n);
	cout << "Enter elements\n";
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int count_neg = 0 , count_zero = 0 , prod = 1 , max_neg = INT_MIN , min_pos = INT_MAX;

	for (int i = 0; i < n; i++) {
		if (v[i] == 0)
			count_zero++;

		else if (v[i] < 0)
			count_neg++ , max_neg = max(max_neg, v[i]);

		else
			min_pos = min(min_pos, v[i]);

		prod = prod * v[i];
	}

	if (count_zero == n || count_neg == 0 && count_zero > 0)
		cout << "0" << endl;
	else if (count_neg == 0)
		cout << min_pos << endl;
	else if (count_neg % 2 == 0 && count_neg != 0)
		cout << prod / max_neg << endl;
	else
		cout << prod << endl;






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