// XORwice
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    cout << (a ^ b) << endl;
  }
}
