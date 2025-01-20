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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){
            return head;
        }
       ListNode* d = new ListNode(0,head);
      
        ListNode* pre =d;
        ListNode* cur = head;
        for(int i =1; i<left;i++){
            pre=cur;
            cur=cur->next;
        }
        ListNode* p= nullptr; 
        int m= right-left +1;
        for(int i=0;i<m;i++){
            ListNode* nn=cur->next;
            cur->next=p;
            p=cur;
            cur=nn;
        }
        pre->next->next = cur;
        
        pre->next=p;
        return d->next;
        
    }
};