// Mishka and Game
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, x, y, ans = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &x, &y);
    if (x > y)
      ans++;
    else if (x < y)
      ans--;
  }
  if (ans > 0)
    cout << "Mishka";
  else if (ans < 0)
    cout << "Chris";
  else
    cout << "Friendship is magic!^^";
  return 0;
}
