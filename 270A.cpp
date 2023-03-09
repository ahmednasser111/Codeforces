// Fancy Fence
#include <bits\stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int a;
    scanf("%d", &a);
    cout << (360 % (180 - a) == 0 ? "YES" : "NO") << endl;
  }
}