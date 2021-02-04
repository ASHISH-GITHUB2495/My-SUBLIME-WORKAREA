#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pt;
typedef vector<int> vt;

int n,x[333],y[333],e[333],ans;

int main(){
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base:: sync_with_stdio(false);
    cin.tie(0);    cin >> n;
    for (int i=0;i<n;i++)cin >> x[i] >> y[i];
    for (int i=0;i<n;i++)for (int j=0;j<n;j++){
        if (x[i]==x[j]&&y[i]<y[j])e[i]|=1;
        if (x[i]==x[j]&&y[i]>y[j])e[i]|=2;
        if (x[i]<x[j]&&y[i]==y[j])e[i]|=4;
        if (x[i]>x[j]&&y[i]==y[j])e[i]|=8;
    }
    for (int i=0;i<n;i++)if (e[i]==15)ans++;
    cout<<ans;
    return 0;
}
