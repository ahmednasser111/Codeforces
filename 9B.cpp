#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, vb, vs, xu, yu;
    cin >> n >> vb >> vs;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> xu >> yu; 

    int optimal_index = 0;
    double min_time = DBL_MAX ;

    for (int i = 1; i < n; i++){
        
        double bus_time = (double)a[i] / vb;
        double run_time = sqrt(pow(xu - a[i], 2) + pow(yu, 2)) / vs;
        double total_time = bus_time + run_time;
        
		if (total_time <= min_time) {
            min_time = total_time;
            optimal_index = i;
        }
    } 

    cout << optimal_index + 1 << endl;

    return 0;
}