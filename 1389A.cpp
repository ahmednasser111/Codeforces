// LCM Problem
#include <bits\stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int l, r;
    scanf("%d %d", &l, &r);
    r < l * 2 ? cout << "-1 -1" : cout << l << " " << l * 2;
    cout << "\n";
  }
}
