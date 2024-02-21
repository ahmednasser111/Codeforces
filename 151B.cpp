// Phone Numbers
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int q, n, mt = 0, mp = 0, mg = 0;
	scanf("%d", &q);
	vector<pair<string, vector<int>>> v(q);
	string temp, name;
	for (int r = 0; r < q; r++)
	{
		int t = 0, p = 0, g = 0;
		cin >> n >> name;
		v[r].first = name;
		for (int i = 0; i < n; i++)
		{
			cin >> temp;
			temp.erase(2, 1);
			temp.erase(4, 1);
			bool equal = true, decreasing = true;
			for (int j = 1; j < 6; j++)
			{
				if (temp[j - 1] != temp[j])
					equal = false;
				if (temp[j] >= temp[j - 1])
					decreasing = false;
				if (!equal && !decreasing)
					break;
			}
			if (equal)
				t++;
			else if (decreasing)
				p++;
			else
				g++;
		}
		v[r].second.push_back(t);
		mt = max(mt, t);
		v[r].second.push_back(p);
		mp = max(mp, p);
		v[r].second.push_back(g);
		mg = max(mg, g);
	}
	vector<string> st, sp, sg;
	for (int i = 0; i < q; i++)
	{
		if (v[i].second[0] == mt)
			st.push_back(v[i].first);
		if (v[i].second[1] == mp)
			sp.push_back(v[i].first);
		if (v[i].second[2] == mg)
			sg.push_back(v[i].first);
	}
	cout << "If you want to call a taxi, you should call: ";
	for (int i = 0; i < st.size() - 1; i++)
		cout << st[i] << ", ";
	cout << st[st.size() - 1] << '.' << endl;
	cout << "If you want to order a pizza, you should call: ";
	for (int i = 0; i < sp.size() - 1; i++)
		cout << sp[i] << ", ";
	cout << sp[sp.size() - 1] << '.' << endl;
	cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
	for (int i = 0; i < sg.size() - 1; i++)
		cout << sg[i] << ", ";
	cout << sg[sg.size() - 1] << '.';
}