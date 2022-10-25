// Bus to Udayland
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  string s[n];
  bool flag = 1;
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
    if (flag)
    {
      for (int j = 0; j < 5; j += 3)
        if (s[i][j] == 'O' && s[i][j + 1] == 'O')
        {
          s[i][j] = s[i][j + 1] = '+';
          flag = 0;
          break;
        }
    }
  }
  if (flag)
    cout << "NO";
  else
  {
    cout << "YES\n";
    for (int i = 0; i < n; i++)
      cout << s[i] << endl;
  }
}
