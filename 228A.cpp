// Is your horseshoe on the other hoof?
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int s[4];
  int count = 0;
  scanf("%d %d %d %d", &s[0], &s[1], &s[2], &s[3]);
  sort(s, s + 4);
  for (int i = 0; i < 3; i++)
  {
    if (s[i] == s[i + 1])
      count++;
  }
  cout << count;

  return 0;
}
