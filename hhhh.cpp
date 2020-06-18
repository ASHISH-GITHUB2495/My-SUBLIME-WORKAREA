#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll unsigned long long int
#define mod 1000000007
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000
#define matrix  vector <vector <ll>>





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
	// finding pythagorian triplet where a2 + b2 =c2 and a+b+c=1000
	while (true)

	{
		ll n;
		cin >> n;
		if (n == 0)
			break;

		ll i = 2; ll count = 0; int flag = 0;



		while (n % 2 == 0)
		{	n = n / 2;
			count++;
			flag = 1;
		}
		if (flag == 1)
			cout << i << "^" << count << " ";


		count = 0; flag = 0;
		i = 3;
		while (n != 1)
		{
			if (n % i == 0)
			{	flag = 1;
				n = n / i;
				count++;

			}
			else
			{
				if (flag == 1)
					cout << i << "^" << count << " ";
				i = i + 2;
				count = 0;
				flag = 0;
			}

		}

		cout << i << "^" << count << " ";
		E;
	}
/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	printf("\nRun Time -> %.10fs\n", (double)clock()  / CLOCKS_PER_SEC);
#endif
	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line
