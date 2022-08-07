// Everyone Loves to Sleep
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    int time = x * 60 + y;
    int Min = 10000;
    for (int i = 0; i < n; i++)
    {
      scanf("%d %d", &x, &y);
      int p = x * 60 + y;
      if (p < time)
        p += 1440;
      Min = min(Min, p - time);
    }

    cout << Min / 60 << " " << Min % 60 << endl;
  }
}
