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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head)
            return head;
        int length = 0;
        ListNode *curr = head;
        while (curr)
        {
            curr = curr->next;
            length++;
        }
        k %= length;
        ListNode *prev = nullptr;
        curr = head;
        while (k--)
        {
            curr = head;
            while (curr->next)
            {
                prev = curr;
                curr = curr->next;
            }
            curr->next = head;
            head = curr;
            prev->next = nullptr;
        }
        return head;
    }
};