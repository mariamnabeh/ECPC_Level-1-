#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int mx = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        int turns = (a[i] + m - 1) / m;
        if(turns >= mx) {
            mx = turns;
            ans = i;
        }
    }

    cout << ans + 1 << "\n";
}