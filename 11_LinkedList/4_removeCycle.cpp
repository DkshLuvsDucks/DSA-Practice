#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    // Constructor
    Node(int val){
        data = val;
        next = NULL;
    }

};

class List{
public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    void print(){
        Node* curr = head;
        while(curr != NULL){
            cout << curr->data << " -> ";
            curr = curr->next;
        }
        cout  << "NULL" << endl;
    }

    void push_back(int val){
        Node* newNode = new Node(val); //dynamic allocation
        if(head == NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void removeCycle(){
        Node *slow, *fast;
        slow = fast = head;
        bool isCycle = false;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                cout << "cycle detected!" << endl;
                isCycle = true;
                break;
            }
        }
        if(!isCycle){
            cout << "no cycle detected..." << endl;
            return;
        }

        // removing
        slow = head;
        if(slow == fast){ // edge case
            while(fast->next != slow){
                fast = fast->next;
            }
            fast->next = NULL;
        } else {
            Node* prev = fast;
            while(slow != fast){
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }
            prev->next = NULL;
        }
        cout << "cycle removed..." << endl;
    }


};
int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.tail->next = ll.head;
    ll.removeCycle();
    ll.removeCycle();
    return 0;   
}