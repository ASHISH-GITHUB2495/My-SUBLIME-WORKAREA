#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007


bool solve(string str, int n) {
 
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'T')
            c1++;
        else
            c2++;

        if (c2 > c1)
            return false;

    }
    c1=0,c2=0;
    for (int i = n-1; i >= 0; i--) {
        if (str[i] == 'T')
            c1++;
        else
            c2++;

        if (c2 > c1)
            return false;

    }



    if (c2*2==c1)
        return true;
    else
        return false;

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
        cin >> n;
        string str;
        cin >> str;

        if (solve(str, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
///////////////////////end-........................

    return 0;

}


