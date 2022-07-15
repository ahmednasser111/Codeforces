// HQ9+
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
    {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
}
