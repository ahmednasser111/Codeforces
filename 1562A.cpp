// The Miracle and the Sleeper
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int l, r;
    scanf("%d%d", &l, &r);
    cout << r % max(l, r / 2 + 1) << endl;
  }
}
