// Wonderful Coloring - 1
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  string s;
  scanf("%d", &t);
  while (t--)
  {
    cin >> s;
    int l = s.length(), unique = 0, red = 0;
    map<char, int> m;
    for (int i = 0; i < l; i++)
      m[s[i]]++;
    for (auto const &[key, val] : m)
      if (val == 1)
        unique++;
      else
        red++;
    red += unique / 2;
    cout << red << endl;
  }
}
