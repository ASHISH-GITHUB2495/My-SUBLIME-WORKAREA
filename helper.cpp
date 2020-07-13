#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container

ll value;



ll vaccineProcessor (ll pop, ll x)
{

	if (pop == x)
		value = -1 , x = 2 * x;

	else if (pop < x)
		x = pop * 2 , value = -1;
	else
	{

		if ( (pop - x) < x)
			x = (pop / 2) * 2  , value = x;

		else
			value = pop - x , x = x * 2;


	}
	//cout << "\ngiveing vaccine at pop " << pop << " is " << x << " value is " << value << endl;
	return x;
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
	int t;
	cin >> t;
	while (t--)
	{
		ll n, x, p;
		cin >> n >> x;
		ll population[n];
		ll population2[n];
		rep(i, 0, n)
		{
			cin >>  p;
			population[i] = p;
			population2[i] = p;
		}

		sort(population, population + n);
		sort(population2, population2 + n);


		ll a;
		int count = 0;
		int flag ; ll days = 0;
		ll k = 0;
		while (1)
		{
			//cout << "\n vaccine have -->" << x << endl;
			flag = 1;
			int step = 1;
			pair <ll, ll> prev;
			pair <ll, ll> curr;

			prev = make_pair(-1, -1);
			curr = make_pair(-1, -1);


			int index;


			for (ll i = k; i < n; i++)
			{
				if (population[i] != -1 )
				{
					a = vaccineProcessor(population[i], x);
					if (x <= a)
					{	flag = 2;
						index = i;
						k = i;
						break;
					}
					else
						count++;

				}
			}
			//k--;
			if (flag == 1)
			{	//cout << "how" << endl;
				days = days + count;
				break;
			}

			//chosing the country............


			//processing country

			/*	cout << endl << "chosing country--->" << population[index] << endl;
				if (population[index] == x)
					population[index] = -1 ;

				else if (population[index] < x)
					x = population[index] , population[index] = -1;
				else
				{

					if ( (population[index] - x) < x)
						x = population[index] / 2 , population[index] = x;

					else
						population[index] = population[index] - x;


				}*/





			population[index] = value;

			//vaccine updata.....................

			x = a;

			//population updation......................
			for (int i = 0; i < n; i++)
			{
				if (population[i] != -1)
				{
					if ((population[i] * 2) > population2[i])
						population[i] = population2[i];
					else
						population[i] = population[i] * 2;




				}
			}






			/*	for (int i = 0; i < n; i++)
					cout << population[i] << " ";
				cout << "\n" << x << endl;
				E;*/

			days++;
		}



		/*
				cout << "ands->" << days  << endl << endl;
				cout << "\n------------------\n";*/

		cout << days << endl;

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