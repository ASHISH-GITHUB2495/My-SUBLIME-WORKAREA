#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string &op)
{
	if(ip.length()==0)
	{  
		return;
	}
  char temp = ip[0];
  ip.erase(ip.begin()+0);
  solve(ip,op);
  op.push_back(temp);
  
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
string ip;
cin>>ip;
string op = "";

	solve(ip,op); // 
	cout<<op<<endl;

///////////////////////end-.........................

	return 0;

}


