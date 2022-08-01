// Gennady and a Card Game
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s, x;
  cin >> s;
  for (int i = 0; i < 5; i++)
  {
    cin >> x;
    for (int j = 0; j < 2; j++)
      if (x[j] == s[j])
      {
        cout << "YES";
        return 0;
      }
  }
  cout << "NO";
}
