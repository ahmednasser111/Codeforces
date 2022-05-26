// Beautiful Year
#include <bits\stdc++.h>
using namespace std;
int main()
{
  int y, a, b, c, d;
  scanf("%d", &y);
  do
  {
    y++;
    a = y / 1000;
    b = y / 100 % 10;
    c = y / 10 % 10;
    d = y % 10;
  } while (a == b || a == c || a == d || b == c || b == d || c == d);
  cout << y;
  return 0;
}
