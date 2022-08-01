// Night at the Museum
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s;
  int pointer = 97, sum = 0;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    int temp = s[i];
    int dif = abs(temp - pointer);
    sum += min(dif, 26 - dif);
    pointer = temp;
  }
  cout << sum;
}
