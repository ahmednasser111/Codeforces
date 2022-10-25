// Juggling Letters
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    map<char, int> m;
    string s;
    bool flag = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
      cin >> s;
      for (int j = 0; j < s.length(); j++)
        m[s[j]]++;
    }
    for (auto const &[key, val] : m)
    {
      if (val % n != 0)
      {
        flag = 0;
        break;
      }
    }
    cout << (flag ? "YES\n" : "NO\n");
  }
}
