// Vasya and Digital Root
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int k, d;
	scanf("%d%d", &k, &d);
	if (k > 1 && d == 0)
		cout << "No solution";
	else
	{
		cout << d;
		for (int i = 0; i < k - 1; i++)
			cout << 0;
	}
}