// Chat room
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s;
  cin >> s;
  string h = "hello";
  int c = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (c == 5)
      break;
    if (s[i] == h[c])
      c++;
  }
  (c == 5) ? cout << "YES" : cout << "NO";
}
