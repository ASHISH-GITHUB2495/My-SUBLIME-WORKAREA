#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container


void glid(ll a, ll b, ll n, ll heights[], ll tastiness[])
{

	ll totalTest = 0;
	if (a == b)
		cout << tastiness[a] << endl ;

	else
	{
		if (a > b)   // gliding toward left
		{
			if (heights[b] >= heights[a])
			{
				cout << "-1 " << endl;
			}
			else
			{
				ll flag = 1; ll time = 1; ll high = 0;
				totalTest = tastiness[a]; ll curr = 1; ll taste = 1;

				for (ll i = a - 1; i >= b; i--)
				{

					if (heights[i] >= heights[a])
					{
						flag = 2; break;
					}

					else if ((heights[i] < heights[a] && heights[i] >= heights[b] ) || i  == b)
					{
						if (time == 1)
						{
							high = heights[i];
							totalTest = tastiness[a] + tastiness[i];
							time++;
							curr = i;
							taste = totalTest;
						}
						else if (heights[i] >= heights[curr])
						{
							if (heights[i] >= high)
							{
								high = heights[i];
								totalTest = tastiness[a] + tastiness[i];
								curr = i;
								taste = totalTest;
							}
							else
							{
								totalTest -= tastiness[curr];
								totalTest += tastiness[i];
								curr = i;

							}

						}
						else if (heights[i] < heights[curr])
						{	totalTest = totalTest + tastiness[i] , curr = i;

						}

					}







				}

				if (flag == 2)
					cout << "-1 " << endl;
				else
					cout << totalTest << endl;


			}

		}
		else           // gliding towards right
		{	//cout << "\n------------------\n";
			if (heights[a] <= heights[b])
			{
				cout << "-1" << endl;
			}

			else
			{
				ll flag = 1; ll time = 1; ll high = 0;
				totalTest = tastiness[a]; ll curr = 1; ll taste = 1;

				for (ll i = a + 1; i <= b; i++)
				{
					if (heights[i] >= heights[a])
					{
						flag = 2; break;

					}
					else if ((heights[i] < heights[a] && heights[i] >= heights[b]) || i  == b)
					{
						if (time == 1)
						{
							high = heights[i];
							totalTest = tastiness[i] + totalTest;
							time++;
							curr = i ;
							taste = totalTest;


						}
						else if (heights[i] >= heights[curr])
						{
							if (heights[i] >= high)
							{
								high = heights[i];
								totalTest = tastiness[a] + tastiness[i];
								curr = i;
								taste = totalTest;


							}
							else
							{
								totalTest -= tastiness[curr];
								totalTest += tastiness[i];
								curr = i;

							}

						}
						else if (heights[i] < heights[curr])
						{	totalTest = totalTest + tastiness[i] , curr = i;

						}





					}





				}

				if (flag == 2)
					cout << "-1 " << endl;
				else
					cout << totalTest << endl;


			}
		}




	}
	return;
}

int main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start...............
	ll n;
	ll  q, data;
	cin >> n >> q;
	ll heights[n] = {0};
	ll tastiness[n] = {0};


	rep(i, 0, n)
	{
		cin >> heights[i];

	}

	rep(i, 0, n)
	{	cin >> tastiness[i] ;
	}


	rep(i, 0, q)
	{
		ll r;
		ll b, c; ll k;
		cin >> r;


		if (r == 1)
		{
			cin >> b >> k;
			b--;
			tastiness[b] = k;


		}
		else
		{
			cin >> b >> c;
			b--; c--;

			glid(b, c, n, heights, tastiness);


		}



	}

















////////////////////////////////////////end-.........................
#ifndef ONLINE_JUDGE
	//cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+" / "  to comment whole block and vice versa for undo
//ctrl+" / " for commenting a line

/*
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/