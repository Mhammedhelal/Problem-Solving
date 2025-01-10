/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        Node dummy(0);
        Node *h = &dummy;
        Node *temp = head;
        while (temp)
        {
            h->next = new Node(temp->val);
            h = h->next;
            temp = temp->next;
        }
        temp = head;
        h = dummy.next;
        Node *h2 = h;
        Node *ptr = head;
        while (temp)
        {
            if (temp->random)
            {
                while (ptr != temp->random)
                {
                    ptr = ptr->next;
                    h2 = h2->next;
                }
                h->random = h2;

                h2 = dummy.next;
                ptr = head;
            }
            temp = temp->next;
            h = h->next;
        }

        return dummy.next;
    }
};

//// or
Node *copyRandomList(Node *head)
{
    if (!head)
        return nullptr;

    // Step 1: Create interwoven list
    Node *curr = head;
    while (curr)
    {
        Node *copy = new Node(curr->val);
        copy->next = curr->next;
        curr->next = copy;
        curr = copy->next;
    }

    // Step 2: Assign random pointers
    curr = head;
    while (curr)
    {
        if (curr->random)
        {
            curr->next->random = curr->random->next;
        }
        curr = curr->next->next;
    }

    // Step 3: Restore original list and extract copied list
    Node *dummy = new Node(0);
    Node *copy_curr = dummy;
    curr = head;
    while (curr)
    {
        copy_curr->next = curr->next;
        copy_curr = copy_curr->next;
        curr->next = curr->next->next;
        curr = curr->next;
    }

    return dummy->next;
}