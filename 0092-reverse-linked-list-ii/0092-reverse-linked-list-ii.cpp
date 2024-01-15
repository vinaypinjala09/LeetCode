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
        
        int count = 1;     
        ListNode *temp = head;
        ListNode *temp1 = NULL;
        while(count != left){
            temp1=temp;
            temp=temp->next;
            count++;
        }
        cout<<temp->val;
        
        ListNode *last = temp,*prev = NULL,*curr=temp,*fast=temp;
        
        while(left!=right+1){
           
            fast = fast->next;
            curr->next = prev;
            prev = curr;
            curr = fast;
            left++;
            
        }
        last->next = fast;
        if(!temp1) return prev;
        temp1->next = prev;
        return head;
        
        
    }
};