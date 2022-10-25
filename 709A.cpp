// Juicer
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, b, d;
  scanf("%d %d %d", &n, &b, &d);
  int sum = 0, c = 0;
  int x;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    if (x <= b)
      sum += x;
    if (sum > d)
    {
      c++;
      sum = 0;
    }
  }
  cout << c;
}
