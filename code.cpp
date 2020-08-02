#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container
#define bbit bitset <64>    // convert to binary as after it a(n); alloted to a



/// merging two sorted array without extra space;

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
	int n, m;
	cin >> n;
	std::vector<int> nn(n);
	rep(i, 0, n)
	cin >> nn[i];

	cin >> m;
	std::vector<int> mm(m);
	rep(i, 0, m)
	cin >> mm[i];


	int gap = ceil((n + m ) / 2);
	while (gap >= 1)
	{
		int front = 0;
		int back = front + gap;
		int ff, bb;

		while (back < n + m)
		{	int f1 = 1 , f2 = 1;
			ff = front; bb = back;
			if (front >= n)
				f1 = 2,  ff = front - n ;
			if (back >= n)
				f2 = 2,  bb = back - n ;


			if ((f1 == 1 && f2 == 1) && (nn[ff] > nn[bb]))
				swap(nn[ff], nn[bb]);
			else if ((f1 == 1 && f2 == 2) && (nn[ff] > mm[bb]))
				swap(nn[ff], mm[bb]);
			else if ((f1 == 2 && f2 == 2) && (mm[ff] > mm[bb]))
				swap(mm[ff], mm[bb]);

			front++; back++;


		}


		gap = ceil(gap / 2);
	}


	rep(i, 0, n)
	cout << nn[i] << " ";
	E;
	rep(i, 0, m)
	cout << mm[i] << " ";
	E;






///////////////////////end-.........................
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
// to sort string decending (); but with vec.rbegin()  and vec.rend();
// NOT WORKING SOMETIME IN ONLINE JUDGE

// itoa (int , char* str , int base);
//atoi convert string to int;
//atol convert string to long;
//