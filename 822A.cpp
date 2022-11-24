// I'm bored with life
#include <bits\stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int a, b, ans = 1;
  scanf("%d %d", &a, &b);
  for (int i = 2; i <= min(a, b); i++)
    ans *= i;
  cout << ans;
}
