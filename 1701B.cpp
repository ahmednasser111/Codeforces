// Permutation
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
    cout << "2\n";
    for (int j = 1; j <= n; j += 2)
      for (int i = j; i <= n; i *= 2)
        cout << i << " ";
    cout << "\n";
  }
}
