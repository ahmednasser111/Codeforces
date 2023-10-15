// Saitama Destroys Hotel
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, s, f, t;
	scanf("%d%d", &n, &s);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &f, &t);
		s = max(s, t + f);
	}
	cout << s;
}