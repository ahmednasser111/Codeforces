// Greg's Workout
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, x;
  int a[3]{0, 0, 0};
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    a[i % 3] += x;
  }
  int pos = max_element(a, a + 3) - a;
  if (pos == 0)
    cout << "chest";
  else if (pos == 1)
    cout << "biceps";
  else
    cout << "back";
}
