// 12148 - Electricity
#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n && n != 0)
	{
		int date[n][4], sum = 0, c = 0;
		for (int i = 0; i < n; i++)
			cin >> date[i][0] >> date[i][1] >> date[i][2] >> date[i][3];
		for (int i = 0; i < n - 1; i++)
		{
			date[i][0]++;
			if (date[i][0] > 31)
			{
				date[i][0] = 1;
				date[i][1]++;
				if (date[i][1] > 12)
				{
					date[i][1] = 1;
					date[i][2]++;
				}
			}
			else if (date[i][0] > 30 && (date[i][1] == 4 || date[i][1] == 6 || date[i][1] == 9 || date[i][1] == 11))
			{
				date[i][0] = 1;
				date[i][1]++;
			}
			else if (date[i][1] == 2)
			{
				if ((!(date[i][2] % 400 == 0 || (date[i][2] % 4 == 0 && date[i][2] % 100 != 0)) && date[i][0] == 29) || date[i][0] == 30)
				{
					date[i][0] = 1;
					date[i][1]++;
				}
			}
			if (date[i][0] == date[i + 1][0] && date[i + 1][1] == date[i][1] && date[i + 1][2] == date[i][2])
			{
				c++;
				sum += date[i + 1][3] - date[i][3];
			}
		}
		cout << c << ' ' << sum << endl;
	}
}