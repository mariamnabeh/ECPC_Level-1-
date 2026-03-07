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

        ll n, x, div=0,k;
        cin >> n >> x;
        if (n%x!=0)
        { cout<<-1;
         break;

        }
if (n%x==0){
k=(n/x);
k+=div;
cout<<div;
}
        
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
