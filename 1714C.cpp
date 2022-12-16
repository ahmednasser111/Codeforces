// Minimum Varied Number
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int s;
    string str;
    scanf("%d", &s);
    for (int i = 9; i >= 1; i--)
    {
      if (s >= i)
      {
        str = char(i + '0') + str;
        s -= i;
      }
    }
    cout << str << endl;
  }
}
