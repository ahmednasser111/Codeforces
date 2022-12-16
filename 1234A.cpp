// Equalize Prices Again
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &x);
      sum += x;
    }
    cout << (sum + n - 1) / n << endl;
  }
}
