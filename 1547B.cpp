// Alphabetical Strings
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    string s, res = "YES\n";
    char c = 'b';
    cin >> s;
    int l = s.find('a') - 1, r = l + 2, n = 'a' + s.length();
    if (l == string::npos - 1)
    {
      cout << "NO\n";
      continue;
    }
    for (char c = 'b'; c < n; c++)
    {
      if (c == s[l])
        l--;
      else if (c == s[r])
        r++;
      else
      {
        res = "NO\n";
        break;
      }
    }
    cout << res;
  }
}
