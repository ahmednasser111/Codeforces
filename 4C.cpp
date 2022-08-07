// Registration system
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  string s;
  scanf("%d", &n);
  map<string, int> m;
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    if (m[s])
      cout << s << m[s] << "\n";
    else
      cout << "OK\n";
    m[s]++;
  }
}
