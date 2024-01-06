// Tic-Tac-Toe ( II )
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
	int xs, os;
	string str;
	while (cin >> str && str != "end")
	{
		xs = os = 0;
		for (int i = 0; i < 3; i++)
		{
			s[i] = str.substr(i * 3, 3);
			for (int j = 0; j < 3; j++)
				if (s[i][j] == 'X')
					xs++;
				else if (s[i][j] == 'O')
					os++;
		}
		bool wx = winning('X'), wo = winning('O');
		if (os > xs || xs > os + 1 || (wx && wo) || (wo && xs != os) || (wx && xs != os + 1) || (xs + os < 9 && !wx && !wo))
			cout << "invalid";
		else
			cout << "valid";
		cout << '\n';
	}
}