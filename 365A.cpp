// Good Number
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, k, x;
  string s;
  scanf("%d %d", &n, &k);
  int c = n;
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    x = k;
    while (x > -1)
    {
      if (s.find(x + 48) == -1)
      {
        c--;
        break;
      }
      x--;
    }
  }
  cout << c;
}
