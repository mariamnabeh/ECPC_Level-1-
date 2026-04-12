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
    
string c;
cin>>c;
set<char> d;

for(int i:c){
    d.insert(i);
}
if(d.size()%2==0){
cout<< "CHAT WITH HER!";

}

else cout <<"IGNORE HIM!";
   return 0;
}