// Snacktower
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, x;
  map<int, int> mp;
  scanf("%d", &n);
  while (n)
  {
    scanf("%d", &x);
    mp[x] = 1;
    while (mp[n])
      cout << n-- << " ";
    cout << endl;
  }
}
