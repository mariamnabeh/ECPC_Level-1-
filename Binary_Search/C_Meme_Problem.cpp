#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include<cmath>
#include <iomanip>
using namespace std;
using ll = long long;
using ld = long double;
#define el "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        double d;
        cin >> d;

        double delta = d * d - 4 * d;

        if (delta < 0) {
            cout << "N\n";
        } else {
            double a = (d + sqrt(delta)) / 2.0;
            double b = d - a;

            cout << "Y " << fixed << setprecision(9) << a << " " << b << "\n";
        }
    }



    
    return 0;
}