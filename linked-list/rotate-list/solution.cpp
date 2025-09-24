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
        if(head == nullptr || head->next == nullptr ){return head;}
        ListNode* tail = head;
        int length = 1;
        while(tail->next!=nullptr){
            length++ ;
            tail = tail->next;
        }
        if (k%length==0){return head;}
        k=k%length;
        tail->next = head;
        int count = length - k;
        ListNode* temp = head;
        while(count > 1){
            temp = temp ->next;
            count --;

        }
        head = temp->next;
        temp->next = nullptr;
        return head;

    }
};