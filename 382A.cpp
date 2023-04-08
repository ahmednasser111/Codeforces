// Ksenia and Pan Scales
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s1, s2, left, right;
  cin >> s1 >> s2;
  int sp = s1.find('|');
  left = s1.substr(0, sp);
  right = s1.substr(sp + 1, s1.length());
  for (int i = 0; i < s2.length(); i++)
  {
    if (left.size() > right.size())
      right += s2[i];
    else
      left += s2[i];
  }
  cout << (left.size() != right.size() ? "Impossible" : left + '|' + right);
}
