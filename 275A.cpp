// Lights Out
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int a[3][3];
	bool b[3][3]{0};
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (a[i][j] & 1)
			{
				b[i][j] = !b[i][j];
				if (i != 0)
					b[i - 1][j] = !b[i - 1][j];
				if (i != 2)
					b[i + 1][j] = !b[i + 1][j];
				if (j != 0)
					b[i][j - 1] = !b[i][j - 1];
				if (j != 2)
					b[i][j + 1] = !b[i][j + 1];
			}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << !b[i][j];
		cout << endl;
	}
}