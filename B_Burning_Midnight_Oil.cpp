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
    int n,k;
    cin>>n>>k;
    int r=1e18, l=0;
ll sum=0, current=n;
while(current >0){
sum+=current;
current/=k;
}

    while(l<=r)
    {
ll mid = r+ (r-l)/2;

if (mid==mid)
{
    
    r=mid+1;
}

else
{
    l=mid+1;
}






    }


cout<<current;


    
    return 0;
}