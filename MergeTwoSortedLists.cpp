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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        ListNode dummy; // Dummy node to simplify edge cases
        ListNode* tail = &dummy; // Tail pointer of new list to build the merged list

        // while remaining nodes in both lists
        while (list1 && list2)
        {

            // if list 1s value is smaller
            if (list1->val < list2->val)
            {
                //add list 1 node to the merged list and move list 1 pointer
                tail->next = list1;
                list1 = list1->next;
            }
            else
            {

                //add list 2 node to the merged list and move list 2 pointer
                tail->next = list2;
                list2 = list2->next;
            }
            // move the tail pointer of the merged list
            tail = tail->next;

        }
        // if there are remaning nodes in just 1 list, add them to the merged list
        tail->next = list1 ? list1 : list2;
        return dummy.next;
    }
};