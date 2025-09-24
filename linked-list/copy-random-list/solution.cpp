/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    void createcopylist(Node* head){
        while(head!= NULL){
            Node* copyNode = new Node(head->val);
            copyNode->next = head->next;
            head->next = copyNode;
            head = head->next->next;
        }
    }
    void addrandompointertocopylist(Node* head){
        while(head != NULL){
            if(head->random){
            head->next->random = head->random->next;}
            else{
                head->next->random = NULL;
            }
            head = head->next->next;

        }
    }
    Node* seperatethecopylist(Node* head){
        Node* dummyNode = new Node(-1);
        Node* res = dummyNode;
        while(head != NULL){
            Node* nextelement = head->next->next;
            res->next= head->next;
            head->next = nextelement;
            head=head->next;
            res = res->next;
        }
        return dummyNode->next;
    }
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
        createcopylist(temp);
        addrandompointertocopylist(temp);
        Node* result = seperatethecopylist(temp);
        return result;
    }
};