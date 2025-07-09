#include<iostream>
using namespace std;

class Queue{
private:
    int f, r;

    int *arr;
    
    int capacity;
    int currSize;

public:
    Queue(int capacity){
        currSize = 0;
        this->capacity = capacity;
        arr = new int[capacity];
        f = r = -1;
    }

    void front(){
        if(empty()){
            cout << "Queue is empty..." << endl;
        } else {
            cout << "front: " << arr[f] << endl;
        }
    }

    void push(int data){
        if(currSize == capacity){
            cout << "Queue is full..." << endl;
            return; 
        }
        if (f == -1) f = 0;
        r = (r+1) % capacity;
        arr[r] = data;
        currSize++; 
    }

    void pop(){
        if(empty()){
            cout << "Queue is empty..." << endl;
            return;
        }
        arr[f] = -1;
        if (f == r) {
            f = r = -1;
        } else {
            f = (f + 1) % capacity;
        }
        currSize--;
    }

    bool empty(){
        return currSize == 0;
    }
};

int main(){
     Queue q(5); // capacity = 5

    cout << "Pushing 10, 20, 30 into queue:\n";
    q.push(10);
    q.push(20);
    q.push(30);
    q.front(); // Expected: 10

    cout << "Popping one element:\n";
    q.pop();
    q.front(); // Expected: 20

    cout << "Pushing 40, 50, 60:\n";
    q.push(40);
    q.push(50);
    q.push(60); // Should fill the queue

    q.front(); // Expected: 20

    cout << "Trying to push into full queue:\n";
    q.push(70); // Should print "Queue is full..."

    cout << "Popping all elements:\n";
    while (!q.empty()) {
        q.front();
        q.pop();
    }

    cout << "Trying to pop from empty queue:\n";
    q.pop(); // Should print "Queue is empty..."

    cout << "Pushing again after emptying queue:\n";
    q.push(100);
    q.push(200);
    q.front(); // Expected: 100

    return 0;
}