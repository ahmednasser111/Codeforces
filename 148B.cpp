// Escape
#include <bits\stdc++.h>
using namespace std;
int main(){
	int vp, vd, t, f, c;
	scanf("%d%d%d%d%d", &vp, &vd, &t, &f, &c);
	if (vp >= vd){
		cout << 0;
		return 0;
	}

	double pp = vp * t;
	int bijou = 0;

	while (1){
		double time_to_catch = pp / (vd - vp);
		pp += (time_to_catch) * vp;
		
		if (pp >= c)
			break;

		bijou++;
		pp += (time_to_catch + f) * vp;
	}
	cout << bijou;

}
