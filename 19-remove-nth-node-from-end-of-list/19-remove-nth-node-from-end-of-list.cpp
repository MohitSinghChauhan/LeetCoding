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
        vector<ListNode*> ans;
        int cnt=0;
        
        while(temp!=NULL){
            cnt++;
            ans.push_back(temp);
            temp=temp->next;
        }
        
        int index = cnt-n;
         if(index==0) head=head->next;
        else {
        temp=ans[index-1];
        temp->next=temp->next->next;
        }
                
        return head;
        
    }
};