// CopyCopyCopyCopyCopy
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x;
    scanf("%d", &n);
    set<int> s;
    while (n--)
    {
      scanf("%d", &x);
      s.insert(x);
    }
    cout << s.size() << "\n";
  }
}
