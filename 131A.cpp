// cAPS lOCK
#include <bits\stdc++.h>
using namespace std;
bool isLower(char c)
{
  return c > 96;
}
bool isCaps(string s)
{
  for (int i = 1; i < s.length(); i++)
    if (isLower(s[i]))
      return false;

  return true;
}
void swapcase(string &s)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (isLower(s[i]))
      s[i] -= 32;
    else
      s[i] += 32;
  }
}
int main(int argc, char const *argv[])
{
  string s;
  cin >> s;
  if (isCaps(s))
    swapcase(s);

  cout << s;
}
