// Joysticks
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int a1, a2, i = 0;
	scanf("%d%d", &a1, &a2);
	while (a1 > 0 && a2 > 0 && (a1 > 1 || a2 > 1))
	{
		if (a1 < a2)
			swap(a1, a2);
		a1 -= 2;
		a2 += 1;
		i++;
	}
	cout << i;
}