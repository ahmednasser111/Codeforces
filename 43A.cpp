// Football
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, max = 0;
  string s;
  map<string, int> mp;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    mp[s]++;
  }
  for (auto const &[key, val] : mp)
  {
    if (val > max)
    {
      max = val;
      s = key;
    }
  }
  cout << s;
}
