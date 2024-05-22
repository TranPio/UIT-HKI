#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(const int &value) : data(value), next(nullptr), prev(nullptr) {}
};

struct List
{
    Node *head;
    Node *tail;
    List() : head(nullptr), tail(nullptr) {}
};

int main()
{
    List list;

    int n;
    cin >> n;

    // set up the Hash Table using struct Node
    Node **hashTable = new Node*[n + 1];

    // add first node to the list
    hashTable[0] = new Node(0);
    hashTable[1] = new Node(1);
    list.head = list.tail = hashTable[1];

    // add next nodes to the list
    for (int i = 2; i <= n; i++)
    {
        hashTable[i] = new Node(i);

        list.tail->next = hashTable[i];
        hashTable[i]->prev = list.tail;
        list.tail = hashTable[i];
    }

    int m;
    cin >> m;
    int x;
    for (int i = 1; i <= m; i++)
    {
        cin >> x;

        // get address of the node with the value "x" then store to temp
        Node *temp = hashTable[x];

        // bring the node with the id "x" to the list's head
        if (temp == list.tail)
        {
            list.tail = list.tail->prev;
            list.tail->next = nullptr;
            temp->prev = nullptr;
        }
        else if (temp == list.head)
        {
            continue;
        }
        else
        {
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            temp->prev = nullptr;
        }
        temp->next = list.head;
        list.head->prev = temp;
        list.head = temp;
    }

    // print the list
    for (Node *i = list.head; i != nullptr; i = i->next)
    {
        cout << i->data << " ";
    }

    // deallocate the hashTable pointer
    for (int i = 0; i <= n; i++)
    {
        delete hashTable[i];
    }
    delete[] hashTable;

    return 0;
}