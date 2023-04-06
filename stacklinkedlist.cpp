#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>

using namespace std::chrono;
using namespace std;

class Node{
public:
    int data;
    Node* link;

    Node(int n){
        this -> data = n;
        this -> link = NULL;
    }
};

class Stack{
    Node* top;

public:
    Stack() {
         top = NULL; 
    }
  
    void push(int data){

        Node* pointer1 = new Node(data);

        pointer1->data = data;
        pointer1 -> link = 
        pointer1->link = top;
        top = pointer1;
    }
    void pop()
    {
        Node* pointer2 = top;
        if (top == NULL) {
            cout << "Stack Underflow" << endl;
        }
        int pop_element = pointer2 -> data;
        top = top->link;
        delete pointer2;
        cout << pop_element <<endl;
        }
    
    void Display(){
        Node* pointer3;
        if (top != NULL){
            pointer3 = top;
            while(pointer3 != NULL){
                cout<<pointer3 ->data << " ";
                pointer3 =pointer3 -> link;
            }
            cout << endl;
        }
    }
};

int main(){
    auto start = high_resolution_clock::now();
    Stack stack1;
    stack1.push(5);
    stack1.push(5);
    stack1.push(5);
    stack1.push(5);
    stack1.push(5);
    stack1.push(5);
    stack1.pop();
    stack1.pop();
    stack1.pop();
    stack1.Display();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "The execution time is "
       << (duration.count())*0.000001<< " seconds" << endl;
    return 0;
}



