#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000




int main()
{

//////////////////////////////////////start...............

	ll n;
	cin >> n;
//	ll arr[n+1]={0};
	char grad[2] = {0}; // E=0  L=1 G=2;
	ll l = 1; ll r = n; int flag = 0; char ch;
	char arr[10];
	for (int i = 0; i < 20; i++)
	{
		cout << i << endl;
		cin >> ch;
		if (ch != 'E' && i % 2 == 0)
			arr[i] = ch;
		else if (ch == 'E')
			return 0;
		else
			arr[i] = ch;


	}
	for (int i = 0; i < 20; i++)
	{

		if (i % 2 == 0 && arr[i] == arr[i + 2] )
			i = i + 1;
		else
		{
			flag = 2;
			break;
		}


	}
	if (flag == 0)
		flag == 1;






	while (true)
	{

		ll y = l + (r - l) / 2;
		cout << y << endl;
		cin >> ch;
		if (ch != 'E' && flag == 1 && y % 2 != 0)
		{
			y = y + 1;
		}
		else if (ch != 'E' && flag == 2 && y % 2 == 0)
		{
			y = y + 1;
		}
		else if (ch == 'G')
		{
			l = y + 1;
		}
		else if (ch == 'L')
		{
			r = y - 1;
		}

		else
			break;


	}


/////////////////////////////end................................... ....

	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line
