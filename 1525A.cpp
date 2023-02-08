// Potion-making
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
    cout << 100 / __gcd(100, n) << endl;
  }
}
