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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* last = head->next->next;
        ListNode* first = head;
        ListNode* mid = head->next;
        first->next =nullptr;
        while(last){
            mid->next = first;
            first = mid;
            mid=last;
            last=last->next;
        }
         mid->next = first;
            first = mid;
    
        return first;
        
        
    }
};