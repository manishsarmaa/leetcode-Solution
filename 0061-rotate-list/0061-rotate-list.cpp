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
    int getlen(ListNode*head){
        ListNode*temp=head;
        int len=0;
       while(temp!=NULL){
        temp=temp->next;
           len++;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return 0;
        int len=getlen(head);
        int actualRotate=(k%len);
        if(actualRotate==0) return head;
        int newlastnodepos=len-actualRotate-1;
        ListNode*newlastNode=head;
        for(int i=0;i<newlastnodepos;i++){
            newlastNode=newlastNode->next;
        }
        ListNode*newhead=newlastNode->next;
        newlastNode->next=0;
        ListNode*it=newhead;
        while(it->next){
            it=it->next;
        }
        it->next=head;
        return newhead;
    }
};