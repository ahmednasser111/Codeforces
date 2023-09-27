// Soroban
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x;
	scanf("%d", &n);
	do
	{
		x = n % 10;
		n /= 10;
		if (x > 4)
		{
			x -= 5;
			cout << "-O|";
		}
		else
			cout << "O-|";
		for (int i = 0; i < 5; i++, x--)
			cout << (x == 0 ? "-" : "O");
		cout << endl;
	} while (n);
}