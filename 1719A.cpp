// Chip Game
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
      int t;
      scanf("%d", &t);
      while (t--)
      {
            int n, m;
            scanf("%d %d", &n, &m);
            cout << ((2 + !(n & 1) + !(m & 1)) & 1 ? "Burenka" : "Tonya") << endl;
      }
}
