#include <iostream>
using namespace std;

struct Stack{

    int size;
    int Top;
    int *s;

};

void create(struct Stack *st){

    cout << "enter size: " ;
    cin >> st->size;
    st->Top = -1;
    st->s = new int[st->size];
}

void display(struct Stack *st){

    int i;
    for(i=st->Top;i>=0;i--){
        cout << st->s[i] << " ";
    }
    cout << endl;
}

void push(struct Stack *st, int x){

    if(st->Top == st->size - 1){

        cout << "stack overflow" << endl;
    }
    else{

        st->Top++;
        st->s[st->Top] = x;
    }
}

int pop(struct Stack *st){

    int x = -1;
    if(st->Top == -1){

        cout << "stack underflow" <<endl;
    }
    else{

        st->s[st->Top] = x;
        st->Top--;

    }
    return x;
}

int main(){

    struct Stack st;
    create(&st);

    push(&st, 20);
    push(&st, 10);
    push(&st, 50);

    display(&st);


    return 0;
}