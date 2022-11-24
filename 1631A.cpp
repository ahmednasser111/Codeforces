// Min Max Swap
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
    int a[n], b[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
      scanf("%d", &b[i]);

    for (int i = 0; i < n; i++)
      if (a[i] < b[i])
        swap(a[i], b[i]);

    cout << *max_element(a, a + n) * *max_element(b, b + n) << endl;
  }
}
