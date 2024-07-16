// Anton and currency you all know
#include <bits\stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int n = s.length();
	vector<pair<char, int>> v;
	for (int i = 0; i < n; i++){
		if ((s[i] - '0') % 2 == 0){
			v.push_back({s[i], i});
		}
	}
	if (v.size() == 0)
		{
			cout << -1;
			return 0;
		}
	for (pair<char, int> i : v){
		if (i.first < s[n - 1])
		{
			swap(s[i.second], s[n - 1]);
			cout << s;
			return 0;
		}
	}
	swap(s[v[v.size() - 1].second], s[n - 1]);
	cout << s;
}