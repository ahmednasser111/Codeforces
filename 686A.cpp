// Free Ice Cream
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, counter = 0;
  long long x, a;
  char c;
  cin >> n >> x;
  while (n--)
  {
    cin >> c >> a;
    if (c == '+')
      x += a;
    else
    {
      if (x >= a)
        x -= a;
      else
        counter++;
    }
  }
  cout << x << " " << counter;
}
