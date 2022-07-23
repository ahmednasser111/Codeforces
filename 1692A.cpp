// Marathon
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    cout << (a < b) + (a < c) + (a < d) << "\n";
  }
}