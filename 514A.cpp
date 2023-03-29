// Chewbaсca and Number
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string x;
  cin >> x;
  for (int i = 0; i < x.length(); i++)
    if (x[i] > '4')
      x[i] = 105 - x[i];
  if (x[0] == '0')
    x[0] = '9';
  cout << x;
}
