// merge two sorted list
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        // if list1 happen to be NULL
        // we will simply return list2
        if (l1 == NULL)
        {
            return l2;
        }
        // if list2 happen to be NULL
        // we will simply return list1
        if (l2 == NULL)
        {
            return l1;
        }
        // if value pointed by l1 is less than equal to value pointed by l2
        // we will call recursively l1->next and whole l2 list
        if (l1->val <= l2->val)
        {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        // we will call recursive l1 whole list and l2->next
        else
        {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};