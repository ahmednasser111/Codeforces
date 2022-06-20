// Vasya the Hipster
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int a, b;
  scanf("%d %d", &a, &b);

  cout << min(a, b) << " " << abs(b - a) / 2;

  return 0;
}
