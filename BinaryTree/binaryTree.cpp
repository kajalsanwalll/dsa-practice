#include <iostream>
using namespace std;

struct Queue{

    int size;
    int front;
    int rear;
    int *Q;

};

void create(struct Queue *q, int size){

    q->size = size;
    q->front = q->rear = 0;
    q->Q = new int[q->size];

}

void enqueue(struct Queue *q, int x){

    if((q->rear+1)% q->size == q->front){
        cout << "queue is full" << endl;
    }
    else{

        q->rear = (q->rear+1)% q->size;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q){

    int x = -1;

    if(q->front == q->rear){

        cout << "queue is empty!";
    }
    else{

        q->front = (q->front+1)% q->size;
        x = q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q){

    return q.front == q.rear;
}




int main(){




    return 0;
}