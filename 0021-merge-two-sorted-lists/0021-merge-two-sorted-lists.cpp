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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* i = list1;
        ListNode* j = list2;
        ListNode* list3 = new ListNode(0);
        ListNode* temp = list3;
        while(i != NULL && j != NULL)
        {
            if(i->val <= j->val)
            {   
                temp->next = i;
                i = i->next;
                
            }
            else
            {
                temp->next = j;
                j = j->next;
            }
            temp = temp->next;
        }
        if(i == NULL)
        {
            while(j != NULL)
            {
                temp->next = j;
                j = j->next;
                temp = temp->next;
            }
        }
        else if(j == NULL)
        {
            while(i != NULL)
            {
                temp->next = i;
                i = i->next;
                temp = temp->next;
            }
        }
        list3 = list3->next;
        return list3;
    }
};