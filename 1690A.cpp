// Print a Pedestal (Codeforces logo?)
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    if (n == 7)
      cout << "2 4 1\n";
    else
    {
      int mid = ceil(n / 3.0);
      cout << mid << " " << mid + 1 << " " << n - (mid * 2 + 1) << "\n";
    }
  }
}
