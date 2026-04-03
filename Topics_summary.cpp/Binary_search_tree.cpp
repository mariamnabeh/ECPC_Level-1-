#include <iostream>
using namespace std;
# include <vector>

struct Node {
    int val;
    int left, right;
};

vector<Node> tree;

// Inorder: Left Root Right
void inorder(int root) {
    if (root == -1) return;

    inorder(tree[root].left);
    cout << tree[root].val << " ";
    inorder(tree[root].right);
}

// Preorder: Root Left Right
void preorder(int root) {
    if (root == -1) return;

    cout << tree[root].val << " ";
    preorder(tree[root].left);
    preorder(tree[root].right);
}

// Postorder: Left Right Root
void postorder(int root) {
    if (root == -1) return;

    postorder(tree[root].left);
    postorder(tree[root].right);
    cout << tree[root].val << " ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    tree.resize(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> tree[i].val >> tree[i].left >> tree[i].right;
    }

    int root = 1;

    inorder(root);
    cout << "\n";

    preorder(root);
    cout << "\n";

    postorder(root);
    cout << "\n";
}