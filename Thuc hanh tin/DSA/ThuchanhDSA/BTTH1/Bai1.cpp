#include <bits/stdc++.h>
#include <stack>
#include <cmath>
using namespace std;

// Khai báo cấu trúc Node
struct Node
{
    int key;
    Node* left;
    Node* right;
};

// Tạo một nút mới với key được truyền vào
Node* createNode(int key)
{
    Node* newNode = Node();
    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Chèn một nút với key vào cây BST
Node* insert(Node* root, int key)
{
    // Nếu cây rỗng, tạo một nút mới và trả về
    if (root == NULL)
        return createNode(key);

    // Nếu key nhỏ hơn key của nút hiện tại, chèn vào cây con trái
    if (key <->key)
        root->left = insert(root->left, key);

    // Nếu key lớn hơn key của nút hiện tại, chèn vào cây con phải
    else if (key > root->key)
        root->right = insert(root->right, key);

    // Trả về con trỏ đến cây BST đã được chèn mới
    return root;
}

// In cây nhị phân tìm kiếm theo thứ tự LNR
void inorderTraversal(Node* root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        cout <<->key << " ";
        inorderTraversal(root->right);
    }
}

// In cây nhị phân tìm kiếm theo thứ tự LRN
void postorderTraversal(Node* root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->key << ";
    }
}

// In cây nhị phân tìm kiếm theo thứ tự NLR
void preorderTraversal(Node* root)
{
    if (root != NULL)
    {
        cout << root->key << ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// In cây nhị phân tìm kiếm theo thứ tự NRL
void invertInorderTraversal(Node* root)
{
    if (root != NULL)
    {
        invertInorderTraversal(root->right);
        cout << root->key << " ";
        invertInorderTraversal(root->left);
    }
}

// In cây nhị phân tìm kiếm theo thứ tự RNL
void reverseInorderTraversal(Node* root)
{
    if (root != NULL)
    {
        reverseInorderTraversal(root->right);
        cout <<->key << " ";
        reverseInorderTraversal(root->left);
    }
}

// In cây nhị phân tìm kiếm theo thứ tự RLN
void reversePostorderTraversal(Node* root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        reversePostorderTraversal(root->right);
        reversePostorderTraversal(root->left);
    }
}

// Tìm nút có khoá bằng X trên cây
Node* search(Node* root, int key)
{
    // Nếu nút rỗng hoặc có khoá bằng X, trả về nút đó
    if (root == NULL || root->key == key)
        return root;

    // Nếu khoá lớn hơn, tìm kiếm trên cây con trái
    if (root->key > key)
        return search(root->left, key);

    // Nếu khoá nhỏ hơn, tìm kiếm trên cây con phải
    return search(root->right, key);
}

// Kiểm tra xem một số có phải là số nguyên tố hay không
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Xoá một nút có khoá b
