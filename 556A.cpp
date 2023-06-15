// Case of the Zeros and Ones
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x = 0;
	char c;
	scanf("%d", &n);
	while (n--)
	{
		cin >> c;
		(c == '0') ? x++ : x--;
	}
	cout << abs(x);
}