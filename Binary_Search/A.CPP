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
    ll n, k; // n= num of Machines ,k=num of products
    cin >> n >> k;

    vector<ll> arr(n);// time every machine will take
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll l = 1, r = 1e18, ans = 0;

    while(l <= r){// allways r bigger untill r=-1 , it means the end of r

        ll mid = l + (r - l) / 2;

        ll cont = 0;
        for(int i = 0; i < n; i++){
            cont += mid / arr[i];
            if(cont >= k) break;
        }

        if(cont >= k){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }

    cout << ans << el;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
