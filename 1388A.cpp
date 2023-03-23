// Captain Flint and Crew Recruitment
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
    n -= 30;
    if (n < 1)
      cout << "NO\n";
    else if (n != 14 && n != 10 && n != 6)
      cout << "YES\n14 10 6 " << n << '\n';
    else
      cout << "YES\n15 10 6 " << --n << '\n';
  }
}
