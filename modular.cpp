//modular style of programming includes separate functions outside main
//easy to track mistakes

#include <iostream>
#include <stdio.h>

using namespace std;

int area(int length, int breadth){
    return length*breadth;
}

int parameter(int length, int breadth){
    return 2*(length+breadth);
}

int main(){
    int length=0,breadth=0;

    cout << "enter length and breadth: ";
    cin >> length >> breadth;

    int a = area(length,breadth);
    int peri = parameter(length,breadth);

    cout << "area: " << a << endl;
    cout << "perimeter: " << peri << endl;
    return 0;
}
