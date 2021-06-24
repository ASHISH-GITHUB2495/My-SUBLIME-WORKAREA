#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long 
#define E cout<<endl
#define MAX  1000002





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
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
  
    sort(v.begin(), v.end());
    vector <int> diff;

    for (int i = 1; i < v.size(); i++) {
        int d = abs(v[i - 1] - v[i]);
        if (d > x)
            diff.push_back(d);
    }
    //cout<<"ji"<<endl;

    sort(diff.begin(), diff.end());
    int cnt = diff.size();
    for (auto i : diff) {
        int dd = ceil((double)i / x - 1);
     //   cout << dd <<" "<<k-dd<<" "<<ceil((double)i/x)<< endl;
        if (k - dd >= 0)
            cnt--, k -= dd;

    }

    cout << cnt + 1 << endl;


////////////////////////////////////////end-.........................
#ifndef ONLINE_JUDGE
    cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
    return 0;

}




//->Below is something
















//----SUBLIME SHORTCUT----
// string binary = std::bitset<10>(101).to_string(); to convert to binary in string any number
//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+" / "  to comment whole block and vice versa for undo
//ctrl+" / " for commenting a line

/*

//-----TIME COMPLEXITY------
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/


//--PRIORITY QUEUE-----
//to implement priority queue --- by default - max priority queue --> priority_queue <int> p;
//to implement min priority queue  ---> priority_queue <int, vector<int>,greater<int>> p;



//to implement dijikstra implement max priority queue in bfs...