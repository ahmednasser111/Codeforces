// Grass Field
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int x, c = 0;
    for (int i = 0; i < 4; i++)
    {
      scanf("%d", &x);
      if (x == 1)
        c++;
    }
    if (c == 1)
      cout << 1;
    else
      cout << c / 2;
    cout << "\n";
  }
}
