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
    void reorderList(ListNode* head) {
        if(!head) return;
        ListNode *tmp=head, *half=head, *prev=NULL;
        while(tmp->next && tmp->next->next){
            tmp=tmp->next->next;
            half=half->next;
        }
        if(tmp->next) half->next->next;
        while(half){
            tmp=half->next;
            half->next=prev;
            prev=half;
            half=tmp;
        }
        half=prev;
        while(head && half){
            tmp=head->next;
            prev=half->next;
            head->next=half;
            half->next=tmp;
            head=tmp;
            half=prev;
        }
        if(head && head->next) head->next->next=NULL;
    }
};