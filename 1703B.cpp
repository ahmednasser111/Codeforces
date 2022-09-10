// ICPC Balloons
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    string s;
    set<char> st;
    scanf("%d", &n);
    cin >> s;
    for (int i = 0; i < n; i++)
      st.insert(s[i]);
    cout << n + st.size() << "\n";
  }
}
