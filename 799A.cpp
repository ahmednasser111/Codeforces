// Carrot Cakes
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, t, k, d;
  scanf("%d %d %d %d", &n, &t, &k, &d);
  cout << (d < (n - 1) / k * t ? "YES" : "NO");
}
