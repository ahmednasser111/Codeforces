// Dreamoon and WiFi
#include <bits\stdc++.h>
using namespace std;
int nCr(int n, int r)
{
	int result = 1;
	if (r > n - r)
		r = n - r;
	for (int i = 0; i < r; ++i)
	{
		result *= (n - i);
		result /= (i + 1);
	}

	return result;
}
int main()
{
	string a, b;
	int ia = 0, ib = 0, n = 0;

	cin >> a >> b;
	for (int i = 0; i < a.length(); i++)
	{
		ia += a[i] == '+' ? 1 : -1;

		if (b[i] == '+')
			ib++;
		else if (b[i] == '-')
			ib--;
		else
			n++;
	}
	int possible_outputs = 1 << n;
	int desired_result = abs(ia - ib);

	if (desired_result > n || ((n + desired_result) % 2 != 0))
	{
		cout << 0;
		return 0;
	}

	cout.precision(12);
	cout << fixed << (double)nCr(n, (n - desired_result) / 2) / possible_outputs << endl;
}
