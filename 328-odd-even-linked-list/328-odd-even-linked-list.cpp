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
        bool x= true;
        ListNode* odd = new ListNode(); 
        ListNode* even = new ListNode();
        ListNode* o=odd;
         ListNode* e=even;
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
        o->next = even->next; // we skip the zero Node
      return odd->next;
     }
};