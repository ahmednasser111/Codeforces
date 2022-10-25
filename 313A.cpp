// Ilya and Bank Account
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s;
  cin >> s;
  int l = s.length();
  if (s[0] == '-')
  {
    if (s[l - 1] > s[l - 2])
      s.erase(l - 1, 1);
    else
      s.erase(l - 2, 1);
  }
  cout << stoi(s);
}
