// Division?
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    cout << "Division ";
    if (n >= 1900)
      cout << 1;
    else if (n >= 1600 && n <= 1899)
      cout << 2;
    else if (n >= 1400 && n <= 1599)
      cout << 3;
    else
      cout << 4;
    cout << "\n";
  }
}
