// Restoring Password
#include <bits\stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	string n[10];
	for (int i = 0; i < 10; i++)
		cin >> n[i];
	for (int i = 0; i < 80; i += 10)
	{
		for (int j = 0; j < 10; j++)
			if (s.substr(i, 10) == n[j])
			{
				cout << j;
				break;
			}
	}
}