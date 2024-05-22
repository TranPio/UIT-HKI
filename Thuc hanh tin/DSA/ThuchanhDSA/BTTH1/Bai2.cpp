#include <bits/stdc++.h>
using namespace std;

// Khai báo cấu trúc Student
struct Student
{
    int id;
    string name;
    float gpa;
};

// Khai báo cấu trúc Node
struct Node
{
    Student student;
    Node* left;
    Node* right;
};

// Tạo một nút mới với thông tin sinh viên được truyền vào
Node* createNode(Student s)
{
    Node* newNode = new Node();
    newNode->student = s;
    newNode->left =;
    newNode->right = NULL;
   ột sinh viên vào cây BST
Node* insert(Node* root, Student s)
{
    // Nếu cây rỗng, tạo một nút mới và trả về
    if (root == NULL)
        return createNode(s);

    // Nếu id nhỏ hơn id của nút hiện tại, chèn vào cây con trái
    if (s.id <->student.id)
        root->left = insert(root->left, s);

    // Nếu id lớn hơn id của nút hiện tại, chèn vào cây con phải
    else if (s.id > root->student.id)
        root->right = insert(root->right, s);

    // Trả về con trỏ đến cây BST đã được chèn mới
    return root;
}

// Tìm một sinh viên trên cây theo mã số
Node* searchByID(Node* root, int id)
{
    // Nếu nút rỗng hoặc có mã số bằng id, trả về nút đó
    if (root == NULL || root->student.id == id)
        return root;

    // Nếu id nhỏ hơn, tìm kiếm trên cây con trái
    if (root->student.id > id)
        return searchByID(root->left, id);

    // Nếu id lớn hơn, tìm kiếm trên cây con phải
    return searchByID(root->right, id);
}

// Tìm một sinh viên trên cây theo tên
void searchByName(Node* root, const string& name)
{
    if (root != NULL)
    {
        searchByName(root->left, name);
        if (root->student.name == name)
            cout << "ID: " << root->student.id << Name: " << root->student.name << ", GPA: " << root->student.gpa <<;
        searchByName(root->right, name);
    }
}

// Xóa các sinh viên có điểm trung bình là 5.0 ra khỏi cây
Node* deleteGPA5(Node* root)
{
    if (root == NULL)
        return NULL;

    root->left = deleteGPA5(root->left);
    root->right = deleteGPA5(root->right);

    if (root->student.gpa == 5.0)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
    }

    return root;
}

// Hiển thị danh sách sinh viên khi duyệt cây theo điểm trung bình giảm dần
void displayStudentsDesc(Node* root)
{
    if (root != NULL)
    {
        displayStudentsDesc(root->right);
        cout << "ID: " << root->student.id << ", Name: " << root->student.name << ", GPA: " <<->student.gpa <<;
        displayStudentsDesc(root->left);
    }
}

// Tính chiều cao của cây
int height(Node* root)
{
    if (root == NULL)
        return 0;
    else
    {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return max(leftHeight, rightHeight) + 1;
    }
}

// Tính số bậc của Node
int main(){

return 0;
}
