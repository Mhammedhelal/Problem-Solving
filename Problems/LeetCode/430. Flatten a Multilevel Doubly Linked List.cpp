/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution
{
public:
    Node *flatten(Node *head)
    {
        Node *ptr = head;
        Node *temp = nullptr;
        Node *ch = nullptr;
        while (ptr)
        {
            if (ptr->child)
            {
                temp = ptr->child;
                ch = ptr->child;
                while (temp->next)
                {
                    temp = temp->next;
                }
                if (ptr->next)
                {
                    temp->next = ptr->next;
                    temp->next->prev = temp;
                }
                ptr->next = ch;
                ch->prev = ptr;
                ptr->child = nullptr;
            }
            ptr = ptr->next;
        }
        return head;
    }
};