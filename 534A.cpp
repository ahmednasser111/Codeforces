// Exam
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	if (n == 2)
		n--;
	else if (n == 3)
	{
		cout << "2\n1 3";
		return 0;
	}
	cout << n << endl;
	for (int i = n - 1; i > 0; i -= 2)
		cout << i << ' ';
	for (int i = n; i > 0; i -= 2)
		cout << i << ' ';
}