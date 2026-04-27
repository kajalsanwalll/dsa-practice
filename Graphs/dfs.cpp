#include <iostream>
using namespace std;

struct Node{

    int data;
    struct Node *next;
}*front = NULL, *rear = NULL;

void enqueue(int x){

    struct Node *t;
    t = new Node;

    if(t == NULL){
        cout << "queue is full";
    }
    else{

        t->data =x;
        t->next = NULL;
        if(front==NULL){
            front=rear = t;
        }else{

            rear->next = t;
            rear = t;
        }
    }
}

int dequeue(){

    int x = -1;
    struct Node *t;

    if(front == NULL){
        cout << "queue is empty!";
    }
    else{
        x = front->data;
        t = front;
        front = front->next;
        delete t;
    }
    return x;
}

int isEmpty(){
    return front == NULL;
}

// DFS
void DFS(int G[][7], int start, int n){

    int i=start;
    static int visited[7] ={0};

    if(visited[start] == 0){

        cout << start << " ";
        visited[start]=1;

        for (int j=1;j<n;j++){

            if(G[start][j] == 1 && visited[j]==0){
                DFS(G,j,n);
            }
        }
    }
     

}

int main(){


    int G[7][7] = {{0,0,0,0,0,0,0},
                   {0,0,1,1,0,0,0},
                   {0,1,0,0,1,0,0},
                   {0,1,0,0,1,0,0},
                   {0,0,1,1,0,1,1},
                   {0,0,0,0,1,0,0},
                   {0,0,0,0,1,0,0}};

    DFS(G,1,7);               

    return 0;
}