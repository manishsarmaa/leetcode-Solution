/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
              ListNode *fast = head; // Initialize fast pointer to head
        ListNode *slow = head; // Initialize slow pointer to head
        while (fast != NULL && fast->next != NULL) { 
            fast = fast->next->next; 
            slow = slow->next; 
            if (fast == slow) { 
                return true;
            }
        }
        return false; 
  
    }
};