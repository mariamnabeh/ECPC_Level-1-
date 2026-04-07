#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>

using namespace std;


int main() {

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    queue<int> q;
    int last=-1;
    for(int i = 0; i < n; i++) q.push(i);
    while(!q.empty()){
int i=q.front();
q.pop();
a[i]-=m;
if(a[i]>0)
{
    q.push(i);
}
else{
last=i;
}
    }
cout<<last+1<<"\n";

}