// Digital Counter
#include <bits\stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	map<char, int> mp{{'0', 2}, {'1', 7}, {'2', 2}, {'3', 3}, {'4', 3}, {'5', 4}, {'6', 2}, {'7', 5}, {'8', 1}, {'9', 2}};
	cout << mp[s[0]] * mp[s[1]];
}