// The New Year: Meeting Friends
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int points[3];
  scanf("%d %d %d", &points[0], &points[1], &points[2]);
  sort(points, points + 3);
  cout
      << (points[2] - points[1]) + (points[1] - points[0]);
  return 0;
}
