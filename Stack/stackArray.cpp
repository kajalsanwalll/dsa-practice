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


int main(){


    return 0;
}