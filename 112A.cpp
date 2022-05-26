// Petya and Strings
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s, s2;
  int ans;
  cin >> s >> s2;

  transform(s.begin(), s.end(), s.begin(), ::tolower);
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

  ans = s.compare(s2);
  if (ans < 0)
    ans = -1;
  else if (ans > 0)
    ans = 1;

  cout << ans;
  return 0;
}
