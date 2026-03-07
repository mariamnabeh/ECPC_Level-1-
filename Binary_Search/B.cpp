#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
using namespace std;

#define el "\n"
typedef long long ll;
typedef long double ld;
void solve()
{
    

    int t;
    cin >> t;

    while (t--) {

        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);//
        ll mx = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        long long low = 1;
        long long high = mx + x;
        long long ans = 1;

        while (low <= high) {

            long long mid = (low + high) / 2;

            long long water = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] < mid) {
                    water += (mid - a[i]);
                }

                if (water > x) break;
            }

            if (water <= x) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        cout << ans << "\n";
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
