#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include<map>
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
  //  Q) https://codeforces.com/problemset/problem/1077/C  
ll n;
    cin>>n;
vector<ll>a(n);
map<ll,int>freq;
ll sum=0;
for(int i=0; i<n;i++){
    cin>>a[i];
    sum+=a[i];
    freq[a[i]]++;
}
vector<int> ans;
for(int i = 0; i < n; i++){

    ll new_sum= sum-a[i];
    if(new_sum%2==0){

        continue;
        ll target = new_sum/2;
        freq[a[i]]--;
        if(freq[target>0]){


            ans.push_back(i+1);
            freq[a[i]]++;
            
        }











          
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

