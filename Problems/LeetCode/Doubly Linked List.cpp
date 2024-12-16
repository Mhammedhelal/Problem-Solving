#include <vector>
#include <iostream>
using namespace std;
struct DoublyListNode
{
    int val;
    DoublyListNode *next, *prev;
    DoublyListNode() : val(0), next(nullptr), prev(nullptr) {}
    DoublyListNode(int x) : val(x), next(nullptr), prev(nullptr) {}
    DoublyListNode(int x, DoublyListNode *n, DoublyListNode *p) : val(x), next(n), prev(p) {}
};

class MyLinkedList
{
    DoublyListNode *head;
    DoublyListNode *tail;
    int length;

public:
    MyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
        length = 0;
    }
    MyLinkedList(vector<int> v)
    {
        for (int i = 0; i < v.size(); i++)
            addAtTail(v[i]);
    }
    MyLinkedList(int arr[])
    {
        int size = sizeof(arr) / sizeof(int);
        for (int i = 0; i < size; i++)
            addAtTail(arr[i]);
    }

    int get(int index)
    {
        if (index < 0 || index >= length)
            return -1;

        DoublyListNode *temp;
        if (index < length / 2) // Traverse from the head
        {
            temp = head;
            for (int i = 0; i < index; i++)
                temp = temp->next;
        }
        else // Traverse from the tail
        {
            temp = tail;
            for (int i = length - 1; i > index; i--)
                temp = temp->prev;
        }
        return temp->val;
    }

    void addAtHead(int val)
    {
        DoublyListNode *newNode = new DoublyListNode(val, head, nullptr);
        if (head)
            head->prev = newNode;
        head = newNode;
        if (length == 0)
            tail = head;
        length++;
    }

    void addAtTail(int val)
    {
        DoublyListNode *newNode = new DoublyListNode(val, nullptr, tail);
        if (tail)
            tail->next = newNode;
        tail = newNode;
        if (length == 0)
            head = tail;
        length++;
    }

    void addAtIndex(int index, int val)
    {
        if (index < 0 || index > length)
            return;

        if (index == 0)
        {
            addAtHead(val);
        }
        else if (index == length)
        {
            addAtTail(val);
        }
        else
        {
            DoublyListNode *temp;
            if (index < length / 2) // Traverse from the head
            {
                temp = head;
                for (int i = 0; i < index - 1; i++)
                    temp = temp->next;
            }
            else // Traverse from the tail
            {
                temp = tail;
                for (int i = length - 1; i >= index; i--)
                    temp = temp->prev;
            }
            DoublyListNode *newNode = new DoublyListNode(val, temp->next, temp);
            if (temp->next)
                temp->next->prev = newNode;
            temp->next = newNode;
            length++;
        }
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= length)
            return;

        DoublyListNode *delNode;
        if (index == 0) // Remove the head
        {
            delNode = head;
            head = head->next;
            if (head)
                head->prev = nullptr;
            else
                tail = nullptr; // List becomes empty
        }
        else if (index == length - 1) // Remove the tail
        {
            delNode = tail;
            tail = tail->prev;
            if (tail)
                tail->next = nullptr;
            else
                head = nullptr; // List becomes empty
        }
        else // Remove a middle node
        {
            DoublyListNode *temp;
            if (index < length / 2) // Traverse from the head
            {
                temp = head;
                for (int i = 0; i < index - 1; i++)
                    temp = temp->next;
            }
            else // Traverse from the tail
            {
                temp = tail;
                for (int i = length - 1; i > index; i--)
                    temp = temp->prev;
            }
            delNode = temp->next;
            temp->next = delNode->next;
            delNode->next->prev = temp;
        }

        // Safely delete the node
        delNode->next = nullptr;
        delNode->prev = nullptr;
        delete delNode;

        length--;
    }
};

DoublyListNode *reverseList(DoublyListNode *head)
{
    if (!head || !head->next)
        return head;
    DoublyListNode *p = head, *curr = head;
    while (curr)
    {
        curr->prev = curr->next;
        curr->next = p;
        p = curr;
        curr = curr->prev;
    }
    head = curr;
    return head;
}
void print_data(DoublyListNode *head) // O(n)
{
    if (head == NULL)
        return;
    DoublyListNode *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
    cout << "\n";
}

int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    // MyLinkedList list(arr);
    // reverseList(list.head);
    // print_data(list.head);

    return 0;
}