// Olesya and Rodion
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, t;
  scanf("%d %d", &n, &t);
  if (to_string(t).length() > n)
    cout << -1;
  else if (t == 10)
  {
    for (int i = 1; i < n; i++)
      cout << 1;
    cout << 0;
  }
  else
    for (int i = 0; i < n; i++)
      cout << t;
}
