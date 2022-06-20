// Games
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  int len = n * 2;
  int arr[len];
  int count = 0;
  for (int i = 0; i < len; i += 2)
  {
    scanf("%d", &arr[i]);
    scanf("%d", &arr[i + 1]);
  }
  for (int i = 0; i < len - 2; i += 2)
  {
    for (int j = i + 2; j < len; j += 2)
    {
      if (arr[i] == arr[j + 1])
        count++;
      if (arr[i + 1] == arr[j])
        count++;
    }
  }
  cout << count;
  return 0;
}
