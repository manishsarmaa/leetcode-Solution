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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*slow=head, *fast=head->next, *lastnode=0;
        if(!head) return 0;
        int sum=0;
        while(fast){
            if(fast->val!=0){
             sum+=fast->val;
            }
            else{
                slow->val=sum;
                lastnode=slow;
                slow=slow->next;
                sum=0;
            }
            fast=fast->next;
        }
        lastnode->next=0;
        return head;
    }
};