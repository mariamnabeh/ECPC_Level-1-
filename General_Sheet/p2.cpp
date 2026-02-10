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

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
FIO
ll t;
cin>>t;
while (t--)
{
;
 int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        int ans = 0;

        int w = 0, d = 0, size = 1;
        bool white = true;
        while(true) {
            if(white) {
                if(w + size > a) break;
                w += size;
            } else {
                if(d + size > b) break;
                d += size;
            }
            ans++;
            size *= 2;
            white = !white;
        }

 
        int ans2 = 0;
        w = d = 0;
        size = 1;
        white = false;
        while(true) {
            if(white) {
                if(w + size > a) break;
                w += size;
            } else {
                if(d + size > b) break;
                d += size;
            }
            ans2++;
            size *= 2;
            white = !white;
        }

        cout << max(ans, ans2) << "\n";
    }
}



}







