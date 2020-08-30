#include<iostream>
#include<string>
#include<sstream>
using namespace std;



int32_t main()
{

//////////////////////////////////////start...............
//Here we gonna make progrmm for getting element with occourc more than n/2 of array
	//approach 3 moors voting algorithm O(n)  SC-O(1)

	int t;
	cin >> t;
	while (t--)
	{	string b;
		int n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		for (int k = 0; k < n - 1; k++)
		{
			// int i = k , j = i + 1;

			// while (i < n && j < n)
			// {
			// 	string a = to_string(arr[i]);
			// 	string b = to_string(arr[j]);

			// 	if (a + b > b + a)
			// 	{
			// 		j++;
			// 	}
			// 	else
			// 	{
			// 		swap(arr[i], arr[j]);
			// 		j++;
			// 	}


			// }
			ostringstream a;
			a << arr[k];


			b += a.str();


		}
		cout << b << endl;
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;





	}

	return 0;

}



