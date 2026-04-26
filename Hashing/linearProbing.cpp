#include <iostream>
using namespace std;
#define SIZE 10

int Hash(int key){

    return key%SIZE;

}

int probe(int H[], int key){

    int index = Hash(key);
    int i=0;
    while(H[(index+i)%SIZE]!=0){
        i++;
    }

    return (index+i)%SIZE;
}
void Insert(int H[], int key){

    int index = Hash(key);
    if(H[index]!=0){
        index = probe(H,key);
    }
    H[index] = key;

}

int Search(int H[], int key){
    int index = Hash(key);

    int i=0;

    while(H[(index+i)%SIZE]!= key){
        i++;
    }
    return (index+i)%SIZE;
}

int main(){

    int HT[10] ={0};

    Insert(HT,12);
    Insert(HT,4);
    Insert(HT,9);
    Insert(HT,14);

    cout << "key found at " << Search(HT,14) << endl;

    return 0;
}