#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 1000000007



bool checkValid(int arr[],int n,int brr[]){
   for(int i=1;i<n;i++){
   	int a=arr[brr[0]];int b=arr[brr[i]];
   	  for(int j=0;j<i;j++)
   	  	  a &= arr[brr[j]];
   	  for(int j=i;j<n;j++)
   	  	b &=arr[brr[j]];
       if(a != b)
       	return false;
       else 
       	return true;
   }
   return true;
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
//////////////////////////////////////start........

	int t;
	cin >> t;
	while (t--) {
        int n;
        cin>>n;
        int arr[n];
        int brr[n];
        for(int i=0;i<n;i++)
        	brr[i]=i;
        for(int i=0;i<n;i++)
        	cin>>arr[i];
        int cnt=0;int c=0;
		do {c++;
			if(checkValid(arr,n,brr))
				cnt+=1%mod;
		} while (next_permutation(brr, brr + n));
		cout<<cnt<<endl;//cout<<c<<" -"<<endl;
	}
///////////////////////end-.........................

	return 0;

}


