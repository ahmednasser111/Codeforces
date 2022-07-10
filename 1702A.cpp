// Round Down the Price
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    string n;
    cin >> n;
    n[0]--;
    long long ans = stoi(n);
    cout << ans << endl;
  }
  return 0;
}
