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
    ListNode* swapPairs(ListNode* head) {
        if(!head  || !head->next){
            return head;
        }
        
        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* link = NULL;
        ListNode* newHead = head->next;
        while(second){
            first->next = second->next;
             second->next= first;
            if(link){
                link->next= second;
            }
            link = first;
            first= first->next;
            if(first){  
                // check if the node exist
                second=  first->next;
            }else{
                second= NULL;
            }
            
            
        }
       return  newHead;
    }
};