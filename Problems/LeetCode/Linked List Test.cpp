#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class MyLinkedList
{
    ListNode *head;
    ListNode *tail;
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
        if (index < 0 || index >= length) // Fix: Check for negative indices
            return -1;
        if (index == 0)
            return head->val;
        if (index == length - 1)
            return tail->val;

        ListNode *temp = head;
        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
        }
        return temp->val;
    }

    void addAtHead(int val)
    {
        ListNode *newNode = new ListNode(val, head);
        head = newNode;
        if (length == 0)
            tail = head;
        length++;
    }

    void addAtTail(int val)
    {
        ListNode *newNode = new ListNode(val);
        if (length == 0)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    void addAtIndex(int index, int val)
    {
        if (index > length || index < 0)
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
            ListNode *temp = head;
            for (int i = 0; i < index - 1; i++)
            {
                temp = temp->next;
            }
            ListNode *newNode = new ListNode(val, temp->next);
            temp->next = newNode;
            length++;
        }
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= length)
            return;

        ListNode *delNode;
        if (index == 0)
        {
            delNode = head;
            head = head->next;
            if (length == 1)
                tail = nullptr;
        }
        else
        {
            ListNode *temp = head;
            for (int i = 0; i < index - 1; i++)
            { // Fix: No redundant i++
                temp = temp->next;
            }
            delNode = temp->next;
            temp->next = delNode->next;
            if (index == length - 1)
                tail = temp;
        }
        delete delNode;
        length--;
    }
};

ListNode *reverseList(ListNode *head)
{
    ListNode *curr = head, *prev = nullptr, *next;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}
