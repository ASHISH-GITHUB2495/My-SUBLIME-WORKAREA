#include<bits/stdc++.h>
using namespace std;


void printbro(int n){
	if(n==0)
	{
		cout<<endl;
		return;
	}
	cout<<"*"<<" ";
	printbro(n-1);
}


void printPattern(int n){
	if(n==0)
		return;
	printPattern(n-1);
	printbro(n);
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
//////////////////////////////////////start............
int n;
cin>>n;
printPattern(n);

///////////////////////end-.........................

	return 0;

}


