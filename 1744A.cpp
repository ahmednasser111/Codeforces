// Number Replacement
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x;
    bool b = 1;
    string s;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    cin >> s;
    for (int i = 0; i < n; i++)
    {
      x = a[i];
      for (int j = 0; j < n; j++)
        if (x == a[j])
          a[j] = s[i];
    }
    for (int i = 0; i < n; i++)
      if (a[i] != s[i])
      {
        b = 0;
        break;
      }
    cout << (b ? "YES\n" : "NO\n");
  }
}
