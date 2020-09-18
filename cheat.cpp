#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
//----------------------------------

    int tc;
    cin >> tc;
    while (tc--)
    {

        ll n, i, low = 0, high = 0;
        cin >> n;
        std::vector<ll> arr(n);
        std::vector<ll> temp(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];

        for (i = 0; i < n; i++)
        {
            ll l, r, x = 0, y = 0;

            for (l = i; l >= 0; l--)
            {
                if (arr[l] > arr[i])
                    x++;
            }
            for (r = i; r < n; r++)
                if (arr[r] < arr[i])
                    y++;

            temp[i] = x + y;
        }

        ll min = temp[0];
        ll max = temp[0];


        for (i = 0; i < n; i++)
        {
            if (temp[i] < min)
                min = temp[i];
            if (temp[i] > max)
                max = temp[i];

        }

        min = min + 1;
        max = max + 1;
        cout << min << " " << max << endl;







    }



    return 0;
}
