// FashionabLee
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
    cout << (n % 4 == 0 ? "YES" : "NO") << "\n";
  }
}
