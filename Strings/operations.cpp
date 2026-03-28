#include <iostream>
using namespace std;

char S[] = "WELCOME";

int main(){

    // for length of string
    int i;
    for(i=0; S[i] != '\0'; i++){}
    cout << "length of string is: " << i << endl; // length = i because \0 is not counted

    //for changing the case 
    cout << "original case: " << S << endl;
    for(i=0; S[i]!= '\0'; i++){
        S[i] = S[i] + 32; //changing to lowercase
    }
    cout << "changed case: " << S << endl;
    return 0;
}