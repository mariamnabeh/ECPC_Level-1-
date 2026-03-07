#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
using namespace std;

#define el "\n"
typedef long long ll;
typedef long double ld;

// Fast Input Output
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*
===============================
STL (Standard Template Library)
===============================
STL provides ready-made containers and algorithms
to store and manipulate data efficiently.
*/

/*
===============================
1) VECTOR
===============================
- Dynamic array
- Random access using index
*/
void vector_example() {
    vector<int> m = {1, 3, 6, 7};

    cout << m.size() << el;      // number of elements
    cout << m.front() << el;    // first element
    cout << m.back() << el;     // last element
    cout << m.capacity() << el; // allocated memory
    cout << m.empty() << el;    // 1 if empty

    m.push_back(10); // add element
    m.clear();       // remove all elements
}


/*
===============================
2) STACK (LIFO)
===============================
- Last In First Out
*/
void stack_example() {
    stack<int> m;

    m.push(0);
    m.push(7);
    m.push(9);

    while (!m.empty()) {
        cout << m.top() << el; // last element
        m.pop();
    }
}

/*
===============================
3) QUEUE (FIFO)
===============================
- First In First Out
*/
void queue_example() {
    queue<int> m;

    m.push(30);
    m.push(20);

    while (!m.empty()) {
        cout << m.front() << el; // first element
        m.pop();
    }
}

/*
===============================
4) PAIR
===============================
- Stores two values together
*/
void pair_example() {
    pair<string, int> m("mm", 6);

    m.first = "mmm";
    m.second = 6;

    cout << m.first << " " << m.second << el;
}

/*
===============================
5) VECTOR OF PAIRS
===============================
*/
void vector_pair_example() {
    vector<pair<int, int>> mm = {{1,2}, {3,4}, {7,6}};
    mm.push_back(make_pair(5,6));

    for (auto p : mm) {
        cout << p.first << " " << p.second << el;
    }
}

/*
===============================
6) MAP
===============================
- Key + Value
- Keys are unique
- Sorted automatically
*/
void map_example() {
    map<string, int> map_1;

    map_1["max"] = 9;
    map_1["mariam"] = 10;
    map_1.insert({"mmm", 5});

    cout << map_1.size() << el;

    for (auto m : map_1) {
        cout << m.first << " " << m.second << el;
    }
}

/*
===============================
7) SET
===============================
- Stores unique elements only
- Sorted automatically
- No duplicates
*/
void set_example() {
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(3); // ignored (duplicate)

    for (auto x : s) {
        cout << x << el;
    }

    // s.find(x) -> returns iterator if found
    // s.erase(x) -> removes element
}

/*
===============================
8) DEQUE
===============================
- Double Ended Queue
- Insert and delete from front and back
*/
void deque_example() {
    deque<int> d;

    d.push_back(10);   // add at back
    d.push_front(20);  // add at front
    d.push_back(30);

    cout << d.front() << el; // first element
    cout << d.back() << el;  // last element

    d.pop_front(); // remove from front
    d.pop_back();  // remove from back
}

/*
===============================
MAIN
===============================
*/
int main() {
    FIO;

    vector_example();
    stack_example();
    queue_example();
    pair_example();
    vector_pair_example();
    map_example();
    set_example();
    deque_example();

    return 0;
}

