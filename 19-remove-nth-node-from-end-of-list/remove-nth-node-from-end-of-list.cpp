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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // ListNode* slow=head;
        // ListNode* fast=head;
        // for(int i=0; i<n;i++){
        //     fast=fast->next;
        // }
        // if(fast==NULL) return head->next;
        // while(fast->next!=NULL){
        //     fast=fast->next;
        //     slow=slow->next;
        // }
        
        // slow->next=slow->next->next;
        
        // return head;
        int len=1;
        ListNode* tail=head;
        while(tail->next){
            tail=tail->next;
            len++;
        }
        if(len==n) return head->next;
        tail=head;
        for(int i=0;i<len-n-1;i++){
            tail=tail->next;
        }
         tail->next = tail->next->next;
          return head;
    }
};