// Bear and Big Brother
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int a, b;
  int count = 0;
  scanf("%d %d", &a, &b);
  while (a <= b)
  {
    a *= 3;
    b *= 2;
    count++;
  }
  cout << count;
  return 0;
}
