// I Wanna Be the Guy
#include <bits\stdc++.h>
using namespace std;
set<int> s;
void input(int n)
{
  int x;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    s.insert(x);
  }
}
int main(int argc, char const *argv[])
{
  int n, p, q;
  scanf("%d", &n);

  scanf("%d", &p);
  input(p);
  scanf("%d", &q);
  input(q);

  if (s.size() == n)
    printf("I become the guy.");
  else
    printf("Oh, my keyboard!");

  return 0;
}