ListNode *reverseListRecursively(ListNode *head)
{
    if (!head->next)
        return head;
    head = reverseListRecursively(head->next);
    ListNode *prev = head->next;
    prev->next = head;
    head->next = nullptr;
}
bool isPalindrome(ListNode *head)
{
    if (!head || !head->next)
        return true;

    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode *prev = nullptr;
    ListNode *curr = slow;
    while (curr)
    {
        ListNode *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    ListNode *firstHalf = head;
    ListNode *secondHalf = prev;
    while (secondHalf)
    {
        if (firstHalf->val != secondHalf->val)
        {
            return false;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }
    return true;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *tempA = headA;
    ListNode *tempB = headB;
    int countA = 0, countB = 0;
    while (tempA)
    {
        countA++;
        tempA = tempA->next;
    }
    while (tempB)
    {
        countB++;
        tempB = tempB->next;
    }
    if (countA >= countB)
    {
        tempA = headA;
        tempB = headB;
    }
    else
    {
        tempA = headB;
        tempB = headA;
    }
    int diff = abs(countA - countB);
    while (diff--)
    {
        tempA = tempA->next;
    }

    while (tempA)
    {
        if (tempA == tempB)
            return tempA;
        tempA = tempA->next;
        tempB = tempB->next;
    }
    return nullptr;
}
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    if (!head)
        return nullptr;

    ListNode *temp = head;
    int count = 0;

    // Count the total number of nodes in the list
    while (temp)
    {
        temp = temp->next;
        count++;
    }

    // Determine the node's position from the beginning
    n = count - n;

    // Handle the case where the head node is removed
    if (n == 0)
    {
        ListNode *toDelete = head;
        head = head->next;
        delete toDelete;
        return head;
    }

    temp = head;
    ListNode *prev = nullptr;

    // Traverse to the node to be removed
    while (n--)
    {
        prev = temp;
        temp = temp->next;
    }

    // Remove the node
    prev->next = temp->next;
    delete temp;

    return head;
}

bool hasCycle(ListNode *head)
{
    map<ListNode *, int> nodeCount;
    ListNode *temp = head;
    while (temp)
    {
        nodeCount[temp]++;
        if (nodeCount[temp] > 1)
            return true;
        temp = temp->next;
    }
    return false;
}
bool hasCycleUsingTwoPointers(ListNode *head)
{
    if (!head || !head->next)
        return false; // If the list is empty or has only one node, no cycle

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;       // Move slow by 1 step
        fast = fast->next->next; // Move fast by 2 steps

        if (slow == fast)
        { // If slow meets fast, there is a cycle
            return true;
        }
    }

    return false; // If we reach here, fast reached the end, so no cycle
}
ListNode *detectCycle(ListNode *head)
{
    if (!head || !head->next)
        return nullptr;

    map<ListNode *, int> nodeCount;
    ListNode *temp = head;
    while (temp)
    {
        nodeCount[temp]++;
        if (nodeCount[temp] > 1)
            return temp;
        temp = temp->next;
    }
    return nullptr;
}
ListNode *detectCycleUsingTwoPointers(ListNode *head)
{
    if (!head || !head->next)
        return nullptr;

    ListNode *slow = head;
    ListNode *fast = head;

    // Step 1: Detect if a cycle exists
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        { // Cycle detected
            // Step 2: Find the start of the cycle
            ListNode *start = head;
            while (start != slow)
            {
                start = start->next;
                slow = slow->next;
            }
            return start; // Start of the cycle
        }
    }

    return nullptr; // No cycle
}
ListNode *deleteDuplicates(ListNode *head)
{
    if (!head || !head->next)
        return head;
    ListNode *temp = head;
    while (temp && temp->next)
    {
        if (temp->val == temp->next->val)
            temp->next = temp->next->next;
        else
            temp = temp->next;
    }
    return head;
}
ListNode *removeElements(ListNode *head, int val)
{
    if (!head)
        return head;
    while (head->val == val)
    {
        if (head->next == NULL)
            return NULL;
        head = head->next;
    }
    ListNode *ptr = head;
    while (ptr && ptr->next)
    {
        if (ptr->next->val == val)
            ptr->next = ptr->next->next;
        else
            ptr = ptr->next;
    }
    return head;
}
ListNode *oddEvenList(ListNode *head)
{
    if (!head || !head->next)
        return head;

    ListNode *odd = head;
    ListNode *even = head->next;
    ListNode *evenHead = even;
    while (even && even->next)
    {
        odd->next = odd->next->next;
        odd = odd->next;

        even->next = even->next->next;
        even = even->next;
    }
    odd->next = evenHead;

    return head;
}
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (!list1)
        return list2;
    if (!list2)
        return list1;
    ListNode *ptr, *another, *temp;
    bool flag = true;
    if (list1->val > list2->val)
    {
        ptr = list2;
        another = list1;
        flag = false;
    }
    else
    {
        ptr = list1;
        another = list2;
    }

    while (ptr->next)
    {
        if (ptr->next->val > another->val)
        {
            temp = ptr->next;
            ptr->next = another;
            another = temp;
        }
        ptr = ptr->next;
    }
    ptr->next = another;

    return flag ? list1 : list2;
}
ListNode *add_next(ListNode *head, int val)
{
    ListNode *temp = new ListNode();
    temp->val = val;
    temp->next = NULL;

    head->next = temp;

    return temp;
}
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode dummy(0);          // Dummy node to simplify handling the head of the result list
    ListNode *sumList = &dummy; // Pointer to the current node in the result list
    int carry = 0;              // To store carry from addition

    // Loop until both lists are exhausted and no carry remains
    while (l1 || l2 || carry)
    {
        int sum = carry; // Start with carry from the previous operation

        if (l1)
        {
            sum += l1->val;
            l1 = l1->next; // Move to the next node in l1
        }
        if (l2)
        {
            sum += l2->val;
            l2 = l2->next; // Move to the next node in l2
        }

        // Create a new node for the current digit of the sum
        sumList->next = new ListNode(sum % 10);
        sumList = sumList->next; // Move to the next node in the result list

        // Update carry for the next iteration
        carry = sum / 10;
    }

    return dummy.next; // Return the next node of dummy as the head of the result list
}
void print_data(ListNode *head) // O(n)
{
    if (head == NULL)
        return;
    ListNode *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
    cout << "\n";
}
int main()
{

    return 0;
}