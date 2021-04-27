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
   int n = 5;
    int a[] = { 1, -5, 8, 12, -8 };
	
      int dp[n][2];
  
    // Stores sum without squaring
    dp[0][0] = a[0];
  
    // Stores sum squaring
    dp[0][1] = a[0] * a[0];
  
    // Stores the maximum subarray sum
    int max_sum = max(dp[0][0], dp[0][1]);
    for(int i = 1; i < n; i++)
    {
          
        // Either extend the subarray
        // or start a new subarray
        dp[i][0] = max(a[i],
                      dp[i - 1][0] + a[i]);
  
        // Either extend previous squared
        // subarray or start a new subarray
        // by squaring the current element
        dp[i][1] = max(dp[i - 1][1] + a[i],
                               a[i] * a[i]);
  
        dp[i][1] = max(dp[i][1],
                       dp[i - 1][0] + 
                       a[i] * a[i]);
  
        // Update maximum subarray sum
        max_sum = max(max_sum, dp[i][1]);
        max_sum = max(max_sum, dp[i][0]);
    }
      
    // Return answer
cout<<max_sum<<endl;
///////////////////////end-.........................

	return 0;

}


