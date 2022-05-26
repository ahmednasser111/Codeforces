// Bit++
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, x = 0;
  string statement;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    cin >> statement;
    if (statement == "++X" || statement == "X++")
      x++;
    else
      x--;
  }
  cout << x;
  return 0;
}
