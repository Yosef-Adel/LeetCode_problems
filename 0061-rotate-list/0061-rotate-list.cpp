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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head|| !head->next){
            return head;
        }
        ListNode* node =head;
        int m=0;
        while(node){
           m++;
            node=node->next;
        }
        int n=0;
        if(k>=m){
           n=k%m; 
        }else{
            n=k;
        }
       for(int i=0 ;i<n;i++){
           head =oneRotate(head);
       }
        return head;
      
       
    } 
    
    ListNode* oneRotate(ListNode* head){
        ListNode* tail =head->next;
        ListNode* end =head;
        
        while(tail->next){
            end=tail;
            tail=tail->next;
        }
        
        tail->next=head;
        end->next=nullptr;
        return tail;
    }
};