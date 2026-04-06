/*
♦ ========================= ♦
        M.NABEH
   "The thrill of the code..."
   WA makes it more fun 
♦ ========================= ♦
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>

using namespace std;

// ---------- Macros ----------
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define All(x) (x).begin()+1, (x).end()
#define rAll(x) (x).rbegin(), (x).rend()-1
#define Sz(x) (int)(x).size()-1
#define el << '\n'
#define F first
#define S second
#define see_u_later return 0 // see u later :)

// ---------- Constants ----------
const long long INF = 1e18;
const int MOD = 1e9+7;

// ---------- Type Aliases ----------
using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<long long,long long>;
using vi = vector<int>;
using vll = vector<long long>;
using vpii = vector<pair<int,int> >;
using vpll = vector<pair<long long,long long> >;
using vpil = vector<pair<int,long long> >;
using vpcl = vector<pair<char,long long> >;
using vplc = vector<pair<long long,char> >;
// ---------- Functions ----------
void Remy() {
int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    queue<int> q;
    for(int i = 0; i < n; i++) q.push(i);

    int last = -1;

    while(!q.empty()) {
        int i = q.front();
        q.pop();
        a[i] -= m;

        if(a[i] > 0) {
            q.push(i);
        } else {
            last = i;
        }
    }

    cout << last + 1 << "\n";
}






int main() {

    int t = 1;
    cin >> t;
    while (t--) {
        Remy();
    }

    see_u_later;
}