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
/* 
Palindrome: When you read something from left to right 
or from right to left, it is still the same.
Examples: ABA, 101, 121

Palindrome is usually defined on strings because
 it depends on the order of characters, but it can also apply to numbers and other sequences.

Let's Start solve this problem!
*/
 int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n == 1) cout << "YES\n";
        else if(n == 2) {
            if(s[0] != s[1]) cout << "YES\n";
            else cout << "NO\n";
        } else cout << "NO\n";
    }

/* Why?
Because there is no binary string of length greater than 1 
that does not contain a palindrome. 
Even if you reorder the characters, 
a substring palindrome of length 2 or 3 will always appear. */

/*What's the binary string?
/* 
What's a binary string?
A binary string is a sequence of characters that consists of only '0's and '1's.
Each character in the string is called a bit. 
For example: "0", "1", "1010", "111000" are all binary strings.

Why use a binary string instead of a number?
Because we can easily check substrings, reverse the string, 
or find patterns like palindromes. 
Using a number directly would make these operations much harder.
*/




}





