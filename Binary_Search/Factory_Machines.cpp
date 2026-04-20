#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>

using namespace std;
using ll = long long;
using ld = long double;
#define el "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n , t;
    cin>>n>>t;
    ll total=0, l=1, r=1e18;
    vector<ll> a(n);
    for (int i=0; i<n; i++){

        cin>>a[i];
    }
while(l<=r){

int mid=l+(l-r)/2;
 ll cont = 0;
        for(int i = 0; i < n; i++){
            cont += mid / a[i];
if (cont>=t)break;

}
if(cont>=t){
total =mid;
mid=r-1;


}
else{
            l = mid + 1;
        }
    }

    cout << total << el;

    return 0;
}