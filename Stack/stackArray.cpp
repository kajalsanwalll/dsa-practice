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




int main(){


    return 0;
}