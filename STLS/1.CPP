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
string n;
cin>>n;
int ans=0;
stack<char>s;
for (int i=0; i<n.length();i++){
char c=n[i];
// or just for (c:s)
if (c=='('){
s.push(c);

}
else if (!s.empty())
{
    s.pop();
    ans+=2;
}

}
cout << ans;


}





















