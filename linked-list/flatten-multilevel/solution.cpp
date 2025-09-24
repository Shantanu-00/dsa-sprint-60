#include<iostream>
#include<algorithm>
using namespace std;

class Node {
public:
 int val ;
 Node* next;
 Node* child;

 Node(): val(0), next(nullptr), child(nullptr){}
 Node(int val1): val(val1), next(nullptr), child(nullptr){}
  Node(int val1, Node* nextNode, Node* childNode): val(val1), next(nextNode), child(childNode){}
};

class Solution{
Node* merge(Node* l1 , Node* l2){
    Node* dummyNode = new Node(-1);
    Node* resultant = dummyNode;
    while(l1!= nullptr && l2!= nullptr){
        if(l1->val < l2->val ){
            resultant->child = l1;
            resultant = resultant->child;
            l1= l1->child;
 }
 else{
    resultant->child = l2;
    resultant = resultant->child;
    l2=l2->child;

 }
 resultant->next = nullptr;


    }
     if (l1){resultant->child = l1;}
 if(l2){resultant->child = l2;}
 return dummyNode->child;
}
    public:
Node* flattenLinkedList(Node* head){
    if(head == nullptr || head->next== nullptr){return head;}
    Node* temp = head;
    Node* mergehead = flattenLinkedList(temp->next);
    Node* newhead = merge(temp,mergehead);
    temp ->next = nullptr;
    return newhead;
}
};

// Print the flattened linked list (using child pointers)
void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->child;
    }
    cout << endl;
}

// Print the linked list in a grid-like structure
void printOriginalLinkedList(Node* head, int depth) {
    while (head != nullptr) {
        cout << head->val;

        // If child exists, recursively print it with indentation
        if (head->child) {
            cout << " -> ";
            printOriginalLinkedList(head->child, depth + 1);
        }

        // Add vertical bars for each level in the grid
        if (head->next) {
            cout << endl;
            for (int i = 0; i < depth; ++i) {
                cout << "| ";
            }
        }
        head = head->next;
    }
}

int main() {
    Solution solution;
    
    // Create the exact same linked list with child pointers as in the example
    Node* head = new Node(5);
    head->child = new Node(14);
    
    head->next = new Node(10);
    head->next->child = new Node(4);
    
    head->next->next = new Node(12);
    head->next->next->child = new Node(20);
    head->next->next->child->child = new Node(13);
    
    head->next->next->next = new Node(7);
    head->next->next->next->child = new Node(17);

    // Print the original linked list structure
    cout << "Original linked list:" << endl;
    printOriginalLinkedList(head, 0);
    cout << endl;

    // Flatten the linked list using your Solution class
    Node* flattened = solution.flattenLinkedList(head);
    
    // Print the flattened linked list
    cout << "\nFlattened linked list: ";
    printLinkedList(flattened);

    return 0;
}