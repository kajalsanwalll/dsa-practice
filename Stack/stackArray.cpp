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
        cout << st->s[i];
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



int main(){


    return 0;
}