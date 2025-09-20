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
ListNode* mid(ListNode *head){
    ListNode *fast=head->next,*slow=head;
    while(fast!=nullptr && fast->next!= nullptr ){
        fast=fast->next->next;
        slow = slow->next;
    }
    return slow;

}
ListNode* mergeSort(ListNode* list1 , ListNode* list2){
    ListNode* dummynode = new ListNode(-1);
    ListNode* temp = dummynode;
    while(list1!=nullptr && list2!=nullptr){
        if(list1->val<list2->val){
            temp->next=list1;
            temp=temp->next;
            list1 = list1->next;
        }
        else{
            temp->next=list2;
            temp = temp->next;
            list2= list2->next;

        }
    }
    if(list1){temp->next = list1;}
    else{temp->next = list2;}
    return dummynode->next;
}

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){return head;}
        ListNode* temp = head;
        ListNode* middle = mid(temp);
        ListNode* left = temp,*right = middle->next;
        middle->next = nullptr;
        ListNode* lefthead = sortList(left), *righthead = sortList(right);
        return mergeSort(lefthead,righthead);
    }
};