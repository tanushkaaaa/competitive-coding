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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* t=nullptr;
        ListNode* t2=head;

        while(t2 != nullptr){
            if(t2->val==val){
                if(t==nullptr){
                    head=head->next;
                    t2=head;
                }
                else if(t2->next == nullptr){
                    t->next=nullptr;
                    break;
                
            }else{
                t2=t2->next;
                t->next=t2;
            }
        }else{
            t=t2;
            t2=t->next;
        }
        }
        return head;
    }
};