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
 ListNode* reverse(ListNode* first, ListNode* last)
    {
        ListNode* prev = nullptr;
        ListNode* end_next = last->next;
        while ( first != end_next )
        {
            auto tmp = first->next;
            first->next = prev;
            prev = first;
            first = tmp;
        }
        return last;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* node=head;
        for(int i=0;i<k-1 && node;i++){//pointer node is not nullptr
                    node=node->next;
        }
        if(!node) return head;
        ListNode* new_begin = node->next;
        ListNode* new_head=reverse(head,node);
        head->next=reverseKGroup(new_begin,k);
        return new_head;
    }
};