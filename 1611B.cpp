// Team Composition: Programmers and Mathematicians
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    cout << min(min(a, b), (a + b) / 4) << endl;
  }
}
