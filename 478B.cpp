// Random Teams
#include <bits\stdc++.h>
using namespace std;
int main()
{
	long long m, n;
	cin >> n >> m;

	long long div = n / m, rem = n % m;
	long long mValue = div * (div - 1) / 2;
	long long min = mValue * (m - rem) + (div + 1) * (div) / 2 * rem;

	long long max = (n - m) * (n - m + 1) / 2;

	cout << min << ' ' << max << endl;
}