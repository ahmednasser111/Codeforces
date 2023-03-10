// Pouring Rain
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int d, h, v, e;
  scanf("%d%d%d%d", &d, &h, &v, &e);
  double pi = acos(-1.0), r = d / 2.0, area = pi * r * r, dec = v / area - e;
  if (dec < 0)
    cout << "NO";
  else
    cout << "YES\n"
         << fixed << h / dec;
}
