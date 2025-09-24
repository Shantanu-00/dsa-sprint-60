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
    ListNode* findk(ListNode* temp , int k){
        while(temp!=nullptr && k!=0){
            temp = temp->next;
            k--;
        }
        return temp;

    }

    ListNode* reverse(ListNode* head){
        if(head==nullptr || head->next ==nullptr){return head;}
        ListNode* newhead = reverse(head->next);
        ListNode* front = head->next;
        front->next= head;
        head->next =nullptr;
        return newhead;
    }
        
    public:
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode* temp = head;
       ListNode* prev = nullptr;
       while(temp!= nullptr){
        
        ListNode* kthNode = findk(temp , k-1);
        if(kthNode == nullptr){
            if(prev){prev->next = temp;}
            break;
        }
        ListNode* nextNode = kthNode->next;
        kthNode->next = nullptr;
        ListNode* newhead = reverse(temp);
        if(temp==head){
            head = newhead;
        }
        else{
            prev->next = newhead;
        }
        prev =temp;
        temp=nextNode;
       }
       return head;
    }
};