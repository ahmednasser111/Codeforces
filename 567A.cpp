// Lineland Mail
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, maxi, mini;
  scanf("%d", &n);
  int a[n], b[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    b[i] = a[i];
  }
  sort(b, b + n);
  for (int i = 0; i < n; i++)
  {
    int j = distance(a, find(a, a + n, a[i]));
    if (j == 0)
      cout << b[j + 1] - b[j] << " " << b[n - 1] - b[j];
    else if (j == n - 1)
      cout << b[j] - b[j - 1] << " " << b[j] - b[0];
    else
      cout << min(b[j] - b[j - 1], b[j + 1] - b[j]) << " " << max(b[n - 1] - b[j], b[j] - b[0]);
    cout << '\n';
  }
}
