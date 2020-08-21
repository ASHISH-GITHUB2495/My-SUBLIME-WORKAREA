#include<bits/stdc++.h>
#include<string>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map
#define bbit bitset <64>


string convert(int num)
{


	int len;
	if (num < 10)
		len = 1;
	else if (num < 100)
		len = 2;
	else
		len = 3;



	string single[10] = { "zero", "one", "two",
	                      "three", "four", "five",
	                      "six", "seven", "eight", "nine"
	                    };



	string two_digits[] = {"", "ten", "eleven", "twelve",
	                       "thirteen", "fourteen",
	                       "fifteen", "sixteen",
	                       "seventeen", "eighteen", "nineteen"
	                      };

	string tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty",
	                          "sixty", "seventy", "eighty", "ninety"
	                         };

	string tens_power[] = {"hundred", "thousand"};

	if (len == 1)
		return single[num];

	//string str = to_string(num);

	if (len == 2 && num < 20)
	{
		return two_digits[num - 9];
	}
	else if (len == 2 && num >= 20)
	{
		if (num % 10 == 0)
			return tens_multiple[(num / 10)];
		else
			return tens_multiple[(num / 10)] + single[num % 10];
	}
	else
		return "hundred";



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
//////////////////////////////////////start...............
	int n ;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		string str = convert(arr[i]);

		for (int i = 0; i < (int)str.size(); i++)
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
				count++;
		//cout << str << " " << count << endl;
	}
	int num = count;





	count = 0;

	for (int i = n - 1; i > 0; i--)
	{
		for (int j = i - 1; j >= 0; j--)
			if (arr[i] + arr[j] == num)
				count++;
	}

	cout << convert(count) << endl;
///////////////////////end-.........................
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
// to sort string decending (); but with vec.rbegin()  and vec.rend();
// NOT WORKING SOMETIME IN ONLINE JUDGE

// itoa (int , char* str , int base);
//atoi convert string to int;
//atol convert string to long;
//