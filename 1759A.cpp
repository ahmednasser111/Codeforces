// Yes-Yes?
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    string s, str = "Yes", mes = "YES\n";
    cin >> s;
    if (str.find(s[0]) == -1)
    {
      cout << "NO\n";
      continue;
    }
    for (int i = 0; i < s.length() - 1; i++)
      if ((s[0] != 'Y' && s[0] != 'e' && s[0] != 's') || (s[i] == 'Y' && s[i + 1] != 'e') || (s[i] == 'e' && s[i + 1] != 's') || (s[i] == 's' && s[i + 1] != 'Y'))
      {
        mes = "NO\n";
        break;
      }
    cout << mes;
  }
}
