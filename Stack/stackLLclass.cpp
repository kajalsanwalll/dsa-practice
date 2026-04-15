#include <iostream>
using namespace std;

class Node{

  public:
    int data;
    Node *next;
};

class Stack{

    private:
      Node *top;

    public:
      Stack(){top = NULL;}
      void push(int x);
      int pop();
      void display();  
};

void Stack::push(int x){

    Node *t = new Node;
    if(t == NULL){
        cout << "stack is full" << endl;
    }
    else{

        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack::pop(){

    int x = -1;

    if(top == NULL){

        cout << "stack is empty!" << endl;
    }
    else{

        x = top->data;
        Node *t = top;
        top = top->next;
        delete t;
    }
    return x;
}


int main(){


    return 0;
}