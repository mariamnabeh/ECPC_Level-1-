#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#iO
ll t;nclude <queue>
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
cin>>t;
while (t--)
{
ll j,m,k,c;
cin>>j>>m>>k>>c;
if(j&&m&&k==1){
c+=1;
}
if(j&&m==1||k&&m==1){
c+=1;
}
if(j&&m==1||j&&k==1){
c+=1;
}
if(k&&j==1||m&&k==1){
c+=1;
}
cout<<c;
}

}