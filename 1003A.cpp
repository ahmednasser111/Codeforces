// Polycarp's Pockets
#include <bits\stdc++.h>
using namespace std;
int main()
{
  int n, x, c;
  map<int, int> mp;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    mp[x]++;
  }
  c = mp[x];
  for (auto const &keyValue : mp)
    c = max(c, keyValue.second);
  cout << c;
}