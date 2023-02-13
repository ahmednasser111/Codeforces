// Space Navigation
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int x, y, nx = 0, ny = 0;
    string s;
    char cx = 'R', cy = 'U';
    cin >> x >> y >> s;
    if (x < 0)
    {
      x = -x;
      cx = 'L';
    }
    if (y < 0)
    {
      y = -y;
      cy = 'D';
    }
    for (int i = 0; i < s.length(); i++)
      if (s[i] == cx)
        nx++;
      else if (s[i] == cy)
        ny++;
    cout << (nx >= x && ny >= y ? "YES" : "NO") << endl;
  }
}
