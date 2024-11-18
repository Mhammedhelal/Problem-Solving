/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        int length = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            length++;
            temp = temp->next;
        }
        if (length == 1)
        {
            head = NULL;
            return head;
        }
        if (length == 2)
        {
            head->next = NULL;
            return head;
        }
        length /= 2;
        temp = head;
        int indx = 0;
        ListNode *prev;
        while (temp != NULL && indx < length)
        {
            indx++;
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete temp;

        return head;
    }
};