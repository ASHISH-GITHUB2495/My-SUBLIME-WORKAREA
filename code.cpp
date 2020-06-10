#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 1000000007
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000
#define matrix  vector <vector <ll>>
//ZECKENDORF'S THEORM
/*it states that any positive number can be represented in the form of summation of fibonnacii number
which in non equivalent to each other.*/


matrix matmul (matrix mat1, matrix mat2)
{	matrix m(2, vector<ll> (2, 0));
	m[0][0] = (mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0]) % mod;
	m[0][1] = (mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1]) % mod;
	m[1][0] = (mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0]) % mod;
	m[1][1] = (mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1]) % mod;

	return m;


}
matrix matric(matrix mat, ll n)
{
	matrix m(2, vector <ll> (2, 0));
	m[0][0] = 1;
	m[0][1] = 0;
	m[1][0] = 0;
	m[1][1] = 1;
	while (n >= 0)
	{
		if (n == 0)
			return m;

		if (n % 2 != 0)
		{	n = n - 1;
			m = matmul(m, mat);
		}
		else
		{	n = n / 2;
			mat = matmul(mat, mat);
		}

	}



}
ll findFib(ll n)
{
	if (n <= 0)
		return 0;
	matrix m(2, vector<ll> (2, 0));
	m[0][0] = 1;
	m[0][1] = 1;
	m[1][0] = 1;
	m[1][1] = 0;
	matrix mat = matric(m, n - 1);

	return mat[0][0];
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
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, m;
		cin >> n >> m;
		ll temp;
		if (n > m)
		{
			temp = n;
			n = m;
			m = temp;
		}


		ll sum = 0;
		//cout << findFib(10) << endl;

		ll sum_m = findFib(m + 2) - 1;              // sum of fib form n to m index is sum(m)-sum(n-1)
		ll sum_n = findFib(n + 2 - 1) - 1;
		//	cout << sum_m << " " << sum_n << endl;          //to compute sum(x)=fib(x+2)-1;

		cout << sum_m - sum_n << endl;


	}

/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	//printf("\nRun Time -> %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
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
