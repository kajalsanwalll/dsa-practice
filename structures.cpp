#include <iostream>
#include <stdio.h>

using namespace std;

//creating a structure for a playing card
struct Card
{
    int face;
    int color;
    int shape;
};


int main(){

    //array of structures for 52 cards whoa!
    struct Card deck[52] = {{0,1,1}, {1,3,1}};
    
    cout << deck[0].face << endl;
    cout << deck[1].color << endl;
}