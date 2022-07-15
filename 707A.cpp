// Brain's Photos
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, m;
  scanf("%d %d", &n, &m);
  char c;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
      scanf("\n%c", &c);
      if (c == 'C' || c == 'M' || c == 'Y')
      {
        cout << "#Color";
        return 0;
      }
    }
  cout << "#Black&White";
}
