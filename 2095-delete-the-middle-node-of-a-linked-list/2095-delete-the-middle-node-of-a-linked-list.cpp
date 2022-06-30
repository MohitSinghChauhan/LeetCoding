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
    ListNode* deleteMiddle(ListNode* head) {
        int n = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        if(n==1){
            return NULL;
        }
        temp=head;
        int half = n/2;
        // while(temp!=NULL){
        //    if(half-1==0) break;
        //     temp=temp->next;
        //     n--;
        // }
        for(int i=0; i<half-1; i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};