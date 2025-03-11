// Dima and To-do List
#include <bits\stdc++.h>
using namespace std;
int main(){
	int n, k;
	scanf("%d%d", &n , &k);
	int a[n];

	for (int i = 0; i < n; i++){
		scanf("%d", & a[i]);
	}

	vector<int> v(a, a + k);
	
	for (int i = k; i < n; i++)
	{
		v[i % k] += a[i];
	}

	cout << min_element(v.begin(), v.end()) - v.begin() + 1;
}