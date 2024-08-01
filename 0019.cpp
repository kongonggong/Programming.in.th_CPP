#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sb;
int total = INT_MAX;

void perket(int n, int idx, int mul, int sum) {
    if (idx == n) {
        if (sum != 0) {
            total = min(total, abs(mul - sum));
        }
        return;
    }
    perket(n, idx + 1, mul * sb[idx].first, sum + sb[idx].second); // take
    perket(n, idx + 1, mul, sum); // not take 
}

int main() {
    int n;
    cin >> n;
    sb.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> sb[i].first >> sb[i].second;
    }
    
    perket(n, 0, 1, 0);
    cout << total << endl;
    return 0;
}