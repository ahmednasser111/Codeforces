// Following Directions
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x = 0, y = 0;
    string s;
    bool b = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'R')
        x++;
      else if (s[i] == 'L')
        x--;
      else if (s[i] == 'U')
        y++;
      else
        y--;
      if (x == 1 && y == 1)
      {
        b = 1;
        break;
      }
    }
    cout << (b ? "YES" : "NO") << '\n';
  }
}
