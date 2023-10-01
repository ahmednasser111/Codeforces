// Toy Cars
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x;
	scanf("%d", &n);
	vector<int> v;
	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &x);
			if (x == 1 || x == 3)
				v.erase(remove(v.begin(), v.end(), i), v.end());
		}
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
}