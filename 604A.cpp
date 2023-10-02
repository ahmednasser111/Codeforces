// Uncowed Forces
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int m[5], w[5], hs, hu;
	int pt[5]{500, 1000, 1500, 2000, 2500};
	for (int i = 0; i < 5; i++)
		scanf("%d", &m[i]);
	for (int i = 0; i < 5; i++)
		scanf("%d", &w[i]);
	scanf("%d%d", &hs, &hu);
	long long sum = hs * 100 - hu * 50;
	for (int i = 0; i <= 5; i++)
		sum += max(pt[i] - pt[i] * m[i] / 250 - 50 * w[i], pt[i] / 10 * 3);
	cout << sum;
}