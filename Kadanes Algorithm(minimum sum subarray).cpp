#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*
this is not mine written.. by gfg
mine was deleted by mistake
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
	int arr[] = { 2, 6, 8, 1, 4};
	int n = sizeof(arr) / sizeof(arr[0]);

    int minn = arr[0],curr=arr[0];
    for(int i=1;i<n;i++){
    	if(curr+arr[i]>arr[i])
    		curr=arr[i];
    	else
    		curr+=arr[i];

    	minn=min(minn,curr);
    }
  cout<<minn<<endl;


///////////////////////end-.........................

	return 0;

}


