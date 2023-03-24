// Two Regular Polygons
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
    cout << (n % m == 0 ? "YES" : "NO") << endl;
  }
}
