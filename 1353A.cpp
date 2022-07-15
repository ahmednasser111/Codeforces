// Most Unstable Array
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
    if (n == 1)
      cout << 0 << endl;
    else if (n < 3)
      cout << m << endl;
    else
      cout << m * 2 << "\n";
  }
}
