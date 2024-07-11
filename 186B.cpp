// Growing Mushrooms
#include <bits\stdc++.h>
using namespace std;
bool compare(pair<int, double> a, pair<int, double> b){
	if (a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}
int main(){
	int n, t1, t2, x, y;
	double k;
	scanf("%d%d%d", &n, &t1, &t2);
	pair<int, double> a[n];
	cin >> k;
	k = (100 - k) / 100;
	for (int i =1; i <= n; i++){
		scanf("%d%d", &x, &y);
		a[i - 1] = {i, max(x*t1*k + y*t2, y*t1*k + x*t2)};
	}
	sort(a, a + n, compare);
	for (pair<int,double> i : a){
		cout << i.first << ' ' << fixed << setprecision(2) << i.second << endl; 
	}
}