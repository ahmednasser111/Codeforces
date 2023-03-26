// Plus or Minus
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    cout << (a + b == c ? '+' : '-') << endl;
  }
}
