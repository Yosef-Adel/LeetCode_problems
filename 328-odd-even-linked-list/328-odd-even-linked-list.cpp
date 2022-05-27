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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        
        bool x= true;
        ListNode* odd = new ListNode(head->val); 
        ListNode* even = new ListNode(head->next->val);
        ListNode* o=odd;
        ListNode* e=even;
        head =head->next->next;
        while(head){
            if(x){
                ListNode* d = new ListNode(head->val);
                o->next=d;
                o=o->next;
            }else{
                 ListNode* v = new ListNode(head->val);
                 e->next=v;
                e=e->next;
            }
            x=!x;
            head=head->next;
        }
        o->next = even; // we skip the zero Node
      return odd;
     }
};