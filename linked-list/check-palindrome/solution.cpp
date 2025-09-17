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
 ListNode* reverseList(ListNode* head){
    if(!head || head->next==nullptr){
        return head;
    }
    ListNode* newheadq = reverseList(head->next);
    ListNode* front = head->next;
    front->next = head;
    head->next = nullptr;
    return newheadq;
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==nullptr)return true;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next!=nullptr && fast->next->next!= nullptr){
            slow=slow->next;
            fast= fast->next->next;
        }
        ListNode* newhead = reverseList(slow->next);
        slow=newhead;
        fast = head;
        while(slow!=nullptr){
            if(fast->val != slow->val){
            reverseList(newhead);
            return false;}
            fast=fast->next;
            slow= slow->next;
        }
        reverseList(newhead);
        return true;

       
    }
};
