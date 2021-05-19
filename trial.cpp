#include<bits/stdc++.h>         //ctrl+alt+f for formate
#include<algorithm>
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
//////////////////////////////////////start........
    char one[] = "009";
    char two[] = "018";

    // using lexicographical_compare for checking
    // is "one" is less than "two"
    if ( lexicographical_compare(one, one + 3, two, two + 3))
    {
        cout << "0199";

    }
    else
    {
        cout << "0019";

    }
///////////////////////end-........................

    return 0;

}


