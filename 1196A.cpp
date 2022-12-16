// Three Piles of Candies
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  long long a, b, c;
  scanf("%d", &t);
  while (t--)
  {
    cin >> a >> b >> c;
    cout << (a + b + c) / 2 << "\n";
  }
}
