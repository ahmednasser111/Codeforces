// Game With Sticks
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, m;
  scanf("%d %d", &n, &m);
  cout << (min(n, m) & 1 ? "Akshat" : "Malvika");
}
