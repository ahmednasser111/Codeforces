// Levko and Table
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				cout << k;
			else
				cout << 0;
			cout << " ";
		}
		cout << endl;
	}
}