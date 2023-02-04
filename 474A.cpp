// Keyboard
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  char c;
  string s, test = "qwertyuiopasdfghjkl;zxcvbnm,./";
  int x = -1;
  cin >> c >> s;
  if (c == 'L')
    x = 1;
  for (int i = 0; i < s.length(); i++)
    cout << test[test.find(s[i]) + x];
}
