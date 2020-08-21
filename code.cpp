#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map
#define bbit bitset <64>

void swap(vector<int>& v , int i, int j)
{
	int temp = v[i];
	v[i] = v[j];
	v[j] = temp;
	return ;

}

void reverse(vector<int> & v, int i, int j)
{
	while (i < j)
		swap(v, i++, j--);
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

//Here we are going to find the next permutation which is just greater than the number;
	//first interview approach we are going to use the stl library .

	vector<int> v;
	int n;
	cin >> n;

	while (n != 0)
	{
		v.pb(n % 10);
		n /= 10;
	}

	reverse(v.begin(), v.end());
	//Striver_79 approach
	int i = v.size() - 2;
	while (i >= 0 && v[i] >= v[i + 1])i--;
	if (i >= 0)
	{
		int j = v.size() - 1;
		while (v[j] < v[i]) j--;

		swap(v, i, j);

	}
	reverse(v, i + 1, v.size() - 1);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	E;





///////////////////////end-.........................
#ifndef ONLINE_JUDGE
	//cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
	return 0;

}

/*
class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> r(numRows);
        for(int i=0;i<numRows;i++)
        {
            r[i].resize(i+1);
            r[i][0]= r[i][i]=1;

            for(int j=1;j<i;j++)
                r[i][j]=r[i-1][j-1]+r[i-1][j];


        }
        return r;
    }
};*/

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

// itoa (int , char* str , int base);
//atoi convert string to int;
//atol convert string to long;
//