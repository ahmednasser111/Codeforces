// Pretty Permutations
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, temp;
    scanf("%d", &n);
    for (int i = 1; i <= n - 2; i++)
    {
      if (i % 2 == 0)
        cout << i - 1 << " ";
      else
        cout << i + 1 << " ";
    }
    cout << n << " ";
    if (n % 2 != 0)
      cout << n - 2;
    else
      cout << n - 1;
    cout << "\n";
  }
}
