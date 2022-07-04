// String Task
#include <bits\stdc++.h>
using namespace std;
bool isConsonant(char c)
{
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
    return false;
  return true;
}
int main(int argc, char const *argv[])
{
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    if (isConsonant(s[i]))
    {
      cout << '.' << tolower(s[i]);
    }
  }
  return 0;
}
