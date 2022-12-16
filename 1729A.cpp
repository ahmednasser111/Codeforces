// Two Elevators
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int elevator1, elevator2;
    elevator1 = a - 1;
    elevator2 = abs(b - c) + c - 1;
    if (elevator1 < elevator2)
      cout << 1;
    else if (elevator2 < elevator1)
      cout << 2;
    else
      cout << 3;
    cout << endl;
  }
}
