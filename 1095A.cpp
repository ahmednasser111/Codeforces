// Repeating Cipher
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, c = 1;
  string s;
  scanf("%d", &n);
  cin >> s;
  for (int i = 0; i < n; i += c)
  {
    cout << s[i], c++;
  }
}
