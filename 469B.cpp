#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	int p, q, l, r, c = 0;
	unordered_set<int> timeAvailable;
	scanf("%d%d%d%d", &p, &q, &l, &r);
	pair<int, int> b[q];

	for (int i = 0; i < p; i++)
	{
		int start, end;
		scanf("%d%d", &start, &end);
		for (int j = start; j <= end; j++)
		{
			timeAvailable.insert(j);
		}
	}

	for (int i = 0; i < q; i++)
	{
		scanf("%d%d", &b[i].first, &b[i].second);
	}

	for (int i = l; i <= r; i++)
	{
		bool flag = false;
		for (int j = 0; j < q; j++)
		{
			for (int k = b[j].first; k <= b[j].second; ++k)
			{
				int moment = i + k;
				if (moment <= 1000 && timeAvailable.count(moment))
				{
					flag = true;
					++c;
					break;
				}
			}
			if (flag)
			{
				break;
			}
		}
	}

	cout << c;
	return 0;
}
