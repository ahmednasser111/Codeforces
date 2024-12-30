// Pasha Maximizes
#include <bits\stdc++.h>
using namespace std;
int main()
{
	string s;
	int k;
	cin >> s >> k;
	int n = s.length(), idx = 0;

	while (k && idx < n)
	{
		int i = idx + 1, maxIdx = idx;
		for (; i <= min(idx + k, n - 1); i++)
		{
			if (s[maxIdx] < s[i])
			{
				maxIdx = i;
			}
		}
		k -= maxIdx - idx;
		for (int i = maxIdx; i > idx; --i)
		{
			swap(s[i], s[i - 1]);
		}
		idx++;
	}

	cout << s;
}