// Laptops
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x, y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		if (x != y)
		{
			cout << "Happy Alex";
			return 0;
		}
	}
	cout << "Poor Alex";
}