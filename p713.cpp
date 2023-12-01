// Adding Reversed Numbers
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		string a, b, ans;
		int carry = 0;
		cin >> a >> b;
		for (int i = 0; i < max(a.length(), b.length()); i++)
		{
			int x = carry;
			if (i < a.length())
				x += a[i] - '0';
			if (i < b.length())
				x += b[i] - '0';
			string temp = to_string(x);
			if (temp.length() == 2)
			{
				reverse(temp.begin(), temp.end());
				carry = temp[1] - '0';
			}
			else
				carry = 0;
			ans += temp[0];
		}
		if (carry > 0)
			ans += carry + '0';
		int i = 0;
		while (ans[i] == '0' && ans.length() > 1)
			i++;
		for (; i < ans.length(); i++)
			cout << ans[i];
		cout << endl;
	}
}
