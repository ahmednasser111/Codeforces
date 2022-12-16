// Cards
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, zeros, ones;
  string s;
  scanf("%d", &n);
  cin >> s;
  zeros = count(s.begin(), s.end(), 'z');
  ones = count(s.begin(), s.end(), 'n');
  for (int i = 0; i < ones; i++)
    cout << "1 ";
  for (int i = 0; i < zeros; i++)
    cout << "0 ";
}
