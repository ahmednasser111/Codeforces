// Left-handers, Right-handers and Ambidexters
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int l, r, a;
	scanf("%d%d%d", &l, &r, &a);
	if (r > l)
		swap(r, l);
	if (a >= l - r)
		cout << (2 * l) + ((a - (l - r)) / 2 * 2);
	else
		cout << (2 * (a + r));
}