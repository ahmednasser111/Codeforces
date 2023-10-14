// Tavas and Nafas
#include <bits\stdc++.h>
using namespace std;
int main()
{
	string digits[2][9]{
	    {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}, {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"}};
	string zero[10]{"zero", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	string ones[9]{"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	int n;
	scanf("%d", &n);
	if (n % 10 == 0)
		cout << zero[n / 10];
	else if (n > 10 && n < 20)
		cout << ones[n % 10 - 1];
	else
	{
		string s = to_string(n);
		for (int i = 0; i < s.length(); i++)
		{
			if (i == 1)
				cout << '-';
			cout << digits[s.length() - i - 1][s[i] - '0' - 1];
		}
	}
}