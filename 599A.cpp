// Patrick and Shooping
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int d[3];
  scanf("%d %d %d", &d[0], &d[1], &d[2]);
  sort(d, d + 3);
  cout << min((d[0] + d[1]) * 2, d[0] + d[1] + d[2]);
}
