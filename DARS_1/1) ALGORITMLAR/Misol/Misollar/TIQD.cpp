#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int value)
{
    Node *newNode = new Node();
    if (newNode == nullptr)
    {
        cout << "Bellek tahsisi basarisiz!" << endl;
        return nullptr;
    }
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node *insert(Node *root, int value)
{
    if (root == nullptr)
    {
        return createNode(value);
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }
    return root;
}

bool search(Node *root, int value)
{
    if (root == nullptr)
    {
        return false;
    }
    if (root->data == value)
    {
        return true;
    }
    if (value < root->data)
    {
        return search(root->left, value);
    }
    else
    {
        return search(root->right, value);
    }
}

void inorderTraversal(Node *root)
{
    if (root != nullptr)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main()
{
    Node *root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "Daraxtdagi elementlar: ";
    inorderTraversal(root);
    cout << endl;

    int searchValue = 40;
    if (search(root, searchValue))
    {
        cout << searchValue << " qiymati daraxtda mavjud!" << endl;
    }
    else
    {
        cout << searchValue << " qiymati daraxtda mavjud emas!" << endl;
    }

    return 0;
}
