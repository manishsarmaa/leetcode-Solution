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
ListNode* findmiddle(ListNode*head){
        ListNode*slow=head;
        ListNode*fast=head->next;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
}
    
ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* ans=new ListNode(-1);
        ListNode*ptr=ans;

        if(list1==0)return list2;
        if(list2==0)return list1;

        while(list1 && list2){
          if(list1->val<=list2->val){
            ptr->next=list1;
            ptr=list1;
            list1=list1->next;
            }
            else{
                ptr->next=list2;
                ptr=list2;
                list2=list2->next;
            }
        }
        if(list1){
            ptr->next=list1;
        }
        if(list2){
            ptr->next=list2;
        }
        return ans->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head==0 || head->next==0){
            return head;
        }       
        ListNode*middle=findmiddle(head);
        ListNode*left=head;
        ListNode*right=middle->next;
        middle->next=0;
        
        left=sortList(left);
        right=sortList(right);
        
        ListNode*sorted=merge(left,right);
        return sorted;
    }
};