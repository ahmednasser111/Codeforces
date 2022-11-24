// Construct a Rectangle
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int l[3];
    scanf("%d %d %d", &l[0], &l[1], &l[2]);
    sort(l, l + 3);
    if (l[0] + l[1] == l[2] || (l[0] == l[1] && l[2] % 2 == 0) || (l[0] == l[2] && l[1] % 2 == 0) || (l[1] == l[2] && l[0] % 2 == 0))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
