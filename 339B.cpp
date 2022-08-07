// Xenia and Ringroad
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  long long n, m, x;
  cin >> n >> m;
  long long temp = 1, c = 0;
  for (int i = 0; i < m; i++)
  {
    cin >> x;
    c += x - temp;
    if (x < temp)
      c += n;
    temp = x;
  }
  cout << c;
}
