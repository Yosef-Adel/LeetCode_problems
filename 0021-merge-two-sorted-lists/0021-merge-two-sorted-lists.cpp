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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        ListNode* mergedList = new ListNode(404);
        ListNode* node = mergedList;
        ListNode* head1 = list1;
        ListNode* head2 = list2;

        while(head1 && head2){
            if(head1->val < head2->val){
                node->next = head1;
                node = node->next;
                head1 = head1->next;
            }else{
                node->next = head2;
                node = node->next;
                head2 = head2->next;
            }
        }
        while(head1){
            node->next = head1;
            node = node->next;
            head1 = head1->next;
        }
        while(head2){
            node->next = head2;
            node = node->next;
            head2 = head2->next;
        }

        return mergedList->next;
    }
};