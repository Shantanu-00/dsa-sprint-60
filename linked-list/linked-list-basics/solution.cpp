#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val1, Node* next1 = nullptr) : val(val1), next(next1) {}
};

// Create linked list from vector
Node* createLL(const vector<int>& array) {
    if (array.empty()) return nullptr;
    Node* head = new Node(array[0]);
    Node* tail = head;
    for (int i = 1; i < array.size(); ++i) {
        tail->next = new Node(array[i]);
        tail = tail->next;
    }
    return head;
}

// Print linked list
void printLL(Node* head) {
    if (head == nullptr) {
        cout << "empty list";
    } else {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
    cout << endl;
}

// Delete head
Node* delhead(Node* head) {
    if (head == nullptr) return nullptr;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Delete tail
Node* deltail(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

// Delete k-th node
Node* delk(Node* head, int k) {
    if (head == nullptr) return nullptr;
    if (k == 0) return delhead(head);

    Node* prev = head;
    int count = 0;
    while (count < k - 1 && prev != nullptr) {
        count++;
        prev = prev->next;
    }

    if (prev == nullptr || prev->next == nullptr) {
        cout << "k out of bounds" << endl;
        return head;  // ✅ Preserve the list
    }

    Node* temp = prev->next;
    prev->next = temp->next;
    delete temp;
    return head;
}

// Insert at head
Node* inserthead(Node* head, int val) {
    Node* temp = new Node(val);
    temp->next = head;
    return temp;
}

// Insert at tail
Node* inserttail(Node* head, int val) {
    Node* tail = new Node(val);
    if (head == nullptr) return tail;
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = tail;
    return head;
}

// Insert at k-th position
Node* insertk(Node* head, int val, int k) {
    Node* ele = new Node(val);
    if (head == nullptr && k == 0) return ele;
    if (k == 0) {
        ele->next = head;
        return ele;
    }

    int count = 0;
    Node* prev = head;
    while (count < k - 1 && prev != nullptr) {
        count++;
        prev = prev->next;
    }

    if (prev == nullptr) {
        delete ele;
        return head;  // ✅ Preserve the list
    }

    ele->next = prev->next;
    prev->next = ele;
    return head;
}

// Main function with test cases
int main() {
    vector<int> array = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    Node* head = createLL(array);

    cout << "Original list: ";
    printLL(head);

    head = delhead(head);
    cout << "After deleting head: ";
    printLL(head);

    head = deltail(head);
    cout << "After deleting tail: ";
    printLL(head);

    head = delk(head, 4);
    cout << "After deleting 4th index element: ";
    printLL(head);

    head = delk(head, 100);
    cout << "After attempting to delete out-of-bounds index: ";
    printLL(head);

    head = inserthead(head, 100);
    cout << "After inserting 100 at head: ";
    printLL(head);

    head = inserttail(head, 999);
    cout << "After inserting 999 at tail: ";
    printLL(head);

    head = insertk(head, 555, 3);
    cout << "After inserting 555 at index 3: ";
    printLL(head);

    head = insertk(head, 777, 100);
    cout << "After attempting to insert 777 at out-of-bounds index: ";
    printLL(head);

    return 0;
}