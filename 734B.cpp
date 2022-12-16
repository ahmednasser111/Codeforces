// Anton and Digits
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int k2, k3, k5, k6;
  scanf("%d %d %d %d", &k2, &k3, &k5, &k6);
  int n256 = min({k2, k5, k6});
  cout << n256 * 256 + min(k3, k2 - n256) * 32;
}
