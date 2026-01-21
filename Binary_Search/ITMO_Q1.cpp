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
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    while(k--){
        ll num;
        cin >> num;

        ll l = 0, r = n - 1;
        bool found = false;

        while(l <= r){
            ll mid = (l + r) / 2;

            if(arr[mid] == num){
                found = true;
                break;
            }
            else if(arr[mid] < num){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }

        if(found)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}








