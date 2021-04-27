#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*
=>Here we have to find the longest subarray with equal no. of odd and even
Here we will convert all even to 1 and odds to -1 and we will going to find the 
longest subarray with sum=0 (using hash map ... see gfg) ,ie, we gonna find the longest subarray where its sum = 0;
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
	int arr[] = { 12, 4, 7, 8, 9, 2, 11, 0, 2, 13};
	int n = sizeof(arr) / sizeof(arr[0]);
	
    int maxx=0 , curr=0;
    unordered_map <int,int> u; // key=curr,value = index
    for(int i=0;i<n;i++){
    	if(arr[i]%2==0)
    		curr+=1;
    	else
    		curr+=-1;

    	if(curr==0)
    		maxx=max(maxx,i+1);

    	if(u.find(curr-0)!=u.end())
    		maxx=max(maxx,i-u[curr-0]); 
    	else
    		u[curr]=i;
    }

 cout<<maxx<<endl;

///////////////////////end-.........................

	return 0;

}


