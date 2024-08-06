// I.O.U.
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m;
	int a, b, c, result = 0;
	scanf("%d%d", &n, &m);
	int arr[n];
	fill(arr, arr + n, 0);
	while (m--)
	{
		scanf("%d%d%d", &a, &b, &c);
		arr[a - 1] -= c;
		arr[b - 1] += c;
	}
	for (int i = 0; i < n; i++)
		if (arr[i] > 0)
			result += arr[i];
	cout << result;
}