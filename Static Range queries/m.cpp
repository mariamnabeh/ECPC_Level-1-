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
    string s;cin>>s;
    int n = s.size();
    vector<int> prefA(n), prefB(n);
    prefA[0]=(s[0]=='a');
       prefB[0]=(s[0]=='b');
    for(int i=1;i<n;i++){
        prefA[i]=prefA[i-1]+(s[i]=='a');
prefB[i]=prefB[i-1]+(s[i]=='b');
    }
    int ans=0;
    for(int i=-1; i<n;i++){
        for(int j=i;j<n;j++){
            int leftA=(i>=0? prefA[i]:0);
            int midB=prefB[j]-(i>=0?prefB[i]:0);
            int rightA=prefA[n-1]-prefA[j];
            ans=max(ans,leftA+midB+rightA);
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}