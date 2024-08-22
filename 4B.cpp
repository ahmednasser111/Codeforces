// Before an Exam
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int d, sum, minSum, maxSum;
	scanf("%d%d", &d, &sum);
	pair<int, int> a[d];
	int ret[d];
	for (int i = 0; i < d; i++)
	{
		scanf("%d%d", &a[i].first, &a[i].second);
		minSum += a[i].first;
		maxSum += a[i].second;
		ret[i] = a[i].first;
	}
	if (sum < minSum || sum > maxSum)
	{
		cout << "NO";
		return 0;
	}
	int x = sum - minSum, i = 0;
	cout << "YES\n";
	while (x)
	{
		int temp = min(a[i].second - a[i].first, x);
		x -= temp;
		ret[i++] += temp;
	}
	for (int j : ret)
		cout << j << ' ';
}