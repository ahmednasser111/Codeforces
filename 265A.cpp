// Colorful Stones (Simplified Edition)
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s, t;
  int c = 0;
  cin >> s >> t;
  for (int i = 0; i < t.length(); i++)
    if (s[c] == t[i])
      c++;

  cout << c + 1;
}
