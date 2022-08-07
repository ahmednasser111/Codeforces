// Perfect Permutation
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  if (n & 1)
    cout << -1;
  else
    for (int i = n; i > 0; i--)
      cout << i << " ";
}
