#include <iostream>
#include <climits>

struct ListNode {
    int data;
    ListNode* next;
    ListNode(int x) : data(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* temp = new ListNode(INT_MIN);
        while (head) {
            ListNode* a = temp;
            ListNode* b = temp->next;
            while (b && b->data < head->data) {
                a = b;
                b = b->next;
            }
            ListNode* c = head->next;
            a->next = head;
            head->next = b;
            head = c;
        }
        return temp->next;
    }
};

void display(ListNode* node) {
    while (node) {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

int main() {
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);

    Solution obj;
    head = obj.sortList(head);
    display(head);

    return 0;
}
