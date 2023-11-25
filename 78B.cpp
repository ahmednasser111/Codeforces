// Easter Eggs
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	string a[7] = {"", "G", "GB", "YGB", "YGBI", "OYGBI", "OYGBIV"};
	scanf("%d", &n);
	for (int i = 0; i < n / 7; i++)
		cout << "ROYGBIV";
	cout << a[n % 7];
}