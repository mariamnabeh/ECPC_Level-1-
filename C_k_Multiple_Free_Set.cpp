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
    
    int n, k;
    cin>>n>>k;
    vector<int> x(n);
    for (int i=0; i<n; i++){
cin>>x[i];

    }
sort (x.begin(), x.end());
set <int> r;

  for (int i = 0; i < n; i++) {

if (x[i]%k==0 && r.count (x[i]/k)){

continue;
}
r.insert(x[i]);

}

cout<<r.size();
    return 0;
}