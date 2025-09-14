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
        if(head==nullptr)return head;
        if(head->next==nullptr)return head;
        ListNode* temp = head->next;
        ListNode* prev = nullptr;
        while(temp!=nullptr){
            head->next=prev;
            prev=head;
            head=temp;
            temp=temp->next;

        }
        head->next=prev;
        
        return head;
        
        
        


    }
};