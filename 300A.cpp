// Array
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x, y = 0;
	vector<int> p, neg;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x > 0)
			p.push_back(x);
		else if (x < 0)
		{
			if (y == 0)
				y = x;
			else
				neg.push_back(x);
		}
	}

	cout << "1 " << y << endl;
	x = neg.size() / 2 * 2;
	cout << p.size() + x << ' ';
	for (int i : p)
		cout << i << ' ';
	int i;
	for (i = 0; i < x; i++)
		cout << neg[i] << ' ';
	if (i == neg.size())
		cout << "\n1 0";
	else
		cout << "\n2 " << neg[x] << " 0";
}