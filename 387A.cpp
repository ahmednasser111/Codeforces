// George and Sleep
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int h1, m1, h2, m2;
	scanf("%d:%d%d:%d", &h1, &m1, &h2, &m2);
	if (m1 - m2 < 0)
	{
		h2++;
		m1 += 60;
	}
	printf("%02d:%02d", (h1 - h2 >= 0 ? h1 - h2 : 24 + h1 - h2), m1 - m2);
}