// Drazil and Date
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int a, b, s;
	scanf("%d%d%d", &a, &b, &s);
	a = abs(a) + abs(b);
	cout << (s % 2 == (a & 1) && a <= s ? "Yes" : "No");
}