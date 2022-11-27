// Digits Sum
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    int sum = (n + 1) / 10;
    cout << sum << '\n';
  }
}
