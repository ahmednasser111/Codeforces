// Taxi
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x, taxi, grup[5] = {0, 0, 0, 0, 0};
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    grup[x]++;
  }
  taxi = 0;
  taxi += grup[4];
  taxi += grup[3];
  grup[1] -= grup[3];
  taxi += grup[2] / 2;
  if (grup[2] % 2 == 1)
  {
    taxi++;
    grup[1] -= 2;
  }
  if (grup[1] > 0)
  {
    taxi += ceil(grup[1] / 4.0);
  }
  cout << taxi;
}