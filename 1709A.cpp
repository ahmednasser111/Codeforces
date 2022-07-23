// Three Doors
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int x;
    int a[3];
    scanf("%d", &x);
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    int cur = a[x - 1] - 1;
    int c = 1;
    while (cur != -1)
    {
      cur = a[cur] - 1;
      c++;
    }
    cout << ((c < 3) ? "NO" : "YES") << "\n";
  }
}
