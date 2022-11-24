// Red And Blue Beans
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    double r, b, d;
    string s = "YES\n";
    cin >> r >> b >> d;
    if (r < b)
      swap(r, b);
    if (ceil(r / b) - 1 > d)
      s = "NO\n";
    cout << s;
  }
}
