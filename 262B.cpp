// Roma and Changing Signs
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, k, x;
	long long sum = 0;
	vector<int> negative, positive;
	scanf("%d%d", &n, &k);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x > 0)
			positive.push_back(x);
		else
			negative.push_back(x);
		sum += x;
	}
	int i = 0;
	while (i < negative.size() && k-- > 0)
		sum += negative[i++] * -2;
	if (k % 2 == 1)
	{
		if (positive.size() && negative.size())
			sum -= min(positive[0] * 2, negative.back() * -2);
		else if (positive.size())
			sum -= positive[0] * 2;
		else
			sum += negative.back() * 2;
	}
	cout << sum;
}
