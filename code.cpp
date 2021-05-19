#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007




int32_t main()
{

#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start............
	int n = 5;
	int arr[n];
	for (int i = 0; i < n; i++)cin >> arr[i];
    
    int s=arr[0];
    int f=0;
   for(int i=1;i<n;i++){
      s = arr[i]-s;
      if(s<0){
      	f=1;
      	cout<<-1<<endl;
      	break;
      }

   }
   if(f==0)
   	cout<<s<<endl;
///////////////////////end-.........................

	return 0;

}
