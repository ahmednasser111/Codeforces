// Dragons
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int s, n, x, y;
  scanf("%d %d", &s, &n);
  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &x, &y);
    if (m.count(x))
      m[x] += y;
    else
      m.insert({x, y});
  }
  for (auto i : m)
  {
    if (s <= i.first)
    {
      cout << "NO";
      return 0;
    }
    s += i.second;
  }
  cout << "YES";
}
