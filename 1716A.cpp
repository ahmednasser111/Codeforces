// 2-3 Moves
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t, n, ans;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%d", &n);
    if (n == 1)
    {
      cout << "2\n";
      continue;
    }
    ans = n / 3;
    if (n % 3 != 0)
      ans++;
    cout << ans << endl;
  }
}
