// Anton and Danik
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, sum = 0;
  char c;
  scanf("%d\n", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%c", &c);
    if (c == 'A')
      sum++;
    else
      sum--;
  }
  if (sum > 0)
    printf("Anton");
  else if (sum < 0)
    printf("Danik");
  else
    printf("Friendship");

  return 0;
}
