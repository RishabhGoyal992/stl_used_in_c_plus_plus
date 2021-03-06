/*
Stack in C++ STL

Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end and (top) an element is removed from that end only.
 
The functions associated with stack are:
empty() – Returns whether the stack is empty – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the top most element of the stack – Time Complexity : O(1

*/


#include <iostream>
#include <stack>

using namespace std;

void show(stack <int> s){
    stack <int> x = s;
    cout<<"\n";
    while(!x.empty()){
        cout<<x.top()<<" ";
        x.pop();
    }
    cout<<"\n";
}

int main(){
    stack <int> s;
    
    for(int i=0;i<5;i++){
        s.push(i+1);
    }
    
    show(s);
    
    cout<<"\n"<<s.top();
    s.pop();
    show(s);
    
    cout<<"size is : "<<s.size();
    return 0;
}
