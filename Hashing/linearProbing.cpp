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
    


}

int main(){

    int HT[10];

    return 0;
}