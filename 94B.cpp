// Friends
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x;
	scanf("%d", &n);

	vector<int> v(5, 0);
	for (int i = 0; i < n * 2; i++)
	{
		scanf("%d", &x);
		v[x - 1]++;
	}

	for (int i = 0; i < 5; i++)
	{
		if (v[i] != 2)
		{
			cout << "WIN";
			return 0;
		}
	}

	cout << "FAIL";
}