// Prepend and Append
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, i = 0;
    string s;
    cin >> n >> s;
    for (; i < n / 2; i++)
      if (s[i] == s[n - i - 1])
        break;
    cout << n - (i * 2) << endl;
  }
}
