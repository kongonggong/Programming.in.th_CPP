
/*
    */

#include <iostream>
#include <vector>
#include <cmath>

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


TreeNode* numberToBinaryTree(int num) {
    if (num == 0) return new TreeNode(0);

    std::vector<int> binary;
    while (num > 0) {
        binary.push_back(num % 2);
        num /= 2;
    }

    TreeNode* root = new TreeNode(binary.back());
    binary.pop_back();
    TreeNode* current = root;

    for (auto it = binary.rbegin(); it != binary.rend(); ++it) {
        TreeNode* newNode = new TreeNode(*it);
        current->right = newNode;
        current = newNode;
    }

    return root;
}

std::pair<TreeNode*, int> addBinaryTrees(TreeNode* t1, TreeNode* t2) {
    if (!t1 && !t2) return {nullptr, 0};

    if (!t1) t1 = new TreeNode(0);
    if (!t2) t2 = new TreeNode(0);

    auto [leftSum, leftCarry] = addBinaryTrees(t1->left, t2->left);
    auto [rightSum, rightCarry] = addBinaryTrees(t1->right, t2->right);

    int total = t1->val + t2->val + leftCarry + rightCarry;
    int carry = total / 2;
    total = total % 2;

    TreeNode* newNode = new TreeNode(total);
    newNode->left = leftSum;
    newNode->right = rightSum;

    return {newNode, carry};
}

int binaryTreeToNumber(TreeNode* node) {
    if (!node) return 0;

    int leftVal = binaryTreeToNumber(node->left);
    int rightVal = binaryTreeToNumber(node->right);

    return node->val + (leftVal << 1) + (rightVal << 1);
}

int main() {
    int a,b;
    std::cin >> a >> b;

    TreeNode* treeA = numberToBinaryTree(a);
    TreeNode* treeB = numberToBinaryTree(b);

    auto [resultTree, carry] = addBinaryTrees(treeA, treeB);

    if (carry) {
        TreeNode* newRoot = new TreeNode(carry);
        newRoot->left = resultTree;
        resultTree = newRoot;
    }

    int result = binaryTreeToNumber(resultTree);
    std::cout << a+b;

    return 0;
}
