// 10242 - Fourth Point !!
#include <iostream>
using namespace std;
int main()
{
	double x1, x2, x3, x4, y1, y2, y3, y4;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
	{
		if (x2 == x3 && y2 == y3) // (2, 3) (1, 3) (4, 3)
			printf("%.3f %.3f\n", x1 + x4 - x3, y1 + y4 - y3);
		else if (x1 == x4 && y1 == y4) // (1, 4) (2, 4) (3, 4)
			printf("%.3f %.3f\n", x2 + x3 - x4, y2 + y3 - y4);
		else if (x1 == x3 && y1 == y3)
			printf("%.3f %.3f\n", x2 + x4 - x3, y2 + y4 - y3);
		else
			printf("%.3f %.3f\n", x1 + x3 - x4, y1 + y3 - y4);
	}
}