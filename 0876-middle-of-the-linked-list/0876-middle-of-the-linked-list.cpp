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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr)
        {
            fast= fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};
/*
 vector<int>result;
        int count = 0;
                ListNode* temp = head;
                while (temp != NULL) {
                    count++;
                    temp = temp->next;            
                }
                cout<<count<<endl;
                temp = head;
                int i=0;
                while (i < count/2) {
                   temp = temp->next;
                   i++;
                }
                return temp;
*/