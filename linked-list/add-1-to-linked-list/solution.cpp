#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class ListNode{
   public:
        int val;
        ListNode* next;
    
    ListNode(int val1, ListNode* next1 = nullptr){
        val = val1;
        next = next1;
    }
};

int helper(ListNode* temp){
    if(temp == nullptr){
        return 1;
    }
    int carry = helper( temp->next );
    temp->val += carry ;
    if(temp->val == 10){
        temp->val = 0;
        return 1;
    }
    return 0;

}

class Solution{
    public:
     ListNode* oneadder(ListNode* head){
        if(head == nullptr){
            return head;
        }
        ListNode* temp = head;
        int carry = helper(temp);
        if (carry == 1){
            ListNode* dummyNode = new ListNode(1);
            dummyNode->next = temp;
            temp = dummyNode ; 
        }
        return temp;

    }
};

int main() {
    ListNode* head = new ListNode(9);
    head->next = new ListNode(9);
    head->next->next = new ListNode(9);

    Solution sol;
    ListNode* result = sol.oneadder(head);

    
    cout << "Result after adding 1: ";
    while (result != nullptr) {
        cout << result->val;
        if (result->next != nullptr) cout << " -> ";
        result = result->next;
    }
    cout << endl;

    return 0;
}