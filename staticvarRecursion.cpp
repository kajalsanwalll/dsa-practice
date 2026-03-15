#include <stdio.h>
#include <iostream>

using namespace std;

int fun(int n){

    //static variable declaration and initialisation
    static int x=0;

    if (n>0){

        x++;
       
        return fun(n - 1) + x;
        
    }
    
    return 0;
}

int fun2(int n){
    if(n>0){
        return fun2(n-1) +n;
    }
    return 0;
}

int main(){
    int y1,y2;
    
    y2 = fun2(5);
    cout <<"y2 is:" << y2 <<endl;

    y1 = fun(3);
    cout << "y1 is:" << y1 << endl;

    return 0;
    
}
