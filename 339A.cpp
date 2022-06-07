// Helpful Maths
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s;
  cin >> s;
  int len = s.size();
  sort(s.begin(), s.end());
  for (int i = len / 2; i < len - 1; i++)
  {
    cout << s[i] << "+";
  }
  cout << s[len - 1];

  return 0;
}
