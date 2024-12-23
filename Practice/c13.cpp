#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* sortedArrayToBST(int arr[], int start, int end) {
    if (start > end) {
        return nullptr;
    }
    int mid = start + (end - start) / 2;
    TreeNode* root = new TreeNode(arr[mid]);
    root->left = sortedArrayToBST(arr, start, mid - 1);
    root->right = sortedArrayToBST(arr, mid + 1, end);
    return root;
}

void inOrder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than zero." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter array elements in ascending order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {
            cout << "Array is not in ascending order." << endl;
            return 0;
        }
    }
    
    TreeNode* root = sortedArrayToBST(arr, 0, n - 1);

    cout << "In-order traversal of the constructed BST: ";
    inOrder(root);
    cout << endl;

    return 0;
}
