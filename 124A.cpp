// The number of positions
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, a, b;
	scanf("%d%d%d", &n, &a, &b);
	cout << (a >= n - b ? n - a : b + 1);
}