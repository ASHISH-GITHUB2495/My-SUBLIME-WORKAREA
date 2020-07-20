#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container

bool isValid(int max, int arr[], int k, int n)
{	int student = 1;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];

		if (sum > max)
			sum = arr[i] , student++;

		if (student > k)
			return false;

	}
	return true;
}


int BS_AllocateMinimumNumberPages(int max , int sum , int arr[] , int k, int n)
{
	int start = max , end = sum;
	int res = -1;
	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (isValid(mid, arr, k, n))
			res = mid, end = mid - 1;

		else
			start = mid + 1;

	}

	return res;
}


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
	//  HERE THE FAMOUS PROBLEM -- ALLOCATING MINIMUM NUMBER OF MAXIMUM PAGES TO A STUDENT---

	/*	PROBLEM -
		Here you have given books 'n' and
	*/





	int n;
	cin >> n;

	int arr[n];
	int max = -1; //to keep maximum number of pages
	int sum = 0; // to keep sumof pages

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (max < arr[i])
			max = arr[i];
		sum = sum + arr[i];
	}

	int k;
	cin >> k;

	if (k > n)                //no. of students is more
		cout << "Its impossible\n";
	else
	{
		int i = BS_AllocateMinimumNumberPages(max, sum, arr, k, n);
		cout << "the minimum  of maximum pages allocated to a student is " << i << endl;
	}


	return 0;
////////////////////////////////////////end-.........................
#ifndef ONLINE_JUDGE
	//cout << "\n\n\n\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
	return 0;

}

