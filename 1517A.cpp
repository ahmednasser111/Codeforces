// Sum of 2050
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    long long n, sum = 0;
    cin >> n;
    if (n % 2050 != 0)
    {
      cout << "-1\n";
      continue;
    }
    string s = to_string(n / 2050);
    for (int i = 0; i < s.length(); i++)
      sum += s[i] - '0';
    cout << sum << endl;
  }
}
