// Initial Bet
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int x, sum = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &x);
		sum += x;
	}
	cout << (sum % 5 == 0 && sum > 4 ? sum / 5 : -1);
}