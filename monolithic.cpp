// all code in int main = monolithic style of coding

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int length=0;
    int breadth=0;

    cout<<"enter length and breadth: " << endl;
    cin >> length >> breadth;

    int area = length*breadth;
    int peri = 2*(length+breadth);

    cout << "area: " << area << endl;
    cout << "perimeter: " << peri <<endl;


    return 0;

}