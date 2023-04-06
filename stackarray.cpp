#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace std::chrono;
int top = -1;
vector<int> stackArr;
int n = 5;

void push(int value){
    
    if(top >= (n-1)){
        cout << "Stack overflow" << endl;
    }
    top++;
    stackArr[top] = value;
}

void pop(){

    if (top <= -1){
        cout << "Stack underflow" << endl;
    }
    cout << stackArr[top] << endl;
    top--;
}
void Display(vector<int> Array){
    
    for(int i = top; i >= 0; i++){
        cout << Array[i] << " ";
    }
}
int main(){

    auto start = high_resolution_clock::now();
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    pop();
    pop();
    pop();
    Display(stackArr);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "The execution time is "
       << (duration.count())*0.000001<< " seconds" << endl;
    return 0;
}

