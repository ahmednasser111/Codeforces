// Phoenix and Balance
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t, n, ans;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%d", &n);

    cout << pow(2, n - (n / 2 - 1)) - 2 << '\n';
  }
  return 0;
}
