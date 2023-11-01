// Interview
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x = 0, y = 0, c;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &c);
		x |= c;
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &c);
		y |= c;
	}
	cout << x + y;
}