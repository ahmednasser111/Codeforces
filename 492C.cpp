// Vanya and Exams
#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n, r, avg;
	cin >> n >> r >> avg;

	long long curSum = 0, sum = n * avg;
	vector<pair<int, int>> a(n);
	for (long long i = 0; i < n; i++){
		scanf("%d%d", &a[i].second, &a[i].first);
		curSum += a[i].second;
	}
	if (curSum >= sum){
		printf("0\n");
		return 0;
	}

	sort(a.begin(), a.end());

	long long ans = 0;

	for (int i = 0; i < n; i++){
		if (curSum >= sum)
			break;
		
		long long canTake = r - a[i].second;
		long long need = sum - curSum;
		long long take = min(canTake, need);
		ans += take * a[i].first;
		curSum += take;
	}
	cout << ans;
}