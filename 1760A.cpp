// Medium Number
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int elements[3];
    scanf("%d %d %d", &elements[0], &elements[1], &elements[2]);
    sort(elements, elements + 3);
    cout << elements[1] << endl;
  }
}
