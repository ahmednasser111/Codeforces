// Two Rabbits
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int x, y, a, b;
    scanf("%d %d %d %d", &x, &y, &a, &b);
    cout << ((y - x) % (a + b) == 0 ? (y - x) / (a + b) : -1) << endl;
  }
}
