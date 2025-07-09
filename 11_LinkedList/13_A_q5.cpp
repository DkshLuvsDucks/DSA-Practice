#include <iostream>
#include <vector>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

ListNode* merge(ListNode* list1, ListNode* list2) {
    ListNode* merged = new ListNode(-1); // dummy node
    ListNode* mptr = merged;

    ListNode* left = list1;
    ListNode* right = list2;

    while (left != NULL && right != NULL) {
        if (left->val <= right->val) {
            mptr->next = left;
            left = left->next;
        } else {
            mptr->next = right;
            right = right->next;
        }
        mptr = mptr->next;
    }

    if (left != NULL) mptr->next = left;
    if (right != NULL) mptr->next = right;

    return merged->next;
}

ListNode* mergeKLists(vector<ListNode*>& lists) {
    if (lists.size() == 0) return NULL;
    if (lists.size() == 1) return lists[0];

    ListNode* head = lists[0];
    for (int i = 1; i < lists.size(); i++) {
        head = merge(head, lists[i]);
    }
    return head;
}

void push_back(ListNode*& head, int val) {
    ListNode* newNode = new ListNode(val);
    if (!head) {
        head = newNode;
        return;
    }
    ListNode* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    ListNode* l1 = NULL;
    ListNode* l2 = NULL;
    ListNode* l3 = NULL;

    push_back(l1, 1);
    push_back(l1, 3);

    push_back(l2, 6);
    push_back(l2, 8);

    push_back(l3, 9);
    push_back(l3, 10);

    vector<ListNode*> lists = {l1, l2, l3};

    ListNode* merged = mergeKLists(lists);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}
