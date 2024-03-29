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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int index = cnt-n;
        temp=head;
        if(index==0) head=head->next;
        int m=1;
        
        while(temp!=NULL){
            if(index==m){
                temp->next=temp->next->next;
                return head;
            }
            temp=temp->next;
            m++;
        }
        
        
        return head;
        
    }
};