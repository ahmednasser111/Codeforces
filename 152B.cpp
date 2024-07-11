// Steps
#include <bits\stdc++.h>
using namespace std;
int main(){
	long long n, m, x, y, k, a, b, steps = 0, maxX, maxY, minSteps;
	cin >> n >> m >> x >> y >> k;
	for (int i = 0; i < k; i++){
		cin >> a >> b;
		
		maxX = (a > 0 ? (n - x) / a : (a < 0 ? (x - 1) / -a : LLONG_MAX));
		maxY = (b > 0 ? (m - y) / b :( b < 0 ?  (y - 1) / -b : LLONG_MAX));
		
		minSteps = min(maxX, maxY);
		steps += minSteps;
		
		x += minSteps * a;
		y += minSteps * b;
	}
	cout << steps;
}