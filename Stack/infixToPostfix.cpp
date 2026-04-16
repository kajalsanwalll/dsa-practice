#include <iostream>
using namespace std;

struct Node{    

    char data;
    struct Node *next;  
} *top;

void push(char x){

    struct Node *t;
    t = new Node;

    if(t== NULL){

        cout << "stack is full" << endl;
    }
    else{

        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop(){

    struct Node *t;
    char x = -1;

    if(top == NULL){
        cout << "stack is empty!" << endl;
    }
    else{

        t = top;
        top = top->next;
        x = t->data;
        delete t;   

    }
    return x;
}

void display(){

    struct Node *p;
    p = top;

    while(p != NULL){

        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int pre(char x){

    if(x == '+' || x == '-'){
        return 1;
    }
    else if(x == '*' || x == '/'){
        return 2;
    }
    return 0;
}

int isOperand(char x){

    if(x == '+' || x == '-' || x == '*' || x == '/'){
        return 0;
    }
    return 1;

}

char * InfixToPostfix(const char *infix){

    int i=0, j=0;
    char *postfix;   
    int len = strlen(infix);

    postfix = new char[len + 2];

    while(infix[i] != '\0'){

        if(isOperand(infix[i])){

            postfix[j++] = infix[i++];
        }
        else{

            if(pre(infix[i]) > pre(top->data)){

                push(infix[i++]);
            }
            else{

                postfix[j++] = pop();
            }
        }
    }

    while(top != NULL){

        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    return postfix;
}

int main(){

    const char *infix = "a+b*c-d/e";
    push('#');

    char *postfix = InfixToPostfix(infix);
    cout << postfix << endl;

    return 0;
}