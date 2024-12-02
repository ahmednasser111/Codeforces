// Physics Practical
#include <bits\stdc++.h>
using namespace std;
int main()
{
	std::ifstream input("input.txt");
	std::ofstream output("output.txt");
	int n, l = 0, r = 0, mLength = 0;

	input >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		input >> v[i];
	}
	sort(v.begin(), v.end());
	while (r < n)
	{
		while (r < n && v[l] * 2 >= v[r])
		{
			r++;
		}
		mLength = max(mLength, r - l);
		l++;
	}
	output << n - mLength << endl;
	input.close();
	output.close();
}