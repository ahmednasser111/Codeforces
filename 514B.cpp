// Han Solo and Lazer Gun
#include <bits\stdc++.h>
using namespace std;
double calcSlope(int x1, int y1, int x2, int y2)
{
	int dy = y2 - y1, dx = x2 - x1;
	if (!dx)
		return 0;
	if (!dy)
		return INT_MAX;
	return (double)(dy) / (dx);
}
int main()
{
	int n, x, y, xi, yi;
	set<double> st;
	scanf("%d%d%d", &n, &x, &y);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &xi, &yi);

		st.insert(calcSlope(x, y, xi, yi));
	}
	cout << st.size();
}