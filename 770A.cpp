// New Password
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, k;
  scanf("%d %d", &n, &k);
  while (n--)
    cout << (char)('a' + n % k);
}
