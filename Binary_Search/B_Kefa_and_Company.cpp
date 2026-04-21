#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Friend {
    long long m, s;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long d;
    cin >> n >> d;

    vector<Friend> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].m >> a[i].s;
    }

    sort(a.begin(), a.end(), [](Friend x, Friend y) {
        return x.m < y.m;
    });

    long long max_s = 0, current_s = 0;
    int l = 0;

    for (int r = 0; r < n; r++) {
        current_s += a[r].s;

        while (a[r].m - a[l].m >= d) {
            current_s -= a[l].s;
            l++;
        }

        max_s = max(max_s, current_s);
    }

    cout << max_s << endl;

    return 0;
}