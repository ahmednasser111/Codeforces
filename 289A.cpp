// Polo the Penguin and Segments
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
      int n, k, a, b;
      float x = 0;
      scanf("%d %d", &n, &k);
      for (int i = 0; i < n; i++)
      {
            scanf("%d %d", &a, &b);
            x += b - a + 1;
      }
      cout << ceil(x / k) * k - x;
}
