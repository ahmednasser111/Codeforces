// Launch of Collider
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, Min = INT_MAX;
	string s;
	scanf("%d", &n);
	cin >> s;
	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n - 1; i++)
		if (s[i] == 'R' && s[i + 1] == 'L')
			Min = min(Min, (a[i + 1] - a[i]) / 2);
	cout << (Min == INT_MAX ? -1 : Min) << endl;
}
