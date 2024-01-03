// Tic-Tac-Toe ( I )
#include <iostream>
using namespace std;
string s[3];
bool winning(char c)
{
	string win = string(3, c);
	for (int i = 0; i < 3; i++)
		if (s[i] == win)
			return 1;
	for (int i = 0; i < 3; i++)
		if (string(1, s[0][i]) + s[1][i] + s[2][i] == win)
			return 1;
	if (string(1, s[0][0]) + s[1][1] + s[2][2] == win)
		return 1;
	if (string(1, s[0][2]) + s[1][1] + s[2][0] == win)
		return 1;
	return 0;
}
int main()
{
	int n, xs, os;
	scanf("%d", &n);
	while (n--)
	{
		xs = os = 0;
		for (int i = 0; i < 3; i++)
		{
			cin >> s[i];
			for (int j = 0; j < 3; j++)
				if (s[i][j] == 'X')
					xs++;
				else if (s[i][j] == 'O')
					os++;
		}
		if (os > xs || xs > os + 1 || (winning('X') && winning('O')) || (winning('O') && xs != os) || (winning('X') && xs != os + 1))
			cout << "no";
		else
			cout << "yes";
		cout << '\n';
	}
}