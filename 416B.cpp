// Art Union
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int a[m][n];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	vector<int> result(m, 0), time(n, 0);

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			time[j] = max(time[j], (j == 0 ? 0 : time[j - 1])) + a[i][j];
		}
		result[i] = time[n - 1];
	}

	for (int i = 0; i < m; i++)
		printf("%d ", result[i]);
}
